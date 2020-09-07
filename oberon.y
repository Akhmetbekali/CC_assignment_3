%{
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

extern char *yytext;
extern int yylineno;
extern FILE *yyin;

int yyerror(char *msg);
int yylex();

typedef struct nodeType {
    int value;
    char* oper_type;
    int nops;
    struct nodeType** children;
} nodeType;

nodeType *add_node(char* oper_type, int nops, ...);
void print_tree(nodeType* root);
void print_node(nodeType* node, int spaces);
%}

%union {
    int number;
    char symbol;
	char string[30];
	struct nodeType *node;
};

%token <string> ident
%token <symbol> CONSTchar
%token <string> CONSTstring
%token <number> CONSTnumber
%token ARRAY  	IMPORT  	GTEQ
%token ASSIGN  	IN  		RETURN
%token BY  		IS  		THEN
%token CASE  	LOOP  		TO
%token CONST  	LTEQ  		TYPE
%token DIV  	MOD  		UNTIL
%token DO  		MODULE  	VAR
%token DOTDOT	NIL  		WHILE
%token ELSE  	OF  		WITH
%token ELSIF  	OR
%token END  	POINTER  		
%token EXIT  	PROCEDURE
%token FOR  	RECORD  
%token IF  		REPEAT  
%token OBEGIN  	

%nonassoc '='  '#'  '<'  LTEQ  '>'  GTEQ  IN  IS
%nonassoc UPLUS UMINUS

%left '+'  '-'  OR
%left '*'  '/'  DIV  MOD  '&'

%type <node> optImportList ImportSpecList ImportSpec optStatBody DeclSeq CVT_List ProcList ConstDeclList TypeDeclList VarDeclList 
%type <node> ProcDecl ForwardDecl optFormalPars optFPList FPList FormalParam IdentList optReceiver optVAR Type ConstExprList FieldList
%type <node> StatementSeq Statement ElifList optElse optBY CaseList Case CaseLabelList CaseLabels GuardStatList Guard ConstExpr Expr 
%type <node> Factor Set optElementList ElementList Element Designator optSuffix optExprList ExprList IdentDefList Qualident IdentDef

%%

Module:
	MODULE ident ';' optImportList DeclSeq optStatBody END ident '.' { print_tree(add_node("MODULE", 3, $4, $5, $6)); }
	;

optImportList: 
	IMPORT ImportSpecList ';'		{ $$ = add_node("IMPORT", 1, $2); }
	| { $$ = add_node("", 0); }
	;

ImportSpecList: 
	ImportSpec ',' ImportSpecList	{ $$ = add_node("IMPORT_LIST", 2, $1, $3); }
	| ImportSpec					{ $$ = add_node("IMPORT_LIST", 1, $1); }
	;

ImportSpec:
	ident ASSIGN ident				{ $$ = add_node("IMPORT_SPEC", 0); }
	| ident							{ $$ = add_node("IMPORT_SPEC", 0); }
	;

optStatBody:
	OBEGIN StatementSeq				{ $$ = add_node("BODY", 1, $2); }
	| 								{ $$ = add_node("", 0); }
	;

DeclSeq: 
	CVT_List ProcList				{ $$ = add_node("DECLARATIONS", 2, $1, $2); }
	;

CVT_List:
	CONST ConstDeclList CVT_List 	{ $$ = add_node("CONST", 2, $2, $3); }
	| TYPE  TypeDeclList  CVT_List	{ $$ = add_node("TYPE", 2, $2, $3); }
	| VAR   VarDeclList   CVT_List 	{ $$ = add_node("VAR", 2, $2, $3); }
	| { $$ = add_node("", 0); }
	;

ProcList:
	ProcDecl ';' ProcList			{ $$ = add_node("PROCEDURES_DECL", 2, $1, $3); }
	| ForwardDecl ';' ProcList		{ $$ = add_node("FORWARD_PROCEDURES_DECL", 2, $1, $3); }
	| { $$ = add_node("", 0); }
	;

ConstDeclList:
	IdentDef '=' ConstExpr ';' ConstDeclList	{ $$ = add_node("CONSTANTS", 3, $1, $3, $5); }
	| { $$ = add_node("", 0); }
	;

TypeDeclList:
	IdentDef '=' Type ';' TypeDeclList			{ $$ = add_node("TYPES", 3, $1, $3, $5); }
	| { $$ = add_node("", 0); }
	;

