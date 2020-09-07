/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "oberon.y" /* yacc.c:339  */

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

#line 90 "oberon.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "oberon.tab.h".  */
#ifndef YY_YY_OBERON_TAB_H_INCLUDED
# define YY_YY_OBERON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ident = 258,
    CONSTchar = 259,
    CONSTstring = 260,
    CONSTnumber = 261,
    ARRAY = 262,
    IMPORT = 263,
    GTEQ = 264,
    ASSIGN = 265,
    IN = 266,
    RETURN = 267,
    BY = 268,
    IS = 269,
    THEN = 270,
    CASE = 271,
    LOOP = 272,
    TO = 273,
    CONST = 274,
    LTEQ = 275,
    TYPE = 276,
    DIV = 277,
    MOD = 278,
    UNTIL = 279,
    DO = 280,
    MODULE = 281,
    VAR = 282,
    DOTDOT = 283,
    NIL = 284,
    WHILE = 285,
    ELSE = 286,
    OF = 287,
    WITH = 288,
    ELSIF = 289,
    OR = 290,
    END = 291,
    POINTER = 292,
    EXIT = 293,
    PROCEDURE = 294,
    FOR = 295,
    RECORD = 296,
    IF = 297,
    REPEAT = 298,
    OBEGIN = 299,
    UPLUS = 300,
    UMINUS = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 25 "oberon.y" /* yacc.c:355  */

    int number;
    char symbol;
	char string[30];
	struct nodeType *node;

#line 184 "oberon.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_OBERON_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 201 "oberon.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   748

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  136
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  283

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    46,     2,     2,    55,     2,
      61,    62,    53,    51,    58,    52,    57,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    59,    56,
      47,    45,    48,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,    60,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    65,    63,    66,    64,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    66,    66,    70,    71,    75,    76,    80,    81,    85,
      86,    90,    94,    95,    96,    97,   101,   102,   103,   107,
     108,   112,   113,   117,   118,   122,   126,   130,   131,   132,
     136,   137,   141,   142,   146,   150,   151,   155,   156,   160,
     161,   165,   166,   167,   168,   169,   170,   171,   175,   176,
     180,   181,   182,   186,   187,   188,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   207,   208,
     212,   213,   217,   218,   222,   223,   227,   228,   232,   233,
     237,   238,   242,   243,   247,   252,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   278,   279,   280,   281,   282,
     283,   284,   285,   290,   294,   295,   299,   300,   304,   305,
     310,   314,   315,   316,   317,   318,   323,   324,   328,   329,
     334,   335,   339,   340,   344,   345,   346
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ident", "CONSTchar", "CONSTstring",
  "CONSTnumber", "ARRAY", "IMPORT", "GTEQ", "ASSIGN", "IN", "RETURN", "BY",
  "IS", "THEN", "CASE", "LOOP", "TO", "CONST", "LTEQ", "TYPE", "DIV",
  "MOD", "UNTIL", "DO", "MODULE", "VAR", "DOTDOT", "NIL", "WHILE", "ELSE",
  "OF", "WITH", "ELSIF", "OR", "END", "POINTER", "EXIT", "PROCEDURE",
  "FOR", "RECORD", "IF", "REPEAT", "OBEGIN", "'='", "'#'", "'<'", "'>'",
  "UPLUS", "UMINUS", "'+'", "'-'", "'*'", "'/'", "'&'", "';'", "'.'",
  "','", "':'", "'^'", "'('", "')'", "'|'", "'~'", "'{'", "'}'", "'['",
  "']'", "$accept", "Module", "optImportList", "ImportSpecList",
  "ImportSpec", "optStatBody", "DeclSeq", "CVT_List", "ProcList",
  "ConstDeclList", "TypeDeclList", "VarDeclList", "ProcDecl",
  "ForwardDecl", "optFormalPars", "optFPList", "FPList", "FormalParam",
  "IdentList", "optReceiver", "optVAR", "Type", "ConstExprList",
  "FieldList", "StatementSeq", "Statement", "ElifList", "optElse", "optBY",
  "CaseList", "Case", "CaseLabelList", "CaseLabels", "GuardStatList",
  "Guard", "ConstExpr", "Expr", "Factor", "Set", "optElementList",
  "ElementList", "Element", "Designator", "optSuffix", "optExprList",
  "ExprList", "IdentDefList", "Qualident", "IdentDef", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,    61,    35,    60,    62,   300,
     301,    43,    45,    42,    47,    38,    59,    46,    44,    58,
      94,    40,    41,   124,   126,   123,   125,    91,    93
};
# endif

