/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DEF = 258,
     END = 259,
     IF = 260,
     ELIF = 261,
     ELSE = 262,
     TYPE_ID = 263,
     OPEN_PAREN = 264,
     CLOSE_PAREN = 265,
     TYPE = 266,
     COMMA = 267,
     TIMES = 268,
     NUMBER = 269,
     DIVIDE = 270,
     MINUS = 271,
     PLUS = 272,
     NEWLINE = 273,
     SEMICOLON = 274,
     TYPE_INT = 275,
     TYPE_UINT = 276,
     TYPE_FLOAT = 277,
     TYPE_DOUBLE = 278,
     TYPE_INT8 = 279,
     TYPE_UINT8 = 280,
     TYPE_INT16 = 281,
     TYPE_UINT16 = 282,
     TYPE_INT32 = 283,
     TYPE_UINT32 = 284,
     TYPE_INT64 = 285,
     TYPE_UINT64 = 286,
     TYPE_CHAR = 287,
     TYPE_VOID = 288,
     TYPE_VAR = 289,
     RETURN = 290,
     CLASS = 291,
     USING = 292,
     PUBLIC = 293,
     SHARED = 294,
     PRIVATE = 295,
     OPEN_BRACE = 296,
     CLOSE_BRACE = 297,
     OPEN_BRACKET = 298,
     CLOSE_BRACKET = 299,
     INCREMENT = 300,
     DECREMENT = 301,
     ASSIGN = 302,
     PLUS_ASSIGN = 303,
     MINUS_ASSIGN = 304,
     TIMES_ASSIGN = 305,
     DIVIDE_ASSIGN = 306,
     MOD_ASSIGN = 307,
     ARROW = 308,
     ARROW_LEFT = 309,
     DOT = 310,
     LEQ = 311,
     GEQ = 312,
     COMP_LT = 313,
     COMP_GT = 314,
     MOD = 315,
     VALUE = 316,
     STRING = 317,
     EXTERN = 318,
     VARARG = 319,
     EQUALS = 320,
     NEQUALS = 321,
     WHEN = 322,
     UNLESS = 323,
     LOGICAL_AND = 324,
     LOGICAL_OR = 325,
     BITWISE_AND = 326,
     BITWISE_OR = 327,
     BITWISE_XOR = 328,
     FOR = 329,
     FOREVER = 330,
     LOOP = 331,
     CONTINUE = 332,
     BREAK = 333,
     DO = 334,
     WHILE = 335,
     CONST = 336,
     QUESTION = 337,
     COLON = 338,
     ENUM = 339,
     SIZEOF = 340
   };
#endif
/* Tokens.  */
#define DEF 258
#define END 259
#define IF 260
#define ELIF 261
#define ELSE 262
#define TYPE_ID 263
#define OPEN_PAREN 264
#define CLOSE_PAREN 265
#define TYPE 266
#define COMMA 267
#define TIMES 268
#define NUMBER 269
#define DIVIDE 270
#define MINUS 271
#define PLUS 272
#define NEWLINE 273
#define SEMICOLON 274
#define TYPE_INT 275
#define TYPE_UINT 276
#define TYPE_FLOAT 277
#define TYPE_DOUBLE 278
#define TYPE_INT8 279
#define TYPE_UINT8 280
#define TYPE_INT16 281
#define TYPE_UINT16 282
#define TYPE_INT32 283
#define TYPE_UINT32 284
#define TYPE_INT64 285
#define TYPE_UINT64 286
#define TYPE_CHAR 287
#define TYPE_VOID 288
#define TYPE_VAR 289
#define RETURN 290
#define CLASS 291
#define USING 292
#define PUBLIC 293
#define SHARED 294
#define PRIVATE 295
#define OPEN_BRACE 296
#define CLOSE_BRACE 297
#define OPEN_BRACKET 298
#define CLOSE_BRACKET 299
#define INCREMENT 300
#define DECREMENT 301
#define ASSIGN 302
#define PLUS_ASSIGN 303
#define MINUS_ASSIGN 304
#define TIMES_ASSIGN 305
#define DIVIDE_ASSIGN 306
#define MOD_ASSIGN 307
#define ARROW 308
#define ARROW_LEFT 309
#define DOT 310
#define LEQ 311
#define GEQ 312
#define COMP_LT 313
#define COMP_GT 314
#define MOD 315
#define VALUE 316
#define STRING 317
#define EXTERN 318
#define VARARG 319
#define EQUALS 320
#define NEQUALS 321
#define WHEN 322
#define UNLESS 323
#define LOGICAL_AND 324
#define LOGICAL_OR 325
#define BITWISE_AND 326
#define BITWISE_OR 327
#define BITWISE_XOR 328
#define FOR 329
#define FOREVER 330
#define LOOP 331
#define CONTINUE 332
#define BREAK 333
#define DO 334
#define WHILE 335
#define CONST 336
#define QUESTION 337
#define COLON 338
#define ENUM 339
#define SIZEOF 340