VarDeclList: 
	IdentDefList ':' Type ';' VarDeclList		{ $$ = add_node("VARIABLES", 3, $1, $3, $5); }
	| { $$ = add_node("", 0); }
	;

ProcDecl: 
	PROCEDURE optReceiver IdentDef optFormalPars ';' DeclSeq optStatBody END ident { $$ = add_node("PROCEDURE", 6, $2, $3, $4, $6, $7, $9); }
	;

ForwardDecl:
	PROCEDURE '^' optReceiver IdentDef optFormalPars	{ $$ = add_node("FORWARD_PROCEDURE", 3, $3, $4, $5); }
	;

optFormalPars: 
	'(' optFPList ')' ':' Qualident		{ $$ = add_node("FORMAL_PARAMS", 2, $2, $5); }
	| '(' optFPList ')' 				{ $$ = add_node("FORMAL_PARAMS", 1, $2); }
	| { $$ = add_node("", 0); }
	;

optFPList:
	FPList								{ $$ = add_node("FORMAL_PARAMS", 1, $1); }
	| { $$ = add_node("", 0); }
	;

FPList:
	FormalParam ';' FPList				{ $$ = add_node("FORMAL_PARAMS", 2, $1, $3); }
	| FormalParam						{ $$ = add_node("FORMAL_PARAM", 1, $1); }
	;

FormalParam:
	optVAR IdentList ':' Type 			{ $$ = add_node("FORMAL_PARAM", 3, $1, $2, $4); }
	;

IdentList:
	ident								{ $$ = add_node("IDENTS", 1, $1); }
	| ident ',' IdentList				{ $$ = add_node("IDENTS", 2, $1, $3); }
	;

optReceiver: 
	'(' optVAR ident ':' ident ')'		{ $$ = add_node("RECEIVER", 3, $2, $3, $5); }
	| { $$ = add_node("", 0); }
	;

optVAR:
	VAR									{ $$ = add_node("VAR", 0); }
	| { $$ = add_node("", 0); }
	;
 
Type: 
	Qualident									  { $$ = add_node("QUALIDENT", 1, $1); }
	| ARRAY ConstExprList OF Type 				  { $$ = add_node("ARRAY", 2, $2, $4); }
	| ARRAY               OF Type 				  { $$ = add_node("ARRAY", 1, $3); }
	| RECORD '(' Qualident ')' FieldList END	  { $$ = add_node("RECORD", 2, $3, $5); }
	| RECORD                 FieldList END		  { $$ = add_node("RECORD", 1, $2); }
	| POINTER TO Type							  { $$ = add_node("POINTER", 1, $3); }
	| PROCEDURE optFormalPars					  { $$ = add_node("PROCEDURE", 1, $2); }
	;

ConstExprList:
	ConstExpr ',' ConstExprList 	{ $$ = add_node("ConstExpr", 2, $1, $3); }
	| ConstExpr 					{ $$ = add_node("ConstExpr", 1, $1); }
	;

FieldList:
	IdentDefList ':' Type ';' FieldList 	{ $$ = add_node("FieldList", 3, $1, $3, $5); }
	| IdentDefList ':' Type 				{ $$ = add_node("FieldList", 2, $1, $3); }
	| { $$ = add_node("", 0); }
	;

StatementSeq:
	Statement ';' StatementSeq 		{ $$ = add_node("STATEMENTS", 2, $1, $3); }
	| Statement 					{ $$ = add_node("STATEMENTS", 1, $1); }
	| { $$ = add_node("", 0); }
	;

Statement:
	Designator ASSIGN Expr 										{ $$ = add_node("DesignatorAssign", 2, $1, $3); }
	| Designator 												{ $$ = add_node("Designator", 1, $1); }
	| IF Expr THEN StatementSeq ElifList optElse END 			{ $$ = add_node("IfThenElifElse", 4, $2, $4, $5, $6); }
	| CASE Expr OF CaseList optElse END 						{ $$ = add_node("CaseOfElse", 3, $2, $4, $5); }
	| WHILE Expr DO StatementSeq END 							{ $$ = add_node("WhileDo", 2, $2, $4); }
	| REPEAT StatementSeq UNTIL Expr 							{ $$ = add_node("RepeatUntil", 2, $2, $4); }
	| FOR ident ASSIGN Expr TO Expr optBY DO StatementSeq END 	{ $$ = add_node("ForAssignToByDo", 5, $2, $4, $6, $7, $9); }
	| LOOP StatementSeq END 									{ $$ = add_node("Loop", 1, $2); }
	| WITH GuardStatList optElse END 							{ $$ = add_node("With", 2, $2, $3); }
	| EXIT														{ $$ = add_node("EXIT", 0); }
	| RETURN Expr 												{ $$ = add_node("ReturnExpression", 1, $2); }
	| RETURN													{ $$ = add_node("RETURN", 0); }
	;