#define YYPACT_NINF -217

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-217)))

#define YYTABLE_NINF -41

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-41)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -11,    15,    22,   -32,  -217,    40,    30,    87,    42,    -6,
       2,    64,    64,    64,    31,    39,    76,  -217,    30,   -13,
      87,    35,    87,    36,    87,    29,    34,    79,    57,   -17,
    -217,    38,    43,  -217,  -217,  -217,  -217,  -217,   155,  -217,
      14,  -217,    14,    64,   -25,   155,   155,    79,   155,   117,
    -217,   120,   155,    79,  -217,    68,   122,   124,    69,   106,
      64,    39,    39,  -217,  -217,  -217,  -217,   155,   155,   155,
       8,   155,    98,   646,  -217,  -217,  -217,   100,    25,   137,
     102,     4,   108,  -217,   110,  -217,   164,   -25,   155,   155,
    -217,   646,   317,   132,   364,   138,   145,   112,   162,   411,
     149,    79,   155,   118,    64,  -217,   171,   102,  -217,  -217,
     200,   200,   222,  -217,   458,   111,  -217,   121,    64,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   177,    14,   150,   123,    14,
       7,  -217,   117,   147,   126,    64,    64,   -25,  -217,   269,
     125,  -217,   127,   155,  -217,    79,    79,   153,    79,   117,
     155,    79,   155,  -217,   646,  -217,   102,   131,   135,  -217,
     155,  -217,   155,  -217,   693,   693,   693,   693,  -217,  -217,
      48,   693,   693,   693,   693,    48,    48,  -217,  -217,  -217,
    -217,  -217,    14,   155,  -217,   134,  -217,   141,   190,   136,
    -217,    14,  -217,  -217,  -217,   155,   -25,   -25,   138,   139,
     142,   151,   172,   167,  -217,  -217,   148,  -217,   505,   174,
     646,  -217,   207,    87,   646,  -217,  -217,  -217,   156,   106,
     159,   165,    64,   158,  -217,  -217,  -217,   182,   155,    79,
     155,   155,  -217,   117,   155,   155,   138,   163,    31,   117,
    -217,   190,    14,   191,    64,  -217,  -217,  -217,  -217,  -217,
    -217,   552,   599,   193,  -217,   194,  -217,  -217,  -217,  -217,
    -217,   155,   201,    79,  -217,   234,  -217,    79,   174,  -217,
     202,  -217,  -217
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     4,     0,    15,     8,     0,
       6,    20,    22,    24,    10,    18,     0,     3,     0,   134,
      15,     0,    15,     0,    15,     0,   130,    55,     0,    38,
      11,     0,     0,     7,     5,   136,   135,    12,     0,    13,
       0,    14,     0,     0,   125,    67,     0,    55,     0,     0,
      65,     0,     0,    55,     9,    54,    57,     0,    38,    40,
       0,    18,    18,   107,   108,   106,   109,     0,     0,     0,
       0,   115,     0,    85,   104,   110,   105,   132,     0,     0,
      29,    52,     0,    41,     0,   131,     0,   125,   127,   127,
     120,    66,     0,     0,     0,    71,     0,     0,     0,     0,
       0,    55,     0,     0,     0,    39,     0,    29,    16,    17,
      94,    95,     0,   112,   118,     0,   114,   117,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
      31,    47,     0,     0,     0,    22,    24,   125,   123,   128,
       0,   126,     0,    77,    63,    55,    55,     0,    55,     0,
       0,    55,     0,    53,    56,     2,    29,     0,     0,   111,
       0,   113,     0,    19,    91,    92,    93,    89,   101,   102,
      98,    86,    87,    88,    90,    96,    97,    99,   100,   103,
     133,    43,     0,     0,    46,     0,    30,    33,     0,     0,
      45,     0,    21,    23,   121,     0,   125,   125,    71,    74,
       0,    78,    80,     0,    70,    64,    83,    84,     0,    69,
      61,    26,     0,    15,   119,   116,    42,    48,    28,    40,
      35,     0,    52,    51,   129,   124,   122,     0,    77,    55,
       0,     0,    60,     0,     0,     0,    71,     0,    10,     0,
      32,     0,     0,     0,    52,    59,    75,    76,    79,    81,
      82,    73,     0,     0,    37,     0,    27,    36,    34,    44,
      50,     0,     0,    55,    58,     0,    72,    55,    69,    25,
       0,    68,    62
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -217,  -217,  -217,   221,  -217,    -8,    18,     3,   -16,   129,
     103,    97,  -217,  -217,  -103,  -217,    20,  -217,     5,   204,
     199,   -39,    66,  -216,   -45,  -217,   -15,  -199,  -217,    26,
    -217,    32,  -217,    23,  -217,   -37,    16,   195,  -217,  -217,
      99,  -217,   -27,   -81,   192,    74,     6,   -44,    47
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     9,    10,    28,    14,    15,    30,    20,
      22,    24,    31,    32,   141,   195,   196,   197,   231,    60,
     198,    82,   137,   143,    54,    55,   246,   157,   272,   208,
     209,   210,   211,    95,    96,   212,    73,    74,    75,   115,
     116,   117,    76,    90,   150,   151,   144,    83,    26
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,    72,    93,    84,   168,    97,   148,    19,   100,   237,
     -40,    44,    63,    64,    65,     1,   253,    77,     3,    25,
      56,    78,     4,    37,     5,    39,    56,    41,    44,    63,
      64,    65,    86,     8,   105,    87,    88,    66,   270,    35,
      36,   138,    89,    58,    59,   108,   109,   263,     6,    85,
      17,    79,    16,    80,    66,    81,   163,   136,    21,    23,
      18,    91,    92,   221,    94,   142,   204,    19,    99,    69,
     123,   124,    70,    71,    56,    27,    67,    68,    29,    33,
      38,    40,    44,   110,   111,   112,    69,   114,    42,    70,
      71,    45,    43,    57,    61,    46,    47,   191,   199,    62,
     194,   132,   133,   134,   149,   149,    11,   107,    12,    48,
     213,   214,    49,   216,    13,   217,   219,    50,   164,    51,
      77,    52,    53,    98,   101,   235,   236,   103,    56,    56,
      59,    56,   102,   105,    56,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   166,    25,   226,   118,   139,   138,   135,    44,    63,
      64,    65,   233,   140,   145,    21,   146,   147,   154,   156,
     158,   159,   160,   162,   167,   165,   218,   171,   220,   172,
     190,   193,   192,   200,    66,   201,   224,   206,   114,   215,
     222,   223,    23,   230,   257,   207,   228,   229,   232,    97,
     241,   239,   238,   242,   259,   266,    67,    68,   245,   240,
     247,   243,    56,   268,   254,   249,    69,   251,   255,    70,
      71,   149,   123,   124,   252,   264,   277,   269,   278,   274,
     275,   119,   280,   120,   276,   125,   121,   279,   282,    34,
     265,   248,   122,   203,   123,   124,    56,   173,   202,   250,
      56,   130,   131,   132,   133,   134,   267,   125,   106,   227,
     261,   262,   104,   281,   256,   113,   260,   126,   127,   128,
     129,   225,   258,   130,   131,   132,   133,   134,   119,   234,
     120,   152,     0,   121,   169,     0,     0,     0,     0,   122,
       0,   123,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   126,   127,   128,   129,     0,     0,
     130,   131,   132,   133,   134,     0,   119,   205,   120,     0,
       0,   121,     0,     0,     0,     0,     0,   122,     0,   123,
     124,     0,     0,     0,     0,     0,     0,     0,     0,   153,
       0,     0,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,   127,   128,   129,     0,     0,   130,   131,
     132,   133,   134,   119,     0,   120,     0,     0,   121,     0,
       0,     0,     0,     0,   122,     0,   123,   124,     0,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   126,
     127,   128,   129,     0,     0,   130,   131,   132,   133,   134,
     119,     0,   120,     0,     0,   121,   161,     0,     0,     0,
       0,   122,     0,   123,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   126,   127,   128,   129,
       0,     0,   130,   131,   132,   133,   134,   119,     0,   120,
       0,     0,   121,     0,     0,     0,     0,     0,   122,     0,
     123,   124,     0,     0,     0,     0,   170,     0,     0,     0,
       0,     0,     0,   125,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,   127,   128,   129,     0,     0,   130,
     131,   132,   133,   134,   119,     0,   120,     0,     0,   121,
       0,     0,     0,   244,     0,   122,     0,   123,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     126,   127,   128,   129,     0,     0,   130,   131,   132,   133,
     134,   119,     0,   120,     0,   271,   121,     0,     0,     0,
       0,     0,   122,     0,   123,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   125,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   126,   127,   128,
     129,     0,     0,   130,   131,   132,   133,   134,   119,     0,
     120,     0,     0,   121,   273,     0,     0,     0,     0,   122,
       0,   123,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   126,   127,   128,   129,     0,     0,
     130,   131,   132,   133,   134,   119,     0,   120,     0,     0,
     121,     0,     0,     0,     0,     0,   122,     0,   123,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   125,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   126,   127,   128,   129,     0,     0,   130,   131,   132,
     133,   134,   -41,     0,   -41,     0,     0,   -41,     0,     0,
       0,     0,     0,   -41,     0,   123,   124,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -41,   -41,
     -41,   -41,     0,     0,   130,   131,   132,   133,   134
};