/* Copy the first part of user declarations.  */
#line 9 "/Users/robert/dev/orange/lib/grove/parser.y"

	#include <grove/Module.h>
	#include <grove/ASTNode.h>
	#include <grove/Block.h>
	#include <grove/CondBlock.h>
	#include <grove/Function.h>
	#include <grove/IfStmt.h>
	#include <grove/FunctionCall.h>
	#include <grove/ExternFunction.h>
	#include <grove/Value.h>
	#include <grove/StrValue.h>
	#include <grove/Expression.h>
	#include <grove/ReturnStmt.h>
	#include <grove/BinOpCompare.h>
	#include <grove/BinOpArith.h>
	#include <grove/BinOpAssign.h>
	#include <grove/BinOpAndOr.h>
	#include <grove/Parameter.h>
	#include <grove/IDReference.h>
	#include <grove/NegativeExpr.h>
	#include <grove/VarDecl.h>
	#include <grove/IncrementExpr.h>
	#include <grove/Loop.h>
	#include <grove/LoopTerminator.h>
	#include <grove/DerefExpr.h>
	#include <grove/ReferenceExpr.h>
	#include <grove/CastExpr.h>
	#include <grove/ArrayValue.h>
	#include <grove/ArrayAccessExpr.h>
	#include <grove/TernaryExpr.h>
	#include <grove/AccessExpr.h>
	#include <grove/EnumStmt.h>

	#include <grove/types/Type.h>
	#include <grove/types/IntType.h>
	#include <grove/types/UIntType.h>
	#include <grove/types/FloatType.h>
	#include <grove/types/DoubleType.h>
	#include <grove/types/VoidType.h>
	#include <grove/types/PointerType.h>
	#include <grove/types/VarType.h>
	#include <grove/types/ArrayType.h>
	#include <grove/types/VariadicArrayType.h>

	#include <util/assertions.h>

	extern struct YYLTYPE yyloc;
	extern void yyerror(Module* mod, const char *s);

	extern int yylex(Module* module);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 66 "/Users/robert/dev/orange/lib/grove/parser.y"
{
	std::vector<ASTNode*>* nodes;
	std::vector<Parameter*>* params;
	std::vector<Expression*>* args;
	std::vector<Block*>* blocks;
	std::vector<Expression*>* exprs;
	std::vector<std::tuple<std::string, Expression*>>* pairs;
	std::vector<std::tuple<std::string, Value*>>* vpairs;
	ASTNode* node;
	Block* block;
	Expression* expr;
	Statement* stmt;
	Value* val;
	std::string* str;
	Type* ty;
}
/* Line 193 of yacc.c.  */
#line 335 "/Users/robert/dev/orange/lib/grove/parser.cc"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 360 "/Users/robert/dev/orange/lib/grove/parser.cc"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  90
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1798

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  146
/* YYNRULES -- Number of states.  */
#define YYNSTATES  296

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   340

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    13,    15,    17,    18,
      21,    24,    27,    29,    32,    34,    36,    38,    40,    42,
      44,    46,    48,    50,    52,    54,    63,    73,    76,    77,
      84,    92,   102,   108,   114,   119,   121,   127,   131,   135,
     139,   143,   155,   161,   167,   174,   184,   194,   198,   202,
     205,   208,   210,   211,   213,   214,   219,   222,   226,   228,
     230,   232,   234,   236,   238,   240,   242,   244,   246,   248,
     252,   256,   260,   264,   268,   272,   276,   280,   284,   288,
     292,   296,   300,   304,   308,   312,   316,   320,   324,   328,
     332,   336,   339,   342,   345,   348,   354,   358,   363,   367,
     369,   372,   374,   376,   379,   382,   387,   391,   396,   400,
     404,   406,   408,   411,   414,   418,   424,   426,   430,   436,
     440,   446,   449,   454,   456,   458,   461,   463,   466,   469,
     473,   478,   482,   484,   486,   488,   490,   492,   494,   496,
     498,   500,   502,   504,   506,   508,   510
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      87,     0,    -1,    88,    -1,    88,    90,    -1,    88,    91,
      -1,    90,    -1,    91,    -1,    88,    -1,    -1,    93,   122,
      -1,   108,   122,    -1,   109,   122,    -1,   122,    -1,   118,
     122,    -1,   118,    -1,   109,    -1,    94,    -1,    96,    -1,
      97,    -1,    99,    -1,   100,    -1,   101,    -1,   102,    -1,
     103,    -1,   120,    -1,     3,     8,     9,    10,    95,   122,
      89,     4,    -1,     3,     8,     9,   106,    10,    95,   122,
      89,     4,    -1,    53,   123,    -1,    -1,    63,     8,     9,
      10,    53,   123,    -1,    63,     8,     9,   106,    10,    53,
     123,    -1,    63,     8,     9,   106,    12,    64,    10,    53,
     123,    -1,     5,   109,   122,    88,    98,    -1,     6,   109,
     122,    88,    98,    -1,     7,   122,    88,     4,    -1,     4,
      -1,    68,   109,   122,    88,     4,    -1,   108,     5,   109,
      -1,   109,     5,   109,    -1,   108,    68,   109,    -1,   109,
      68,   109,    -1,    74,     9,   104,    19,   105,    19,   105,
      10,   122,    88,     4,    -1,    80,   109,   122,    88,     4,
      -1,    75,    79,   122,    88,     4,    -1,    79,   122,    88,
       4,    80,   109,    -1,   108,    74,     9,   104,    19,   105,
      19,   105,    10,    -1,   109,    74,     9,   104,    19,   105,
      19,   105,    10,    -1,   108,    80,   109,    -1,   109,    80,
     109,    -1,   108,    75,    -1,   109,    75,    -1,    92,    -1,
      -1,   109,    -1,    -1,   106,    12,   123,     8,    -1,   123,
       8,    -1,   107,    12,   109,    -1,   109,    -1,   117,    -1,
      77,    -1,    78,    -1,    76,    -1,   115,    -1,   110,    -1,
     111,    -1,   114,    -1,   112,    -1,   113,    -1,   109,    58,
     109,    -1,   109,    59,   109,    -1,   109,    56,   109,    -1,
     109,    57,   109,    -1,   109,    65,   109,    -1,   109,    66,
     109,    -1,   109,    69,   109,    -1,   109,    70,   109,    -1,
     109,    17,   109,    -1,   109,    16,   109,    -1,   109,    13,
     109,    -1,   109,    15,   109,    -1,   109,    60,   109,    -1,
     109,    71,   109,    -1,   109,    72,   109,    -1,   109,    73,
     109,    -1,   109,    47,   109,    -1,   109,    48,   109,    -1,
     109,    49,   109,    -1,   109,    50,   109,    -1,   109,    51,
     109,    -1,   109,    52,   109,    -1,   109,    45,    -1,   109,
      46,    -1,    45,   109,    -1,    46,   109,    -1,   109,    82,
     109,    83,   109,    -1,     8,     9,    10,    -1,     8,     9,
     107,    10,    -1,     9,   109,    10,    -1,    61,    -1,    16,
     109,    -1,    62,    -1,     8,    -1,    13,   109,    -1,    71,
     109,    -1,     9,   123,    10,   109,    -1,    43,   116,    44,
      -1,   109,    43,   109,    44,    -1,   109,    55,     8,    -1,
     116,    12,   109,    -1,   109,    -1,    35,    -1,    35,   109,
      -1,   123,   119,    -1,   119,    12,     8,    -1,   119,    12,
       8,    47,   109,    -1,     8,    -1,     8,    47,   109,    -1,
      84,     8,   122,   121,     4,    -1,   121,     8,   122,    -1,
     121,     8,    47,    61,   122,    -1,     8,   122,    -1,     8,
      47,    61,   122,    -1,    18,    -1,    19,    -1,   123,    13,
      -1,   125,    -1,    81,   123,    -1,   125,   124,    -1,   125,
      43,    44,    -1,   124,    43,   109,    44,    -1,    43,   109,
      44,    -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,
      24,    -1,    26,    -1,    28,    -1,    30,    -1,    25,    -1,
      27,    -1,    29,    -1,    31,    -1,    32,    -1,    33,    -1,
      34,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   144,   144,   154,   163,   173,   182,   195,   196,   200,
     201,   202,   203,   207,   214,   218,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   237,   249,   264,   265,   269,
     274,   278,   285,   308,   321,   333,   340,   355,   365,   378,
     388,   401,   413,   424,   435,   449,   456,   463,   469,   475,
     481,   493,   494,   498,   499,   503,   508,   515,   520,   527,
     528,   529,   530,   534,   535,   536,   537,   538,   539,   543,
     544,   545,   546,   547,   548,   550,   551,   555,   556,   557,
     558,   559,   561,   562,   563,   565,   566,   567,   568,   569,
     570,   574,   575,   576,   577,   581,   588,   593,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,   614,
     619,   628,   632,   639,   652,   657,   662,   667,   674,   686,
     690,   694,   699,   706,   707,   711,   715,   719,   723,   755,
     762,   767,   775,   776,   777,   778,   779,   780,   781,   782,
     783,   784,   785,   786,   787,   788,   789
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DEF", "END", "IF", "ELIF", "ELSE",
  "TYPE_ID", "OPEN_PAREN", "CLOSE_PAREN", "TYPE", "COMMA", "TIMES",
  "NUMBER", "DIVIDE", "MINUS", "PLUS", "NEWLINE", "SEMICOLON", "TYPE_INT",
  "TYPE_UINT", "TYPE_FLOAT", "TYPE_DOUBLE", "TYPE_INT8", "TYPE_UINT8",
  "TYPE_INT16", "TYPE_UINT16", "TYPE_INT32", "TYPE_UINT32", "TYPE_INT64",
  "TYPE_UINT64", "TYPE_CHAR", "TYPE_VOID", "TYPE_VAR", "RETURN", "CLASS",
  "USING", "PUBLIC", "SHARED", "PRIVATE", "OPEN_BRACE", "CLOSE_BRACE",
  "OPEN_BRACKET", "CLOSE_BRACKET", "INCREMENT", "DECREMENT", "ASSIGN",
  "PLUS_ASSIGN", "MINUS_ASSIGN", "TIMES_ASSIGN", "DIVIDE_ASSIGN",
  "MOD_ASSIGN", "ARROW", "ARROW_LEFT", "DOT", "LEQ", "GEQ", "COMP_LT",
  "COMP_GT", "MOD", "VALUE", "STRING", "EXTERN", "VARARG", "EQUALS",
  "NEQUALS", "WHEN", "UNLESS", "LOGICAL_AND", "LOGICAL_OR", "BITWISE_AND",
  "BITWISE_OR", "BITWISE_XOR", "FOR", "FOREVER", "LOOP", "CONTINUE",
  "BREAK", "DO", "WHILE", "CONST", "QUESTION", "COLON", "ENUM", "SIZEOF",
  "$accept", "start", "statements", "opt_statements", "statement",
  "compound_statement", "valued", "structures", "function", "type_hint",
  "extern_function", "ifs", "else_if_or_end", "unless", "inline_if",
  "inline_unless", "for_loop", "inline_for_loop", "opt_valued",
  "opt_expression", "param_list", "arg_list", "controls", "expression",
  "comparison", "arithmetic", "increment", "ternary", "call", "primary",
  "expr_list", "return", "var_decl", "var_decl_list", "enum_stmt",
  "enum_members", "term", "type", "array_def_list", "basic_type", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    88,    88,    88,    88,    89,    89,    90,
      90,    90,    90,    91,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    94,    94,    95,    95,    96,
      96,    96,    97,    98,    98,    98,    99,   100,   100,   101,
     101,   102,   102,   102,   102,   103,   103,   103,   103,   103,
     103,   104,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   108,   108,   109,   109,   109,   109,   109,   109,   110,
     110,   110,   110,   110,   110,   110,   110,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   112,   112,   112,   112,   113,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   116,
     116,   117,   117,   118,   119,   119,   119,   119,   120,   121,
     121,   121,   121,   122,   122,   123,   123,   123,   123,   123,
     124,   124,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     0,     2,
       2,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     8,     9,     2,     0,     6,
       7,     9,     5,     5,     4,     1,     5,     3,     3,     3,
       3,    11,     5,     5,     6,     9,     9,     3,     3,     2,
       2,     1,     0,     1,     0,     4,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     5,     3,     4,     3,     1,
       2,     1,     1,     2,     2,     4,     3,     4,     3,     3,
       1,     1,     2,     2,     3,     5,     1,     3,     5,     3,
       5,     2,     4,     1,     1,     2,     1,     2,     2,     3,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,   102,     0,     0,     0,   123,   124,   132,
     133,   134,   135,   136,   140,   137,   141,   138,   142,   139,
     143,   144,   145,   146,   111,     0,     0,     0,    99,   101,
       0,     0,     0,     0,     0,    62,    60,    61,     0,     0,
       0,     0,     0,     2,     5,     6,     0,    16,    17,    18,
      19,    20,    21,    22,    23,     0,     0,    64,    65,    67,
      68,    66,    63,    59,     0,    24,    12,     0,   126,     0,
       0,     0,     0,     0,   103,   100,   112,   110,     0,    93,
      94,     0,     0,   104,    52,     0,     0,     0,   127,     0,
       1,     3,     4,     9,     0,     0,     0,    49,     0,    10,
       0,     0,     0,     0,     0,     0,    91,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,    11,    13,   116,   125,   113,     0,   128,     0,
       0,    96,     0,    58,    98,     0,     0,   106,     0,     0,
      51,     0,    15,    14,     0,     0,     0,     0,    37,    39,
      52,    47,    38,    79,    80,    78,    77,     0,    85,    86,
      87,    88,    89,    90,   108,    71,    72,    69,    70,    81,
      73,    74,    40,    75,    76,    82,    83,    84,    52,    48,
       0,     0,     0,   129,     0,     0,    28,     0,     0,     0,
      97,     0,   105,   109,     0,     0,     0,    54,     0,     0,
       0,     0,     0,     0,   107,     0,     0,   117,   114,   131,
       0,     0,     0,    28,     0,    56,    35,     0,     0,    32,
      57,     0,     0,     0,    36,     0,    53,    43,     0,    42,
       0,   121,   118,     0,    54,    54,    95,     0,   130,    27,
       8,     0,     0,     0,     0,    29,     0,     0,    54,    44,
       0,     0,   119,     0,     0,   115,     7,     0,     8,    55,
       0,     0,    30,     0,     0,   122,     0,    54,    54,    25,
       0,     0,    34,     0,     0,   120,     0,     0,    26,    33,
      31,     0,    45,    46,     0,    41
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    42,   266,   267,    44,    45,   150,    46,    47,   222,
      48,    49,   229,    50,    51,    52,    53,    54,   151,   235,
     197,   142,    55,    56,    57,    58,    59,    60,    61,    62,
      78,    63,    64,   136,    65,   212,    66,    67,   138,    68
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -188
static const yytype_int16 yypact[] =
{
    1000,     5,  1163,    -4,   414,  1163,  1163,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  1163,  1163,  1163,  1163,  -188,  -188,
      14,  1163,  1163,    21,   -43,  -188,  -188,  -188,    89,  1163,
    1332,    46,    60,  1000,  -188,  -188,    89,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,    -1,  1077,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,    89,  -188,  -188,     1,    23,    63,
    1267,   445,  1145,     2,   -35,    88,  1511,  1511,    20,  -188,
    -188,    67,  1267,    10,   414,    89,  1000,  1267,    80,    89,
    -188,  -188,  -188,  -188,  1163,  1163,    71,  -188,  1163,  -188,
    1163,  1163,  1163,  1163,  1163,  1163,  -188,  -188,  1163,  1163,
    1163,  1163,  1163,  1163,    87,  1163,  1163,  1163,  1163,  1163,
    1163,  1163,  1163,  1163,  1163,  1163,  1163,  1163,    93,  -188,
    1163,  1163,  -188,  -188,    51,  -188,    97,  1042,    62,    18,
    1000,  -188,    65,  1511,  -188,  1163,  1163,  -188,    90,  1000,
    -188,   106,  1511,  -188,  1000,   510,  1000,   118,  1511,  1511,
     414,  1511,  1511,   -35,   -35,    88,    88,  1328,  1511,  1511,
    1511,  1511,  1511,  1511,  -188,  1708,  1708,  1708,  1708,   -35,
    1674,  1674,  1511,  1640,  1606,    10,   195,  1727,   414,  1511,
    1206,  1163,   119,  -188,  1389,  1163,    76,    75,     8,   340,
    -188,  1163,   -35,  1511,    77,    82,   592,  1163,   674,    52,
     756,   -12,    25,   116,  -188,   120,  1163,  1511,    91,  -188,
    1450,  1332,    89,    76,  1332,  -188,  -188,  1163,    89,  -188,
    1511,  1332,    84,  1270,  -188,   123,  1511,  -188,  1163,  -188,
      83,  -188,  -188,    50,  1163,  1163,  1572,  1163,  -188,    80,
    1000,    89,    11,  1267,  1000,    80,  1332,   137,  1163,  1511,
      89,    92,  -188,   131,   144,  1511,  1000,   160,  1000,  -188,
    1000,   838,    80,   132,   176,  -188,    89,  1163,  1163,  -188,
     185,   340,  -188,  1332,    89,  -188,   181,   182,  -188,  -188,
      80,  1000,  -188,  -188,   920,  -188
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -188,  -188,     0,   -75,    -9,    61,  -188,  -188,  -188,   -28,
    -188,  -188,   -85,  -188,  -188,  -188,  -188,  -188,  -157,  -187,
      56,  -188,  -188,    57,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,   -82,  -188,  -188,  -188,   241,    -3,  -188,  -188
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      43,    73,   153,   213,    94,    71,     7,     8,   105,   134,
     106,   107,   145,    69,   135,   135,   225,     7,     8,   269,
     114,   135,    81,   101,   135,   102,   103,   104,   196,   242,
      84,   215,   146,   243,    91,   240,    85,    88,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   105,    89,   106,   107,   263,   264,    70,
      90,    72,    74,    75,   147,   114,   137,    95,     7,     8,
     119,   274,   139,    96,    97,   200,   148,   201,   153,    98,
     160,    76,    77,    79,    80,   223,   155,   224,    82,    83,
     286,   287,   232,   135,   233,   174,    87,   261,   191,    40,
     204,   101,   188,   102,    92,   195,   153,     7,     8,   192,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,   207,   211,   218,   143,   221,
     231,   105,   238,   106,   107,   244,   198,   256,   247,   245,
     199,   152,   258,   114,   260,   198,    91,   273,   119,   206,
     277,   158,   159,   276,   208,   161,   210,   162,   163,   164,
     165,   166,   167,   278,   279,   168,   169,   170,   171,   172,
     173,    40,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   283,   284,   189,   190,   288,
      91,   292,   293,   280,   194,   251,   289,    91,     0,    91,
       0,    91,   202,   203,   205,     0,     0,     0,   101,     0,
     102,   103,   104,     0,     0,     0,    92,   152,   249,     0,
       0,   252,     0,     0,     0,     0,     0,     0,   255,     0,
     252,     0,     0,     0,     0,     0,     0,     0,   105,     0,
     106,   107,     0,     0,     0,   152,     0,     0,   217,     0,
     114,     0,   220,   272,   271,   119,     0,    91,   230,     0,
      92,     0,    91,     0,   236,     0,   125,    92,   127,    92,
     281,    92,    91,   246,     0,     0,     0,     0,     0,    86,
     290,     0,     0,     0,   253,    91,     0,    93,     0,     0,
       0,   294,     0,     0,     0,   259,    99,   132,     0,     0,
       0,   236,   236,     0,   265,   133,     0,     0,     0,     0,
       0,   140,     0,     0,     0,   236,     0,     0,     0,     0,
       0,     0,     0,   149,     0,     0,   154,    92,   156,     0,
     157,     0,    92,     0,   236,   236,     0,     0,     0,     0,
       0,     0,    92,     1,   226,     2,   227,   228,     3,     4,
       0,     0,     0,     5,     0,    92,     6,     0,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,     0,    25,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,    29,    30,     0,     0,     0,     0,    31,     0,
       0,    32,     0,     0,    33,    34,    35,    36,    37,    38,
      39,    40,     3,     4,    41,     0,     0,     5,     0,     0,
       6,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,   241,     3,     4,   141,     0,    25,     5,    26,
      27,     6,     0,   250,     0,     0,     0,     0,     0,   254,
       0,     0,     0,     0,     0,    28,    29,     0,     0,     0,
       0,     0,     0,     0,   262,    32,     0,     0,    25,     0,
      26,    27,   268,     0,   270,    40,     0,     0,     0,     0,
       0,   275,     0,     0,     0,     0,    28,    29,     0,     0,
       0,     0,     0,     1,   209,     2,    32,   285,     3,     4,
       0,     0,     0,     5,     0,   291,     6,     0,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,     0,    25,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,    29,    30,     0,     0,     0,     0,    31,     0,
       0,    32,     0,     0,    33,    34,    35,    36,    37,    38,
      39,    40,     0,     0,    41,     1,   234,     2,     0,     0,
       3,     4,     0,     0,     0,     5,     0,     0,     6,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    26,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    29,    30,     0,     0,     0,     0,
      31,     0,     0,    32,     0,     0,    33,    34,    35,    36,
      37,    38,    39,    40,     0,     0,    41,     1,   237,     2,
       0,     0,     3,     4,     0,     0,     0,     5,     0,     0,
       6,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,    29,    30,     0,     0,
       0,     0,    31,     0,     0,    32,     0,     0,    33,    34,
      35,    36,    37,    38,    39,    40,     0,     0,    41,     1,
     239,     2,     0,     0,     3,     4,     0,     0,     0,     5,
       0,     0,     6,     0,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,     0,     0,     0,     0,     0,     0,    25,
       0,    26,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,    30,
       0,     0,     0,     0,    31,     0,     0,    32,     0,     0,
      33,    34,    35,    36,    37,    38,    39,    40,     0,     0,
      41,     1,   282,     2,     0,     0,     3,     4,     0,     0,
       0,     5,     0,     0,     6,     0,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,     0,     0,     0,     0,     0,
       0,    25,     0,    26,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
      29,    30,     0,     0,     0,     0,    31,     0,     0,    32,
       0,     0,    33,    34,    35,    36,    37,    38,    39,    40,
       0,     0,    41,     1,   295,     2,     0,     0,     3,     4,
       0,     0,     0,     5,     0,     0,     6,     0,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,     0,    25,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,    29,    30,     0,     0,     0,     0,    31,     0,
       0,    32,     0,     0,    33,    34,    35,    36,    37,    38,
      39,    40,     0,     1,    41,     2,     0,     0,     3,     4,
       0,     0,     0,     5,     0,     0,     6,     0,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,     0,    25,     0,    26,    27,     0,     0,     0,
       3,     4,     0,     0,     0,     5,     0,     0,     6,     0,
       0,    28,    29,    30,     0,     0,     0,     0,    31,     0,
       0,    32,     0,     0,    33,    34,    35,    36,    37,    38,
      39,    40,   100,     0,    41,    25,   193,    26,    27,     0,
     101,     0,   102,   103,   104,     7,     8,     0,     0,     0,
       0,     0,     0,    28,    29,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,     0,     0,     0,
     105,     0,   106,   107,   108,   109,   110,   111,   112,   113,
       0,     0,   114,   115,   116,   117,   118,   119,     0,     0,
       0,     0,   120,   121,     0,   122,   123,   124,   125,   126,
     127,   128,   129,     0,     0,   144,     0,   130,   101,   131,
     102,   103,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     4,     0,     0,     0,     5,     0,     0,     6,
       0,     0,     0,     0,     0,     0,     0,     0,   105,     0,
     106,   107,   108,   109,   110,   111,   112,   113,     0,     0,
     114,   115,   116,   117,   118,   119,    25,     0,    26,    27,
     120,   121,     0,     0,   123,   124,   125,   126,   127,   101,
       0,   102,   103,   104,    28,    29,     0,   131,     0,     0,
       0,     0,     0,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
       0,   106,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   114,   115,   116,   117,   118,   119,     0,     0,     0,
       0,   120,   121,     0,     0,   123,   124,   125,   126,   127,
     101,     0,   102,   103,   104,     7,     8,     0,   131,   216,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,     0,     0,     0,     0,
     105,     0,   106,   107,   108,   109,   110,   111,   112,   113,
       0,     0,   114,   115,   116,   117,   118,   119,     0,     0,
       0,     0,   120,   121,   257,     0,   123,   124,   125,   126,
     127,   101,     0,   102,   103,   104,     0,     0,     0,   131,
       0,    40,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,     0,     0,
       0,   105,   214,   106,   107,   108,   109,   110,   111,   112,
     113,     0,     0,   114,   115,   116,   117,   118,   119,     0,
       0,     0,     0,   120,   121,     0,     0,   123,   124,   125,
     126,   127,   101,     0,   102,   103,   104,     0,     0,     0,
     131,     0,     0,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,   219,   106,   107,   108,   109,   110,   111,
     112,   113,     0,     0,   114,   115,   116,   117,   118,   119,
       0,     0,     0,     0,   120,   121,     0,     0,   123,   124,
     125,   126,   127,   101,     0,   102,   103,   104,     0,     0,
       0,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   248,   106,   107,   108,   109,   110,
     111,   112,   113,     0,     0,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,   120,   121,     0,     0,   123,
     124,   125,   126,   127,   101,     0,   102,   103,   104,     0,
       0,     0,   131,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,     0,   106,   107,   108,   109,
     110,   111,   112,   113,     0,     0,   114,   115,   116,   117,
     118,   119,     0,     0,     0,     0,   120,   121,     0,     0,
     123,   124,   125,   126,   127,   101,     0,   102,   103,   104,
       0,     0,     0,   131,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,     0,   106,   107,   101,
       0,   102,   103,   104,     0,     0,     0,   114,   115,   116,
     117,   118,   119,     0,     0,     0,     0,   120,   121,     0,
       0,   123,   124,   125,   126,   127,     0,     0,     0,   105,
       0,   106,   107,   101,   131,   102,   103,   104,     0,     0,
       0,   114,   115,   116,   117,   118,   119,     0,     0,     0,
       0,   120,   121,     0,     0,   123,     0,   125,   126,   127,
       0,     0,     0,   105,     0,   106,   107,   101,     0,   102,
     103,   104,     0,     0,     0,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,   120,   121,     0,     0,     0,
       0,   125,   126,   127,     0,     0,     0,   105,     0,   106,
     107,   101,     0,   102,   103,   104,     0,     0,     0,   114,
     115,   116,   117,   118,   119,     0,     0,     0,     0,     0,
     101,     0,   102,   103,   104,   125,   126,   127,     0,     0,
       0,   105,     0,   106,   107,     0,     0,     0,     0,     0,
       0,     0,     0,   114,     0,     0,     0,     0,   119,     0,
     105,     0,   106,   107,     0,     0,     0,     0,     0,   125,
     126,   127,   114,     0,     0,     0,     0,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   125
};