ElifList:
  	ELSIF Expr THEN StatementSeq ElifList 	{ $$ = add_node("Elif", 3, $2, $4, $5); }
  	| { $$ = add_node("", 0); }
	;

optElse:
  	ELSE StatementSeq 			{ $$ = add_node("Else", 1, $2); }
  	| { $$ = add_node("", 0); }
	;

optBY:
  	BY ConstExpr 				{ $$ = add_node("BY", 1, $2); }
  	| { $$ = add_node("", 0); }
	;

CaseList:
  	Case  						{$$ = add_node("CaseList", 1, $1); }
  	| Case '|' CaseList  		{$$ = add_node("CaseList", 2, $1, $3); }
	;

Case:
  	CaseLabelList ':' StatementSeq 		{ $$ = add_node("Case", 2, $1, $3); }
  	| { $$ = add_node("", 0); }
	;

CaseLabelList:
  	CaseLabels 							{ $$ = add_node("CaseLabelList", 1, $1); }
  	| CaseLabels ',' CaseLabelList 		{ $$ = add_node("CaseLabelList", 2, $1, $3); }
	;

CaseLabels:
  	ConstExpr 							{ $$ = add_node("CaseLabel", 1, $1); }
  	| ConstExpr DOTDOT ConstExpr 		{ $$ = add_node("CaseLabel", 2, $1, $3); }
	;

GuardStatList:
  	Guard DO StatementSeq '|' GuardStatList 	{ $$ = add_node("GuardStatList", 3, $1, $3, $5); }
  	| Guard DO StatementSeq 					{ $$ = add_node("GuardStatList", 2, $1, $3); }
	;

Guard:
  	Qualident ':' Qualident 					{ $$ = add_node("Guard", 2, $1, $3); }
	;

/* block */
ConstExpr:
  	Expr 										{ $$ = add_node("Constant", 1, $1); }
	;

Expr:
  	Expr '=' Expr 				{ $$ = add_node("Equal", 2, $1, $3); }
  	| Expr '#' Expr 			{ $$ = add_node("#", 2, $1, $3); }
  	| Expr '<' Expr 			{ $$ = add_node("Less", 2, $1, $3); }
  	| Expr LTEQ Expr 			{ $$ = add_node("LTEQ", 2, $1, $3); }
  	| Expr '>' Expr 			{ $$ = add_node("Greater", 2, $1, $3); }
  	| Expr GTEQ Expr 			{ $$ = add_node("GTEQ", 2, $1, $3); }
  	| Expr IN Expr 				{ $$ = add_node("IN", 2, $1, $3); }
  	| Expr IS Expr 				{ $$ = add_node("IS", 2, $1, $3); }
  	| '+' Expr %prec UPLUS 		{ $$ = add_node("UPLUS", 1, $2); }
  	| '-' Expr %prec UMINUS 	{ $$ = add_node("UMINUS", 1, $2); }
  	| Expr '+' Expr 			{ $$ = add_node("Add", 2, $1, $3); }
  	| Expr '-' Expr 			{ $$ = add_node("Substract", 2, $1, $3); }
  	| Expr OR Expr 				{ $$ = add_node("OR", 2, $1, $3); }
  	| Expr '*' Expr 			{ $$ = add_node("Multiply", 2, $1, $3); }
  	| Expr '/' Expr 			{ $$ = add_node("Divide", 2, $1, $3); }
  	| Expr DIV Expr 			{ $$ = add_node("DIV", 2, $1, $3); }
  	| Expr MOD Expr 			{ $$ = add_node("MOD", 2, $1, $3); }
  	| Expr '&' Expr 			{ $$ = add_node("AND", 2, $1, $3); }
  	| Factor 					{ $$ = add_node("Factor", 1, $1); }
	;