static const yytype_int16 yycheck[] =
{
      27,    38,    47,    42,   107,    49,    87,     3,    53,   208,
       3,     3,     4,     5,     6,    26,   232,     3,     3,    13,
      47,     7,     0,    20,    56,    22,    53,    24,     3,     4,
       5,     6,    57,     3,    27,    60,    61,    29,   254,    52,
      53,    78,    67,    60,    61,    61,    62,   246,     8,    43,
      56,    37,    10,    39,    29,    41,   101,    32,    11,    12,
      58,    45,    46,   166,    48,    61,   147,     3,    52,    61,
      22,    23,    64,    65,   101,    44,    51,    52,    39,     3,
      45,    45,     3,    67,    68,    69,    61,    71,    59,    64,
      65,    12,    58,    36,    56,    16,    17,   136,   142,    56,
     139,    53,    54,    55,    88,    89,    19,    60,    21,    30,
     155,   156,    33,   158,    27,   159,   161,    38,   102,    40,
       3,    42,    43,     3,    56,   206,   207,     3,   155,   156,
      61,   158,    10,    27,   161,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   104,   146,   192,    56,    18,   193,    57,     3,     4,
       5,     6,   201,    61,    56,   118,    56,     3,    36,    31,
      25,    59,    10,    24,     3,    57,   160,    66,   162,    58,
       3,    58,    32,    36,    29,    59,   170,    62,   172,    36,
      59,    56,   145,     3,   239,    68,    62,    56,    62,   243,
      28,    59,    63,    36,   241,   249,    51,    52,    34,    58,
       3,    63,   239,   252,    56,    59,    61,    58,    36,    64,
      65,   205,    22,    23,    59,    62,    25,    36,   273,    36,
      36,     9,   277,    11,   271,    35,    14,     3,    36,    18,
     248,   223,    20,   146,    22,    23,   273,   118,   145,   229,
     277,    51,    52,    53,    54,    55,   251,    35,    59,   193,
     244,   245,    58,   278,   238,    70,   243,    45,    46,    47,
      48,   172,   240,    51,    52,    53,    54,    55,     9,   205,
      11,    89,    -1,    14,    62,    -1,    -1,    -1,    -1,    20,
      -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    -1,    -1,
      51,    52,    53,    54,    55,    -1,     9,    58,    11,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    -1,    -1,    51,    52,
      53,    54,    55,     9,    -1,    11,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    22,    23,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    -1,    -1,    51,    52,    53,    54,    55,
       9,    -1,    11,    -1,    -1,    14,    15,    -1,    -1,    -1,
      -1,    20,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      -1,    -1,    51,    52,    53,    54,    55,     9,    -1,    11,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      22,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    54,    55,     9,    -1,    11,    -1,    -1,    14,
      -1,    -1,    -1,    18,    -1,    20,    -1,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    -1,    -1,    51,    52,    53,    54,
      55,     9,    -1,    11,    -1,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    -1,    -1,    51,    52,    53,    54,    55,     9,    -1,
      11,    -1,    -1,    14,    15,    -1,    -1,    -1,    -1,    20,
      -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    -1,    -1,
      51,    52,    53,    54,    55,     9,    -1,    11,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    -1,    -1,    51,    52,    53,
      54,    55,     9,    -1,    11,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    -1,    -1,    51,    52,    53,    54,    55
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,    70,     3,     0,    56,     8,    71,     3,    72,
      73,    19,    21,    27,    75,    76,    10,    56,    58,     3,
      78,   117,    79,   117,    80,   115,   117,    44,    74,    39,
      77,    81,    82,     3,    72,    52,    53,    76,    45,    76,
      45,    76,    59,    58,     3,    12,    16,    17,    30,    33,
      38,    40,    42,    43,    93,    94,   111,    36,    60,    61,
      88,    56,    56,     4,     5,     6,    29,    51,    52,    61,
      64,    65,   104,   105,   106,   107,   111,     3,     7,    37,
      39,    41,    90,   116,    90,   115,    57,    60,    61,    67,
     112,   105,   105,    93,   105,   102,   103,   116,     3,   105,
      93,    56,    10,     3,    88,    27,    89,   117,    77,    77,
     105,   105,   105,   106,   105,   108,   109,   110,    56,     9,
      11,    14,    20,    22,    23,    35,    45,    46,    47,    48,
      51,    52,    53,    54,    55,    57,    32,    91,   104,    18,
      61,    83,    61,    92,   115,    56,    56,     3,   112,   105,
     113,   114,   113,    32,    36,    25,    31,    96,    25,    59,
      10,    15,    24,    93,   105,    57,   117,     3,    83,    62,
      28,    66,    58,    78,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
       3,    90,    32,    58,    90,    84,    85,    86,    89,   116,
      36,    59,    79,    80,   112,    58,    62,    68,    98,    99,
     100,   101,   104,    93,    93,    36,    93,   116,   105,    93,
     105,    83,    59,    56,   105,   109,    90,    91,    62,    56,
       3,    87,    62,    90,   114,   112,   112,    96,    63,    59,
      58,    28,    36,    63,    18,    34,    95,     3,    75,    59,
      85,    58,    59,    92,    56,    36,    98,    93,   100,   104,
     102,   105,   105,    96,    62,    74,   116,    87,    90,    36,
      92,    13,    97,    15,    36,    36,   104,    25,    93,     3,
      93,    95,    36
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    76,    76,    76,    76,    77,    77,    77,    78,
      78,    79,    79,    80,    80,    81,    82,    83,    83,    83,
      84,    84,    85,    85,    86,    87,    87,    88,    88,    89,
      89,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      92,    92,    92,    93,    93,    93,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    95,    95,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   103,   104,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   106,   106,   106,   106,   106,
     106,   106,   106,   107,   108,   108,   109,   109,   110,   110,
     111,   112,   112,   112,   112,   112,   113,   113,   114,   114,
     115,   115,   116,   116,   117,   117,   117
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     9,     3,     0,     3,     1,     3,     1,     2,
       0,     2,     3,     3,     3,     0,     3,     3,     0,     5,
       0,     5,     0,     5,     0,     9,     5,     5,     3,     0,
       1,     0,     3,     1,     4,     1,     3,     6,     0,     1,
       0,     1,     4,     3,     6,     3,     3,     2,     3,     1,
       5,     3,     0,     3,     1,     0,     3,     1,     7,     6,
       5,     4,    10,     3,     4,     1,     2,     1,     5,     0,
       2,     0,     2,     0,     1,     3,     3,     0,     1,     3,
       1,     3,     5,     3,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     3,     1,     0,     3,     1,     1,     3,
       2,     3,     4,     2,     4,     0,     1,     0,     1,     3,
       1,     3,     1,     3,     1,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 66 "oberon.y" /* yacc.c:1646  */
    { print_tree(add_node("MODULE", 3, (yyvsp[-5].node), (yyvsp[-4].node), (yyvsp[-3].node))); }
#line 1572 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 70 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("IMPORT", 1, (yyvsp[-1].node)); }
#line 1578 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 71 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 1584 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 75 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("IMPORT_LIST", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1590 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 76 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("IMPORT_LIST", 1, (yyvsp[0].node)); }
#line 1596 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 80 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("IMPORT_SPEC", 0); }
#line 1602 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 81 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("IMPORT_SPEC", 0); }
#line 1608 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 85 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("BODY", 1, (yyvsp[0].node)); }
#line 1614 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 86 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 1620 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 90 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("DECLARATIONS", 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1626 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 94 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("CONST", 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1632 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 95 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("TYPE", 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1638 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 96 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("VAR", 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1644 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 97 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 1650 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 101 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("PROCEDURES_DECL", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1656 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 102 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("FORWARD_PROCEDURES_DECL", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1662 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 103 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 1668 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 107 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("CONSTANTS", 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1674 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 108 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 1680 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 112 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("TYPES", 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1686 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 113 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 1692 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 117 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("VARIABLES", 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1698 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 118 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 1704 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 122 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("PROCEDURE", 6, (yyvsp[-7].node), (yyvsp[-6].node), (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].string)); }
#line 1710 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 126 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("FORWARD_PROCEDURE", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1716 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 130 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("FORMAL_PARAMS", 2, (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1722 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 131 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("FORMAL_PARAMS", 1, (yyvsp[-1].node)); }
#line 1728 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 132 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 1734 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 136 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("FORMAL_PARAMS", 1, (yyvsp[0].node)); }
#line 1740 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 137 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 1746 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 141 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("FORMAL_PARAMS", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1752 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 142 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("FORMAL_PARAM", 1, (yyvsp[0].node)); }
#line 1758 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 146 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("FORMAL_PARAM", 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1764 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 150 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("IDENTS", 1, (yyvsp[0].string)); }
#line 1770 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 151 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("IDENTS", 2, (yyvsp[-2].string), (yyvsp[0].node)); }
#line 1776 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 155 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("RECEIVER", 3, (yyvsp[-4].node), (yyvsp[-3].string), (yyvsp[-1].string)); }
#line 1782 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 156 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 1788 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 160 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("VAR", 0); }
#line 1794 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 161 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 1800 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 165 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("QUALIDENT", 1, (yyvsp[0].node)); }
#line 1806 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 166 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("ARRAY", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1812 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 167 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("ARRAY", 1, (yyvsp[0].node)); }
#line 1818 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 168 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("RECORD", 2, (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1824 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 169 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("RECORD", 1, (yyvsp[-1].node)); }
#line 1830 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 170 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("POINTER", 1, (yyvsp[0].node)); }
#line 1836 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 171 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("PROCEDURE", 1, (yyvsp[0].node)); }
#line 1842 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 175 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("ConstExpr", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1848 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 176 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("ConstExpr", 1, (yyvsp[0].node)); }
#line 1854 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 180 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("FieldList", 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1860 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 181 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("FieldList", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1866 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 182 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 1872 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 186 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("STATEMENTS", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1878 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 187 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("STATEMENTS", 1, (yyvsp[0].node)); }
#line 1884 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 188 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 1890 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 192 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("DesignatorAssign", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1896 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 193 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("Designator", 1, (yyvsp[0].node)); }
#line 1902 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 194 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("IfThenElifElse", 4, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1908 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 195 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("CaseOfElse", 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1914 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 196 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("WhileDo", 2, (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1920 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 197 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("RepeatUntil", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1926 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 198 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("ForAssignToByDo", 5, (yyvsp[-8].string), (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1932 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 199 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("Loop", 1, (yyvsp[-1].node)); }
#line 1938 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 200 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("With", 2, (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1944 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 201 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("EXIT", 0); }
#line 1950 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 202 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("ReturnExpression", 1, (yyvsp[0].node)); }
#line 1956 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 203 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("RETURN", 0); }
#line 1962 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 207 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("Elif", 3, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1968 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 208 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 1974 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 212 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("Else", 1, (yyvsp[0].node)); }
#line 1980 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 213 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 1986 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 217 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("BY", 1, (yyvsp[0].node)); }
#line 1992 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 218 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 1998 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 222 "oberon.y" /* yacc.c:1646  */
    {(yyval.node) = add_node("CaseList", 1, (yyvsp[0].node)); }
#line 2004 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 223 "oberon.y" /* yacc.c:1646  */
    {(yyval.node) = add_node("CaseList", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2010 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 227 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("Case", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2016 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 228 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 2022 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 232 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("CaseLabelList", 1, (yyvsp[0].node)); }
#line 2028 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 233 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("CaseLabelList", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2034 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 237 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("CaseLabel", 1, (yyvsp[0].node)); }
#line 2040 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 238 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("CaseLabel", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2046 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 242 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("GuardStatList", 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2052 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 243 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("GuardStatList", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2058 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 247 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("Guard", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2064 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 252 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("Constant", 1, (yyvsp[0].node)); }
#line 2070 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 256 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("Equal", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2076 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 257 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("#", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2082 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 258 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("Less", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2088 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 259 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("LTEQ", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2094 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 260 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("Greater", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2100 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 261 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("GTEQ", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2106 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 262 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("IN", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2112 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 263 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("IS", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2118 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 264 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("UPLUS", 1, (yyvsp[0].node)); }
#line 2124 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 265 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("UMINUS", 1, (yyvsp[0].node)); }
#line 2130 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 266 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("Add", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2136 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 267 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("Substract", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2142 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 268 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("OR", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2148 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 269 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("Multiply", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2154 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 270 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("Divide", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2160 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 271 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("DIV", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2166 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 272 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("MOD", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2172 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 273 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("AND", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2178 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 274 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("Factor", 1, (yyvsp[0].node)); }
#line 2184 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 278 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("Designator", 1, (yyvsp[0].node)); }
#line 2190 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 279 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("ConstNumber", 1, (yyvsp[0].number)); }
#line 2196 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 280 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("ConstChar", 1, (yyvsp[0].symbol)); }
#line 2202 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 281 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("ConstString", 0); }
#line 2208 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 282 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("NIL", 0); }
#line 2214 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 283 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("FACTORSET", 1, (yyvsp[0].node)); }
#line 2220 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 284 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("EXPRESSION", 1, (yyvsp[-1].node)); }
#line 2226 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 285 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("FACTOR", 1, (yyvsp[0].node)); }
#line 2232 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 290 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("SET", 1, (yyvsp[-1].node)); }
#line 2238 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 294 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("optElementList", 1, (yyvsp[0].node)); }
#line 2244 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 295 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 2250 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 299 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("ElementList", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2256 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 300 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("ElementList", 1, (yyvsp[0].node)); }
#line 2262 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 304 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("ELEMENT", 1, (yyvsp[0].node)); }
#line 2268 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 305 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("ELEMENT", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2274 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 310 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("Designator", 1, (yyvsp[0].node)); }
#line 2280 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 314 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("OptSuffix", 1, (yyvsp[0].node)); }
#line 2286 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 315 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("OptSuffix", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2292 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 316 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("OptSuffix", 1, (yyvsp[0].node)); }
#line 2298 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 317 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("OptSuffix", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2304 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 318 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 2310 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 323 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("EXPRESSIONLIST", 1, (yyvsp[0].node)); }
#line 2316 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 324 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("", 0); }
#line 2322 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 328 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("EXPRESSION", 1, (yyvsp[0].node)); }
#line 2328 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 329 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("EXPRESSION", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2334 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 334 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("IDENTIFIERDef", 1, (yyvsp[0].node)); }
#line 2340 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 335 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("IDENTIFIERDef", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2346 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 339 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("QUALIDENT", 0); }
#line 2352 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 340 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("QUALIDENT", 0); }
#line 2358 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 344 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("IDENTIFIER", 0); }
#line 2364 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 345 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("IDENTIFIER*", 0); }
#line 2370 "oberon.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 346 "oberon.y" /* yacc.c:1646  */
    { (yyval.node) = add_node("IDENTIFIER-", 0); }
#line 2376 "oberon.tab.c" /* yacc.c:1646  */
    break;


#line 2380 "oberon.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 349 "oberon.y" /* yacc.c:1906  */


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
  if (!node) return;
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