static const yytype_int16 yycheck[] =
{
       0,     4,    84,   160,     5,     9,    18,    19,    43,     8,
      45,    46,    10,     8,    13,    13,     8,    18,    19,     8,
      55,    13,     8,    13,    13,    15,    16,    17,    10,     4,
       9,   188,    12,     8,    43,    47,    79,    40,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    43,     8,    45,    46,   244,   245,     2,
       0,     4,     5,     6,    44,    55,    43,    68,    18,    19,
      60,   258,     9,    74,    75,    10,     9,    12,   160,    80,
       9,    24,    25,    26,    27,    10,    86,    12,    31,    32,
     277,   278,    10,    13,    12,     8,    39,    47,    47,    81,
      10,    13,     9,    15,    43,    43,   188,    18,    19,    12,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    19,     8,     8,    71,    53,
      53,    43,    80,    45,    46,    19,   139,    53,    47,    19,
     140,    84,    19,    55,    61,   148,   155,    10,    60,   149,
      19,    94,    95,    61,   154,    98,   156,   100,   101,   102,
     103,   104,   105,    19,     4,   108,   109,   110,   111,   112,
     113,    81,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,    53,    10,   130,   131,     4,
     199,    10,    10,   268,   137,   223,   281,   206,    -1,   208,
      -1,   210,   145,   146,   148,    -1,    -1,    -1,    13,    -1,
      15,    16,    17,    -1,    -1,    -1,   155,   160,   221,    -1,
      -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,   231,    -1,
     233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    -1,    -1,    -1,   188,    -1,    -1,   191,    -1,
      55,    -1,   195,   256,   254,    60,    -1,   266,   201,    -1,
     199,    -1,   271,    -1,   207,    -1,    71,   206,    73,   208,
     270,   210,   281,   216,    -1,    -1,    -1,    -1,    -1,    38,
     283,    -1,    -1,    -1,   227,   294,    -1,    46,    -1,    -1,
      -1,   291,    -1,    -1,    -1,   238,    55,    56,    -1,    -1,
      -1,   244,   245,    -1,   247,    64,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    85,   266,    87,    -1,
      89,    -1,   271,    -1,   277,   278,    -1,    -1,    -1,    -1,
      -1,    -1,   281,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    13,    -1,   294,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    71,    -1,    -1,    74,    75,    76,    77,    78,    79,
      80,    81,     8,     9,    84,    -1,    -1,    13,    -1,    -1,
      16,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,   211,     8,     9,    10,    -1,    43,    13,    45,
      46,    16,    -1,   222,    -1,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   243,    71,    -1,    -1,    43,    -1,
      45,    46,   251,    -1,   253,    81,    -1,    -1,    -1,    -1,
      -1,   260,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    71,   276,     8,     9,
      -1,    -1,    -1,    13,    -1,   284,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    71,    -1,    -1,    74,    75,    76,    77,    78,    79,
      80,    81,    -1,    -1,    84,     3,     4,     5,    -1,    -1,
       8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    71,    -1,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    -1,    -1,    84,     3,     4,     5,
      -1,    -1,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    71,    -1,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    -1,    -1,    84,     3,
       4,     5,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,
      -1,    -1,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    71,    -1,    -1,
      74,    75,    76,    77,    78,    79,    80,    81,    -1,    -1,
      84,     3,     4,     5,    -1,    -1,     8,     9,    -1,    -1,
      -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    -1,    -1,    -1,    -1,    68,    -1,    -1,    71,
      -1,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      -1,    -1,    84,     3,     4,     5,    -1,    -1,     8,     9,
      -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    71,    -1,    -1,    74,    75,    76,    77,    78,    79,
      80,    81,    -1,     3,    84,     5,    -1,    -1,     8,     9,
      -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    45,    46,    -1,    -1,    -1,
       8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    71,    -1,    -1,    74,    75,    76,    77,    78,    79,
      80,    81,     5,    -1,    84,    43,    44,    45,    46,    -1,
      13,    -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    65,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    -1,    10,    -1,    80,    13,    82,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      55,    56,    57,    58,    59,    60,    43,    -1,    45,    46,
      65,    66,    -1,    -1,    69,    70,    71,    72,    73,    13,
      -1,    15,    16,    17,    61,    62,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    55,    56,    57,    58,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    -1,    -1,    69,    70,    71,    72,    73,
      13,    -1,    15,    16,    17,    18,    19,    -1,    82,    83,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    65,    66,    64,    -1,    69,    70,    71,    72,
      73,    13,    -1,    15,    16,    17,    -1,    -1,    -1,    82,
      -1,    81,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    -1,    -1,    69,    70,    71,
      72,    73,    13,    -1,    15,    16,    17,    -1,    -1,    -1,
      82,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    55,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    69,    70,
      71,    72,    73,    13,    -1,    15,    16,    17,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    69,
      70,    71,    72,    73,    13,    -1,    15,    16,    17,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,
      69,    70,    71,    72,    73,    13,    -1,    15,    16,    17,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,    13,
      -1,    15,    16,    17,    -1,    -1,    -1,    55,    56,    57,
      58,    59,    60,    -1,    -1,    -1,    -1,    65,    66,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,    43,
      -1,    45,    46,    13,    82,    15,    16,    17,    -1,    -1,
      -1,    55,    56,    57,    58,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    -1,    -1,    69,    -1,    71,    72,    73,
      -1,    -1,    -1,    43,    -1,    45,    46,    13,    -1,    15,
      16,    17,    -1,    -1,    -1,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    71,    72,    73,    -1,    -1,    -1,    43,    -1,    45,
      46,    13,    -1,    15,    16,    17,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    15,    16,    17,    71,    72,    73,    -1,    -1,
      -1,    43,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,    -1,
      43,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    71,
      72,    73,    55,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     8,     9,    13,    16,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    43,    45,    46,    61,    62,
      63,    68,    71,    74,    75,    76,    77,    78,    79,    80,
      81,    84,    87,    88,    90,    91,    93,    94,    96,    97,
      99,   100,   101,   102,   103,   108,   109,   110,   111,   112,
     113,   114,   115,   117,   118,   120,   122,   123,   125,     8,
     109,     9,   109,   123,   109,   109,   109,   109,   116,   109,
     109,     8,   109,   109,     9,    79,   122,   109,   123,     8,
       0,    90,    91,   122,     5,    68,    74,    75,    80,   122,
       5,    13,    15,    16,    17,    43,    45,    46,    47,    48,
      49,    50,    51,    52,    55,    56,    57,    58,    59,    60,
      65,    66,    68,    69,    70,    71,    72,    73,    74,    75,
      80,    82,   122,   122,     8,    13,   119,    43,   124,     9,
     122,    10,   107,   109,    10,    10,    12,    44,     9,   122,
      92,   104,   109,   118,   122,    88,   122,   122,   109,   109,
       9,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,     8,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,     9,   109,
     109,    47,    12,    44,   109,    43,    10,   106,   123,    88,
      10,    12,   109,   109,    10,   106,    88,    19,    88,     4,
      88,     8,   121,   104,    44,   104,    83,   109,     8,    44,
     109,    53,    95,    10,    12,     8,     4,     6,     7,    98,
     109,    53,    10,    12,     4,   105,   109,     4,    80,     4,
      47,   122,     4,     8,    19,    19,   109,    47,    44,   123,
     122,    95,   123,   109,   122,   123,    53,    64,    19,   109,
      61,    47,   122,   105,   105,   109,    88,    89,   122,     8,
     122,    88,   123,    10,   105,   122,    61,    19,    19,     4,
      89,    88,     4,    53,    10,   122,   105,   105,     4,    98,
     123,   122,    10,    10,    88,     4
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (module, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex (module)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location, module); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Module* module)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, module)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    Module* module;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (module);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Module* module)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, module)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    Module* module;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, module);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, Module* module)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, module)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    Module* module;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , module);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, module); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, Module* module)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, module)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    Module* module;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (module);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (Module* module);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (Module* module)
#else
int
yyparse (module)
    Module* module;