Factor:
	Designator 		{ $$ = add_node("Designator", 1, $1); }
	| CONSTnumber 	{ $$ = add_node("ConstNumber", 1, $1); }
	| CONSTchar 	{ $$ = add_node("ConstChar", 1, $1); }
	| CONSTstring 	{ $$ = add_node("ConstString", 0); }
	| NIL			{ $$ = add_node("NIL", 0); }
	| Set 			{ $$ = add_node("FACTORSET", 1, $1); }
	| '(' Expr ')' 	{ $$ = add_node("EXPRESSION", 1, $2); }
	| '~' Factor 	{ $$ = add_node("FACTOR", 1, $2); }
	;

/* block */
Set:
	'{' optElementList '}' 	{ $$ = add_node("SET", 1, $2); }
	;

optElementList:
	ElementList 			{ $$ = add_node("optElementList", 1, $1); }
	| { $$ = add_node("", 0); }
	;

ElementList:
	Element ',' ElementList { $$ = add_node("ElementList", 2, $1, $3); }
	| Element 				{ $$ = add_node("ElementList", 1, $1); }
	;

Element:
	Expr 					{ $$ = add_node("ELEMENT", 1, $1); }
	| Expr DOTDOT Expr 		{ $$ = add_node("ELEMENT", 2, $1, $3); }
	;

/* block */
Designator:
	ident optSuffix 		{ $$ = add_node("Designator", 1, $2); }
	;

optSuffix:
	'.' ident  optSuffix 				{ $$ = add_node("OptSuffix", 1, $3); }
	| '[' optExprList ']'  optSuffix 	{ $$ = add_node("OptSuffix", 2, $2, $4); }
	| '^'  optSuffix 					{ $$ = add_node("OptSuffix", 1, $2); }
	| '(' optExprList ')' optSuffix  	{ $$ = add_node("OptSuffix", 2, $2, $4); }/* NB - too wide! (avoiding ambiguity) */
	| { $$ = add_node("", 0); }
	;

/* block */
optExprList:
	ExprList 						{ $$ = add_node("EXPRESSIONLIST", 1, $1); }
	| { $$ = add_node("", 0); }
	;

ExprList:
	Expr 							{ $$ = add_node("EXPRESSION", 1, $1); }
	| Expr ',' ExprList 			{ $$ = add_node("EXPRESSION", 2, $1, $3); }
	;

/* block */
IdentDefList:
  	IdentDef 						{ $$ = add_node("IDENTIFIERDef", 1, $1); }
  	| IdentDef ',' IdentDefList 	{ $$ = add_node("IDENTIFIERDef", 2, $1, $3); }
	;

Qualident:
  	ident 							{ $$ = add_node("QUALIDENT", 0); }
  	| ident '.' ident 				{ $$ = add_node("QUALIDENT", 0); }
	;

IdentDef:
	ident 							{ $$ = add_node("IDENTIFIER", 0); }
	| ident '*' 					{ $$ = add_node("IDENTIFIER*", 0); }
	| ident '-' 					{ $$ = add_node("IDENTIFIER-", 0); }
	;

%%

int yyerror(char *msg)
{
	printf("\n%s at line %d with [%s]\n",msg, yylineno, yytext);
}

nodeType* add_node(char* oper_type, int nops, ...) {
	va_list argp;
    struct nodeType *p;
    int i;

    p = malloc(sizeof(nodeType));
    p->children = malloc(sizeof(nodeType*) * nops);

    if (p == NULL)
		printf("We are out of MEMES");

    p->oper_type = oper_type;
    p->nops = nops;

    va_start(argp, nops);
    for (i = 0; i < nops; i++)
        p->children[i] = va_arg(argp, nodeType*);
    va_end(argp);

    return p;
}

void print_node(nodeType* node, int spaces) {
	if (node->oper_type != "") {
		for (int i = 0; i < spaces; i++)
			printf("  ");
		printf("<%s:%d>\n", node->oper_type, node->nops);
	} else {
		for (int i = 0; i < spaces; i++)
			printf("  ");
		printf("<empty-child>\n");
	}
	spaces = spaces + 1;
  	for (int i = 0; i < node->nops; i++)
		print_node(node->children[i], spaces);
}

void print_tree(nodeType* root) {
  	print_node(root, 0);
}

int main(int argc, char *argv[])
{
	yyin = fopen(argv[1], "r");
	int result = yyparse();
	if (result == 0)
	  	printf("VICTORY! Parsed!\n");
	else
	  	printf("FAIL. Retake. Not parsed.\n");

	exit(result);
}
