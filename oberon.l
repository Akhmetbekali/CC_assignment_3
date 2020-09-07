%{
#include "oberon.tab.h"
void handleComment(void);
%}

letter      [A-Za-z]
digit       [0-9]
hexDigit    {digit}|[A-F]
ScaleFactor [DE][+-]?{digit}+

INTEGER     {digit}+|{digit}{hexDigit}*"H"
REAL        {digit}+"."{digit}*{ScaleFactor}?

IDENT       {letter}({letter}|{digit})*
CHAR        {digit}{hexDigit}*"X"
STRING      ['][^']*[']|["][^"]*["]

DOSEOF      \x1A
WS          [ \t]
NL          [\n\r]

%%

"(*"  		  { handleComment(); }
{WS}		    { /* Ignore whitespace */ ; }
{NL}		    { yylineno++; }

":="    	  { return(ASSIGN); }
"<="        { return(LTEQ); } 
">="      	{ return(GTEQ); }
".."      	{ return(DOTDOT); }

"ARRAY"		  { return(ARRAY); }
"BEGIN"		  { return(OBEGIN); }
"BY"		    { return(BY); }
"CASE"		  { return(CASE); }
"CONST"		  { return(CONST); }
"DIV"		    { return(DIV); }
"DO"		    { return(DO); }
"ELSE"		  { return(ELSE); }
"ELSIF"		  { return(ELSIF); }
"END"		    { return(END); }
"EXIT"		  { return(EXIT); }
"FOR"		    { return(FOR); }
"IF"		    { return(IF); }
"IMPORT"	  { return(IMPORT); }
"IN"		    { return(IN); }
"IS"		    { return(IS); }
"LOOP"		  { return(LOOP); }
"MOD"		    { return(MOD); }
"MODULE"	  { return(MODULE); }
"NIL"		    { return(NIL); }
"OF"		    { return(OF); }
"OR"		    { return(OR); }
"POINTER"	  { return(POINTER); }
"PROCEDURE"	{ return(PROCEDURE); }
"RECORD"	  { return(RECORD); }
"REPEAT"	  { return(REPEAT); }
"RETURN"	  { return(RETURN); }
"THEN"		  { return(THEN); }
"TO"		    { return(TO); }
"TYPE"		  { return(TYPE); }
"UNTIL"		  { return(UNTIL); }
"VAR"		    { return(VAR); }
"WHILE"		  { return(WHILE); }
"WITH"		  { return(WITH); }

{digit}+/".."   { return(CONSTnumber); }

{INTEGER}	  { return(CONSTnumber); }
{REAL}		  { return(CONSTnumber); }
{CHAR}		  { return(CONSTchar); }
{STRING}	  { return(CONSTstring); }

{IDENT}		  { return(ident); }

{DOSEOF}	  { return(EOF); }
.			  { return yytext[0]; }

%%

void handleComment(void)
{
	int nestlevel = 1;
	char c, n;
	while (( c = input() ) != EOF)
	{
		if (c == '*')
		{
      		if (( n = input() ) == ')')
	  		{
      		  	nestlevel--;
      		  	if (nestlevel==0)
      		  	  	break;
      		}
      		else
        		unput(n);
    	}
    	else if (c == '(')
    	{
    		if (( n = input() ) == '*')
    			nestlevel++;
    		else
    			unput(n);
    	}
    	else if (c == '\n')
    		yylineno++;
  }
}