#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 145 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		for (auto stmt : *(yyvsp[(1) - (1)].nodes))
		{
			module->getMain()->addStatement(stmt);
		}
	;}
    break;

  case 3:
#line 155 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.nodes) = (yyvsp[(1) - (2)].nodes);

		if ((yyvsp[(2) - (2)].node) != nullptr)
		{
    		(yyval.nodes)->push_back((yyvsp[(2) - (2)].node));
		}
	;}
    break;

  case 4:
#line 164 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.nodes) = (yyvsp[(1) - (2)].nodes);

		for (auto stmt : *(yyvsp[(2) - (2)].nodes))
		{
			if (stmt == nullptr) continue;
			(yyval.nodes)->push_back(stmt);
		}
	;}
    break;

  case 5:
#line 174 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.nodes) = new std::vector<ASTNode *>();

		if ((yyvsp[(1) - (1)].node) != nullptr)
		{
			(yyval.nodes)->push_back((yyvsp[(1) - (1)].node));
		}
	;}
    break;

  case 6:
#line 183 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.nodes) = new std::vector<ASTNode *>();

		for (auto stmt : *(yyvsp[(1) - (1)].nodes))
		{
			if (stmt == nullptr) continue;
			(yyval.nodes)->push_back(stmt);
		}
	;}
    break;

  case 7:
#line 195 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.nodes) = (yyvsp[(1) - (1)].nodes); ;}
    break;

  case 8:
#line 196 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.nodes) = new std::vector<ASTNode *>(); ;}
    break;

  case 9:
#line 200 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.node) = (yyvsp[(1) - (2)].stmt); ;}
    break;

  case 10:
#line 201 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 11:
#line 202 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.node) = (yyvsp[(1) - (2)].expr); ;}
    break;

  case 12:
#line 203 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.node) = nullptr; ;}
    break;

  case 13:
#line 208 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.nodes) = (yyvsp[(1) - (2)].nodes);
	;}
    break;

  case 14:
#line 215 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.nodes) = (yyvsp[(1) - (1)].nodes);
	;}
    break;

  case 15:
#line 219 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.nodes) = new std::vector<ASTNode *>();
		(yyval.nodes)->push_back((yyvsp[(1) - (1)].expr));
	;}
    break;

  case 16:
#line 225 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 17:
#line 226 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 18:
#line 227 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 19:
#line 228 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 20:
#line 229 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 21:
#line 230 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 22:
#line 231 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 23:
#line 232 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 24:
#line 233 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 25:
#line 238 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		auto func = new Function(*(yyvsp[(2) - (8)].str), std::vector<Parameter *>());
		func->setReturnType((yyvsp[(5) - (8)].ty));

		for (auto stmt : *(yyvsp[(7) - (8)].nodes))
		{
			func->addStatement(stmt);
		}

		(yyval.stmt) = func;
	;}
    break;

  case 26:
#line 250 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		auto func = new Function(*(yyvsp[(2) - (9)].str), *(yyvsp[(4) - (9)].params));
		func->setReturnType((yyvsp[(6) - (9)].ty));

		for (auto stmt : *(yyvsp[(8) - (9)].nodes))
		{
			func->addStatement(stmt);
		}

		(yyval.stmt) = func;
	;}
    break;

  case 27:
#line 264 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.ty) = (yyvsp[(2) - (2)].ty); ;}
    break;

  case 28:
#line 265 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.ty) = nullptr; ;}
    break;

  case 29:
#line 270 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		std::vector<Parameter *> params;
		(yyval.stmt) = new ExternFunction(*(yyvsp[(2) - (6)].str), params, (yyvsp[(6) - (6)].ty));
	;}
    break;

  case 30:
#line 275 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.stmt) = new ExternFunction(*(yyvsp[(2) - (7)].str), *(yyvsp[(4) - (7)].params), (yyvsp[(7) - (7)].ty));
	;}
    break;

  case 31:
#line 279 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.stmt) = new ExternFunction(*(yyvsp[(2) - (9)].str), *(yyvsp[(4) - (9)].params), (yyvsp[(9) - (9)].ty), true);
	;}
    break;

  case 32:
#line 286 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		auto blocks = (yyvsp[(5) - (5)].blocks);

		auto block = new CondBlock((yyvsp[(2) - (5)].expr));
		for (auto stmt : *(yyvsp[(4) - (5)].nodes))
		{
			block->addStatement(stmt);
		}

		blocks->insert(blocks->begin(), block);

		auto if_stmt = new IfStmt();
		for (auto block : *blocks)
		{
			if_stmt->addBlock(block);
		}

		(yyval.stmt) = if_stmt;
	;}
    break;

  case 33:
#line 309 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.blocks) = (yyvsp[(5) - (5)].blocks);

		auto block = new CondBlock((yyvsp[(2) - (5)].expr));
		for (auto stmt : *(yyvsp[(4) - (5)].nodes))
		{
			block->addStatement(stmt);
		}

		(yyval.blocks)->insert((yyval.blocks)->begin(), block);

	;}
    break;

  case 34:
#line 322 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.blocks) = new std::vector<Block *>();

		auto block = new Block();
		for (auto stmt : *(yyvsp[(3) - (4)].nodes))
		{
			block->addStatement(stmt);
		}

		(yyval.blocks)->insert((yyval.blocks)->begin(), block);
	;}
    break;

  case 35:
#line 334 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.blocks) = new std::vector<Block *>();
	;}
    break;

  case 36:
#line 341 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		auto block = new CondBlock((yyvsp[(2) - (5)].expr), true);
		for (auto stmt : *(yyvsp[(4) - (5)].nodes))
		{
			block->addStatement(stmt);
		}

		auto if_stmt = new IfStmt();
		if_stmt->addBlock(block);

		(yyval.stmt) = if_stmt;
	;}
    break;

  case 37:
#line 356 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		auto block = new CondBlock((yyvsp[(3) - (3)].expr));
		block->addStatement((yyvsp[(1) - (3)].node));

		auto if_stmt = new IfStmt();
		if_stmt->addBlock(block);

		(yyval.stmt) = if_stmt;
	;}
    break;

  case 38:
#line 366 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		auto block = new CondBlock((yyvsp[(3) - (3)].expr));
		block->addStatement((yyvsp[(1) - (3)].expr));

		auto if_stmt = new IfStmt();
		if_stmt->addBlock(block);

		(yyval.stmt) = if_stmt;
	;}
    break;

  case 39:
#line 379 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		auto block = new CondBlock((yyvsp[(3) - (3)].expr), true);
		block->addStatement((yyvsp[(1) - (3)].node));

		auto if_stmt = new IfStmt();
		if_stmt->addBlock(block);

		(yyval.stmt) = if_stmt;
	;}
    break;

  case 40:
#line 389 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		auto block = new CondBlock((yyvsp[(3) - (3)].expr), true);
		block->addStatement((yyvsp[(1) - (3)].expr));

		auto if_stmt = new IfStmt();
		if_stmt->addBlock(block);

		(yyval.stmt) = if_stmt;
	;}
    break;

  case 41:
#line 403 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		auto loop = new Loop(*(yyvsp[(3) - (11)].nodes), (yyvsp[(5) - (11)].expr), (yyvsp[(7) - (11)].expr), false);

	  	for (auto stmt : *(yyvsp[(10) - (11)].nodes))
		{
			loop->addStatement(stmt);
		}

		(yyval.stmt) = loop;
	;}
    break;

  case 42:
#line 414 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		auto loop = new Loop(std::vector<ASTNode*>(), (yyvsp[(2) - (5)].expr), nullptr, false);

		for (auto stmt : *(yyvsp[(4) - (5)].nodes))
		{
			loop->addStatement(stmt);
		}

		(yyval.stmt) = loop;
	;}
    break;

  case 43:
#line 425 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		auto loop = new Loop(std::vector<ASTNode*>(), nullptr, nullptr, false);

		for (auto stmt : *(yyvsp[(4) - (5)].nodes))
		{
			loop->addStatement(stmt);
		}

		(yyval.stmt) = loop;
	;}
    break;

  case 44:
#line 436 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		auto loop = new Loop(std::vector<ASTNode*>(), (yyvsp[(6) - (6)].expr), nullptr, true);

		for (auto stmt : *(yyvsp[(3) - (6)].nodes))
		{
			loop->addStatement(stmt);
		}

		(yyval.stmt) = loop;
	;}
    break;

  case 45:
#line 451 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		auto loop = new Loop(*(yyvsp[(4) - (9)].nodes), (yyvsp[(6) - (9)].expr), (yyvsp[(8) - (9)].expr), false);
		loop->addStatement((yyvsp[(1) - (9)].node));
		(yyval.stmt) = loop;
	;}
    break;

  case 46:
#line 458 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		auto loop = new Loop(*(yyvsp[(4) - (9)].nodes), (yyvsp[(6) - (9)].expr), (yyvsp[(8) - (9)].expr), false);
		loop->addStatement((yyvsp[(1) - (9)].expr));
		(yyval.stmt) = loop;
	;}
    break;

  case 47:
#line 464 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		auto loop = new Loop(std::vector<ASTNode*>(), (yyvsp[(3) - (3)].expr), nullptr, false);
		loop->addStatement((yyvsp[(1) - (3)].node));
		(yyval.stmt) = loop;
	;}
    break;

  case 48:
#line 470 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		auto loop = new Loop(std::vector<ASTNode*>(), (yyvsp[(3) - (3)].expr), nullptr, false);
		loop->addStatement((yyvsp[(1) - (3)].expr));
		(yyval.stmt) = loop;
	;}
    break;

  case 49:
#line 476 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		auto loop = new Loop(std::vector<ASTNode*>(), nullptr, nullptr, false);
		loop->addStatement((yyvsp[(1) - (2)].node));
		(yyval.stmt) = loop;
	;}
    break;

  case 50:
#line 482 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		auto loop = new Loop(std::vector<ASTNode*>(), nullptr, nullptr, false);
		loop->addStatement((yyvsp[(1) - (2)].expr));
		(yyval.stmt) = loop;
	;}
    break;

  case 51:
#line 493 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.nodes) = (yyvsp[(1) - (1)].nodes); ;}
    break;

  case 52:
#line 494 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.nodes) = new std::vector<ASTNode*>(); ;}
    break;

  case 53:
#line 498 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 54:
#line 499 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = nullptr; ;}
    break;

  case 55:
#line 504 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.params) = (yyvsp[(1) - (4)].params);
		(yyval.params)->push_back(new Parameter((yyvsp[(3) - (4)].ty), *(yyvsp[(4) - (4)].str)));
	;}
    break;

  case 56:
#line 509 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.params) = new std::vector<Parameter *>();
		(yyval.params)->push_back(new Parameter((yyvsp[(1) - (2)].ty), *(yyvsp[(2) - (2)].str)));
	;}
    break;

  case 57:
#line 516 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.args) = (yyvsp[(1) - (3)].args);
		(yyval.args)->push_back((yyvsp[(3) - (3)].expr));
	;}
    break;

  case 58:
#line 521 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.args) = new std::vector<Expression *>();
		(yyval.args)->push_back((yyvsp[(1) - (1)].expr));
	;}
    break;

  case 59:
#line 527 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 60:
#line 528 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.node) = new LoopTerminator(*(yyvsp[(1) - (1)].str)); ;}
    break;

  case 61:
#line 529 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.node) = new LoopTerminator(*(yyvsp[(1) - (1)].str)); ;}
    break;

  case 62:
#line 530 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.node) = new LoopTerminator(*(yyvsp[(1) - (1)].str)); ;}
    break;

  case 63:
#line 534 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 64:
#line 535 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 65:
#line 536 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 66:
#line 537 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 67:
#line 538 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 68:
#line 539 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 69:
#line 543 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpCompare((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 70:
#line 544 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpCompare((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 71:
#line 545 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpCompare((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 72:
#line 546 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpCompare((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 73:
#line 547 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpCompare((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 74:
#line 548 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpCompare((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 75:
#line 550 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpAndOr((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 76:
#line 551 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpAndOr((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 77:
#line 555 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpArith((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 78:
#line 556 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpArith((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 79:
#line 557 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpArith((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 80:
#line 558 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpArith((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 81:
#line 559 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpArith((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 82:
#line 561 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpArith((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 83:
#line 562 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpArith((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 84:
#line 563 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpArith((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 85:
#line 565 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpAssign((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 86:
#line 566 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpAssign((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 87:
#line 567 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpAssign((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 88:
#line 568 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpAssign((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 89:
#line 569 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpAssign((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 90:
#line 570 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new BinOpAssign((yyvsp[(1) - (3)].expr), *(yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 91:
#line 574 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new IncrementExpr((yyvsp[(1) - (2)].expr),  1, false); ;}
    break;

  case 92:
#line 575 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new IncrementExpr((yyvsp[(1) - (2)].expr), -1, false); ;}
    break;

  case 93:
#line 576 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new IncrementExpr((yyvsp[(2) - (2)].expr),  1, true); ;}
    break;

  case 94:
#line 577 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new IncrementExpr((yyvsp[(2) - (2)].expr), -1, true); ;}
    break;

  case 95:
#line 582 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.expr) = new TernaryExpr((yyvsp[(1) - (5)].expr), (yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].expr));
	;}
    break;

  case 96:
#line 589 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		std::vector<Expression *> params;
		(yyval.expr) = new FunctionCall(*(yyvsp[(1) - (3)].str), params);
	;}
    break;

  case 97:
#line 594 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.expr) = new FunctionCall(*(yyvsp[(1) - (4)].str), *(yyvsp[(3) - (4)].args));
	;}
    break;

  case 98:
#line 600 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = (yyvsp[(2) - (3)].expr); ;}
    break;

  case 99:
#line 601 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].val); ;}
    break;

  case 100:
#line 602 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new NegativeExpr((yyvsp[(2) - (2)].expr)); ;}
    break;

  case 101:
#line 603 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new StrValue(*(yyvsp[(1) - (1)].str)); ;}
    break;

  case 102:
#line 604 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new IDReference(*(yyvsp[(1) - (1)].str)); ;}
    break;

  case 103:
#line 605 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new DerefExpr((yyvsp[(2) - (2)].expr)); ;}
    break;

  case 104:
#line 606 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new ReferenceExpr((yyvsp[(2) - (2)].expr)); ;}
    break;

  case 105:
#line 607 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new CastExpr((yyvsp[(2) - (4)].ty), (yyvsp[(4) - (4)].expr)); ;}
    break;

  case 106:
#line 608 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new ArrayValue(*(yyvsp[(2) - (3)].exprs)); ;}
    break;

  case 107:
#line 609 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new ArrayAccessExpr((yyvsp[(1) - (4)].expr), (yyvsp[(3) - (4)].expr)); ;}
    break;

  case 108:
#line 610 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.expr) = new AccessExpr((yyvsp[(1) - (3)].expr), *(yyvsp[(3) - (3)].str)); ;}
    break;

  case 109:
#line 615 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.exprs) = (yyvsp[(1) - (3)].exprs);
		(yyval.exprs)->push_back((yyvsp[(3) - (3)].expr));
	;}
    break;

  case 110:
#line 620 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.exprs) = new std::vector<Expression *>();
		(yyval.exprs)->push_back((yyvsp[(1) - (1)].expr));
	;}
    break;

  case 111:
#line 629 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.node) = new ReturnStmt(nullptr);
	;}
    break;

  case 112:
#line 633 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.node) = new ReturnStmt((yyvsp[(2) - (2)].expr));
	;}
    break;

  case 113:
#line 640 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.nodes) = new std::vector<ASTNode*>();

		for (auto tupl : *(yyvsp[(2) - (2)].pairs))
		{
			auto decl = new VarDecl((yyvsp[(1) - (2)].ty), std::get<0>(tupl), std::get<1>(tupl));
			(yyval.nodes)->push_back(decl);
		}
	;}
    break;

  case 114:
#line 653 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.pairs) = (yyvsp[(1) - (3)].pairs);
		(yyval.pairs)->push_back(std::make_tuple(*(yyvsp[(3) - (3)].str), nullptr));
	;}
    break;

  case 115:
#line 658 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.pairs) = (yyvsp[(1) - (5)].pairs);
		(yyval.pairs)->push_back(std::make_tuple(*(yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].expr)));
	;}
    break;

  case 116:
#line 663 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.pairs) = new std::vector<std::tuple<std::string, Expression*>>();
		(yyval.pairs)->push_back(std::make_tuple(*(yyvsp[(1) - (1)].str), nullptr));
	;}
    break;

  case 117:
#line 668 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.pairs) = new std::vector<std::tuple<std::string, Expression*>>();
		(yyval.pairs)->push_back(std::make_tuple(*(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].expr)));
	;}
    break;

  case 118:
#line 675 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		auto estmt = new EnumStmt(*(yyvsp[(2) - (5)].str), IntType::get(64));
		for (auto pair : *(yyvsp[(4) - (5)].vpairs))
		{
			estmt->addMember(std::get<0>(pair), std::get<1>(pair));
		}

		(yyval.stmt) = estmt;
	;}
    break;

  case 119:
#line 687 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.vpairs)->push_back(std::make_tuple(*(yyvsp[(2) - (3)].str), (Value *)nullptr));
	;}
    break;

  case 120:
#line 691 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.vpairs)->push_back(std::make_tuple(*(yyvsp[(2) - (5)].str), (yyvsp[(4) - (5)].val)));
	;}
    break;

  case 121:
#line 695 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.vpairs) = new std::vector<std::tuple<std::string, Value*>>();
		(yyval.vpairs)->push_back(std::make_tuple(*(yyvsp[(1) - (2)].str), (Value *)nullptr));
	;}
    break;

  case 122:
#line 700 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.vpairs) = new std::vector<std::tuple<std::string, Value*>>();
		(yyval.vpairs)->push_back(std::make_tuple(*(yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].val)));
	;}
    break;

  case 125:
#line 712 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.ty) = PointerType::get((yyvsp[(1) - (2)].ty));
	;}
    break;

  case 126:
#line 716 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.ty) = (yyvsp[(1) - (1)].ty);
	;}
    break;

  case 127:
#line 720 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.ty) = (yyvsp[(2) - (2)].ty)->getConst();
	;}
    break;

  case 128:
#line 724 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.ty) = (yyvsp[(1) - (2)].ty);

		bool is_const = true;
		for (int i = 0; i < (yyvsp[(2) - (2)].exprs)->size(); i++)
		{
			auto def = (yyvsp[(2) - (2)].exprs)->at(i);

			if (Type::exprValidForArrSize(def) == false)
			{
				is_const = false;
				break;
			}
		}

		int sz = (int)(yyvsp[(2) - (2)].exprs)->size();
		for (int i = sz - 1; i >= 0; i--)
		{
			auto def = (yyvsp[(2) - (2)].exprs)->at(i);

			if (is_const)
			{
				auto arr_sz = Type::exprAsArrSize(def);
				(yyval.ty) = ArrayType::get((yyval.ty), arr_sz, false);
			}
			else
			{
				(yyval.ty) = VariadicArrayType::get((yyval.ty), def, false);
			}
		}
	;}
    break;

  case 129:
#line 756 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.ty) = PointerType::get((yyvsp[(1) - (3)].ty));
	;}
    break;

  case 130:
#line 763 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.exprs) = (yyvsp[(1) - (4)].exprs);
		(yyval.exprs)->push_back((yyvsp[(3) - (4)].expr));
	;}
    break;

  case 131:
#line 768 "/Users/robert/dev/orange/lib/grove/parser.y"
    {
		(yyval.exprs) = new std::vector<Expression *>();
		(yyval.exprs)->push_back((yyvsp[(2) - (3)].expr));
	;}
    break;

  case 132:
#line 775 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.ty) = IntType::get(64); ;}
    break;

  case 133:
#line 776 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.ty) = UIntType::get(64); ;}
    break;

  case 134:
#line 777 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.ty) = FloatType::get(); ;}
    break;

  case 135:
#line 778 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.ty) = DoubleType::get(); ;}
    break;

  case 136:
#line 779 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.ty) = IntType::get(8); ;}
    break;

  case 137:
#line 780 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.ty) = IntType::get(16); ;}
    break;

  case 138:
#line 781 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.ty) = IntType::get(32); ;}
    break;

  case 139:
#line 782 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.ty) = IntType::get(64); ;}
    break;

  case 140:
#line 783 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.ty) = UIntType::get(8); ;}
    break;

  case 141:
#line 784 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.ty) = UIntType::get(16); ;}
    break;

  case 142:
#line 785 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.ty) = UIntType::get(32); ;}
    break;

  case 143:
#line 786 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.ty) = UIntType::get(64); ;}
    break;

  case 144:
#line 787 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.ty) = IntType::get(8); ;}
    break;

  case 145:
#line 788 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.ty) = VoidType::get(); ;}
    break;

  case 146:
#line 789 "/Users/robert/dev/orange/lib/grove/parser.y"
    { (yyval.ty) = VarType::get(); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3203 "/Users/robert/dev/orange/lib/grove/parser.cc"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (module, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (module, yymsg);
	  }
	else
	  {
	    yyerror (module, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, &yylloc, module);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, module);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (module, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc, module);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, module);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 792 "/Users/robert/dev/orange/lib/grove/parser.y"


