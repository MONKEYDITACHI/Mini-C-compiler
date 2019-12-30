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
#line 1 "ass5_15CS10025.y" /* yacc.c:339  */
 /* C Declarations and Definitions */
#include "ass5_15CS10025_translator.h"
extern int yylex();
void yyerror(const char *);

#line 72 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    keyword = 258,
    identifier = 259,
    punctuator = 260,
    string_literal = 261,
    int_constant = 262,
    float_constant = 263,
    char_constant = 264,
    MATRIX = 265,
    AUTO = 266,
    ENUM = 267,
    RESTRICT = 268,
    UNSIGNED = 269,
    BREAK = 270,
    EXTERN = 271,
    RETURN = 272,
    VOID = 273,
    CASE = 274,
    FLOAT = 275,
    SHORT = 276,
    VOLATILE = 277,
    CHAR = 278,
    FOR = 279,
    SIGNED = 280,
    WHILE = 281,
    CONST = 282,
    GOTO = 283,
    SIZEOF = 284,
    _BOOL = 285,
    CONTINUE = 286,
    IF = 287,
    STATIC = 288,
    _COMPLEX = 289,
    DEFAULT = 290,
    INLINE = 291,
    STRUCT = 292,
    _IMAGINARY = 293,
    DO = 294,
    INT = 295,
    SWITCH = 296,
    DOUBLE = 297,
    LONG = 298,
    TYPEDEF = 299,
    ELSE = 300,
    REGISTER = 301,
    UNION = 302,
    ELLIPSIS = 303,
    RIGHT_ASSIGN = 304,
    LEFT_ASSIGN = 305,
    ADD_ASSIGN = 306,
    SUB_ASSIGN = 307,
    MUL_ASSIGN = 308,
    DIV_ASSIGN = 309,
    MOD_ASSIGN = 310,
    AND_ASSIGN = 311,
    XOR_ASSIGN = 312,
    OR_ASSIGN = 313,
    RIGHT_OP = 314,
    LEFT_OP = 315,
    INC_OP = 316,
    DEC_OP = 317,
    PTR_OP = 318,
    AND_OP = 319,
    OR_OP = 320,
    LE_OP = 321,
    GE_OP = 322,
    EQ_OP = 323,
    NE_OP = 324,
    UNARY = 325
  };
#endif
/* Tokens.  */
#define keyword 258
#define identifier 259
#define punctuator 260
#define string_literal 261
#define int_constant 262
#define float_constant 263
#define char_constant 264
#define MATRIX 265
#define AUTO 266
#define ENUM 267
#define RESTRICT 268
#define UNSIGNED 269
#define BREAK 270
#define EXTERN 271
#define RETURN 272
#define VOID 273
#define CASE 274
#define FLOAT 275
#define SHORT 276
#define VOLATILE 277
#define CHAR 278
#define FOR 279
#define SIGNED 280
#define WHILE 281
#define CONST 282
#define GOTO 283
#define SIZEOF 284
#define _BOOL 285
#define CONTINUE 286
#define IF 287
#define STATIC 288
#define _COMPLEX 289
#define DEFAULT 290
#define INLINE 291
#define STRUCT 292
#define _IMAGINARY 293
#define DO 294
#define INT 295
#define SWITCH 296
#define DOUBLE 297
#define LONG 298
#define TYPEDEF 299
#define ELSE 300
#define REGISTER 301
#define UNION 302
#define ELLIPSIS 303
#define RIGHT_ASSIGN 304
#define LEFT_ASSIGN 305
#define ADD_ASSIGN 306
#define SUB_ASSIGN 307
#define MUL_ASSIGN 308
#define DIV_ASSIGN 309
#define MOD_ASSIGN 310
#define AND_ASSIGN 311
#define XOR_ASSIGN 312
#define OR_ASSIGN 313
#define RIGHT_OP 314
#define LEFT_OP 315
#define INC_OP 316
#define DEC_OP 317
#define PTR_OP 318
#define AND_OP 319
#define OR_OP 320
#define LE_OP 321
#define GE_OP 322
#define EQ_OP 323
#define NE_OP 324
#define UNARY 325

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 7 "ass5_15CS10025.y" /* yacc.c:355  */

    int intVal;
    double doubleVal;
    char charVal;
    int instr;
    string * strVal;
    exp_t exp;
    dec_t dec;
    idf_t id;
    symEntry * loc;
    List * nextList;
    vector <exp_t *> * args;

#line 266 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 283 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   999

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  364

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,     2,     2,     2,    86,    83,     2,
      75,    76,    72,    70,    82,    71,    79,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    92,    94,
      87,    93,    88,    91,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    77,     2,    78,    89,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,    90,    81,    84,     2,     2,     2,
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
      65,    66,    67,    68,    69,    74
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    66,    74,    83,    91,   105,   119,   133,
     147,   161,   169,   175,   203,   236,   240,   244,   263,   282,
     286,   294,   298,   305,   311,   320,   324,   342,   362,   448,
     452,   459,   463,   467,   471,   475,   479,   486,   490,   499,
     513,   532,   551,   573,   577,   585,   596,   600,   616,   636,
     640,   649,   658,   667,   679,   683,   692,   704,   708,   727,
     731,   750,   754,   773,   777,   787,   791,   801,   805,   827,
     832,   839,   843,   872,   873,   877,   881,   885,   889,   893,
     897,   901,   905,   909,   916,   920,   927,   934,   945,   948,
     956,   960,   968,   972,   980,   983,   990,   994,  1001,  1005,
    1017,  1021,  1025,  1029,  1036,  1041,  1046,  1050,  1055,  1059,
    1063,  1068,  1072,  1076,  1080,  1084,  1088,  1092,  1104,  1107,
    1115,  1120,  1127,  1131,  1135,  1142,  1146,  1153,  1157,  1164,
    1171,  1175,  1179,  1186,  1193,  1197,  1247,  1254,  1258,  1313,
    1317,  1321,  1325,  1341,  1349,  1352,  1357,  1361,  1371,  1374,
    1381,  1385,  1393,  1397,  1404,  1408,  1416,  1421,  1429,  1432,
    1439,  1443,  1450,  1459,  1463,  1470,  1474,  1482,  1486,  1494,
    1497,  1504,  1511,  1515,  1522,  1526,  1534,  1538,  1542,  1546,
    1550,  1554,  1561,  1565,  1569,  1576,  1584,  1587,  1594,  1598,
    1607,  1611,  1618,  1622,  1634,  1649,  1656,  1669,  1677,  1693,
    1700,  1704,  1708,  1712,  1717,  1730,  1736,  1743,  1747,  1755,
    1768,  1771,  1778,  1782
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "keyword", "identifier", "punctuator",
  "string_literal", "int_constant", "float_constant", "char_constant",
  "MATRIX", "AUTO", "ENUM", "RESTRICT", "UNSIGNED", "BREAK", "EXTERN",
  "RETURN", "VOID", "CASE", "FLOAT", "SHORT", "VOLATILE", "CHAR", "FOR",
  "SIGNED", "WHILE", "CONST", "GOTO", "SIZEOF", "_BOOL", "CONTINUE", "IF",
  "STATIC", "_COMPLEX", "DEFAULT", "INLINE", "STRUCT", "_IMAGINARY", "DO",
  "INT", "SWITCH", "DOUBLE", "LONG", "TYPEDEF", "ELSE", "REGISTER",
  "UNION", "ELLIPSIS", "RIGHT_ASSIGN", "LEFT_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "RIGHT_OP", "LEFT_OP", "INC_OP", "DEC_OP",
  "PTR_OP", "AND_OP", "OR_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "'+'",
  "'-'", "'*'", "'/'", "UNARY", "'('", "')'", "'['", "']'", "'.'", "'{'",
  "'}'", "','", "'&'", "'~'", "'!'", "'%'", "'<'", "'>'", "'^'", "'|'",
  "'?'", "':'", "'='", "';'", "$accept", "translation_unit", "M", "N",
  "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression_opt",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers_opt",
  "declaration_specifiers", "init_declarator_list_opt",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "specifier_qualifier_list_opt",
  "specifier_qualifier_list", "enum_specifier", "enumerator_list",
  "enumerator", "enumeration_constant", "type_qualifier",
  "function_specifier", "declarator", "direct_declarator",
  "parameter_type_list_opt", "pointer", "type_qualifier_list_opt",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_opt", "identifier_list",
  "type_name", "initializer", "initializer_row_list", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "expression_opt", "external_declaration",
  "function_definition", "declaration_list_opt", "declaration_list", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
      43,    45,    42,    47,   325,    40,    41,    91,    93,    46,
     123,   125,    44,    38,   126,    33,    37,    60,    62,    94,
     124,    63,    58,    61,    59
};
# endif

#define YYPACT_NINF -297

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-297)))

#define YYTABLE_NINF -211

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     921,  -297,  -297,    34,  -297,  -297,  -297,  -297,  -297,  -297,
    -297,  -297,  -297,  -297,  -297,  -297,  -297,  -297,  -297,  -297,
    -297,  -297,  -297,   808,  -297,    47,   921,   921,  -297,   921,
     921,  -297,  -297,   -20,    36,  -297,  -297,  -297,   102,    47,
     -17,    66,  -297,   334,    51,    33,  -297,  -297,  -297,  -297,
    -297,   155,  -297,    91,   102,    99,  -297,    47,   158,  -297,
      47,    98,   921,   845,   120,    51,  -297,   -62,  -297,    95,
    -297,  -297,  -297,  -297,   103,  -297,  -297,  -297,  -297,  -297,
     672,   698,   698,  -297,  -297,  -297,   541,    75,  -297,  -297,
    -297,  -297,   173,   256,   716,  -297,    72,    69,   110,    84,
     124,   101,   121,   111,   150,   -52,  -297,  -297,  -297,   257,
    -297,  -297,  -297,    47,   141,  -297,   145,  -297,   -59,   102,
     732,   182,  -297,    30,   716,   541,  -297,   541,  -297,  -297,
    -297,   -55,   956,  -297,   956,   156,   716,   241,   -35,   165,
     158,  -297,   -25,  -297,  -297,  -297,   245,   716,   716,   251,
    -297,  -297,  -297,  -297,  -297,  -297,  -297,  -297,  -297,  -297,
    -297,   716,  -297,  -297,   716,   716,   716,   716,   716,   716,
     716,   716,   716,   716,   716,   716,   716,   716,   716,   716,
    -297,  -297,   169,   202,   210,   128,   716,   242,   249,   321,
     232,   255,   239,  -297,   258,   252,  -297,  -297,  -297,  -297,
     254,   262,  -297,  -297,  -297,  -297,  -297,   244,  -297,  -297,
     882,  -297,   332,   716,   261,   275,  -297,   716,  -297,  -297,
    -297,  -297,   282,   284,  -297,   716,  -297,  -297,  -297,   585,
     285,  -297,  -297,    75,    75,  -297,  -297,  -297,  -297,   286,
     283,  -297,    31,  -297,  -297,  -297,  -297,  -297,    72,    72,
      69,    69,   110,   110,   110,   110,    84,    84,   124,   101,
     121,   716,   716,  -297,   613,  -297,  -297,   -41,   274,   459,
    -297,   277,  -297,   716,   613,   613,   716,  -297,   377,  -297,
    -297,  -297,  -297,   291,  -297,  -297,   295,   298,   298,  -297,
      75,  -297,  -297,   165,   158,  -297,   716,  -297,   111,   150,
     716,  -297,  -297,   613,   716,   281,   716,  -297,   252,  -297,
     353,   -27,  -297,  -297,  -297,   125,  -297,  -297,   252,  -297,
     288,  -297,   252,   345,   347,   613,  -297,    -3,   333,   716,
     716,   348,  -297,  -297,  -297,  -297,  -297,   350,  -297,  -297,
     613,   716,   716,   613,   335,   613,   383,   -18,  -297,  -297,
    -297,  -297,   385,   337,   716,  -297,  -297,  -297,   613,   356,
    -297,  -297,   613,  -297
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   117,   102,   158,   131,   112,   100,   104,   109,   106,
     132,   105,   111,   130,   113,   101,   114,   133,   115,   107,
     110,   108,   103,     0,   208,    94,    88,    88,   116,    88,
      88,     2,   207,   124,     0,     1,     3,   136,   148,     0,
       0,    95,    96,    98,   134,     0,    90,    89,    91,    92,
      93,     0,   150,   146,   149,     0,    87,     0,     0,   212,
      94,     0,   211,   144,   148,   135,   129,     0,   125,   127,
     147,   151,   137,    97,    98,     6,    10,     7,     8,     9,
       0,     0,     0,    33,    34,    32,     0,   169,    31,    35,
      36,    12,    25,    37,     0,    39,    43,    46,    49,    54,
      57,    59,    61,    63,    65,    67,    71,   163,    99,   186,
     209,   213,   160,   157,     0,   145,   152,   154,     0,   148,
      69,   149,   122,     0,     0,     0,    29,     0,    26,    27,
      84,     0,   118,   162,   118,     0,     0,     0,     0,   165,
       0,   170,     0,   172,    17,    18,     0,    21,     0,     0,
      80,    79,    77,    78,    74,    75,    76,    81,    82,    83,
      73,     0,    37,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     4,     0,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     0,   206,   190,   191,   176,   177,
       0,     4,   188,   178,   179,   180,   181,     0,   156,   142,
       0,   143,     0,     0,    32,     0,    70,     0,   123,   126,
      86,   128,     0,     0,    11,     0,   120,   119,   121,     0,
       0,   175,   164,   169,   169,   167,   171,   173,    16,     0,
      22,    23,     0,    15,    72,    40,    41,    42,    44,    45,
      48,    47,    52,    53,    50,    51,    55,    56,    58,    60,
      62,     0,     0,     4,   205,   202,   203,     0,     0,   205,
       4,     0,   201,     0,   205,   205,     0,   185,   205,   192,
     153,   155,   161,     0,   141,   138,     0,    30,     0,    85,
     169,    38,   174,   166,     0,    14,     0,    13,    64,    66,
       0,   182,   204,   205,   205,     0,     0,   200,     5,   184,
       0,     0,   189,   139,   140,     0,   168,    24,     5,   183,
       0,     4,     5,     0,     0,   205,    19,   169,     0,   205,
     205,     0,     4,     4,   195,    20,     4,     0,     5,     4,
     205,     0,     0,   205,     0,   205,   193,     0,    68,   199,
       4,   196,     0,     0,   205,     4,   197,     5,   205,     0,
     194,     4,   205,   198
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -297,  -297,  -153,  -296,  -297,  -297,  -297,  -297,   -80,  -297,
     -83,    90,   132,   149,   140,   259,   263,   264,   172,   175,
    -297,  -121,  -297,   -40,  -297,   -82,  -111,   -38,   196,     6,
    -297,  -297,   378,  -297,   119,   300,    42,  -297,  -297,   317,
    -297,    -7,  -297,    -9,   397,  -297,   391,   -56,   381,  -297,
    -297,   236,  -297,  -297,   112,  -133,  -297,  -223,  -225,  -297,
    -297,   308,  -202,  -297,   390,  -297,  -297,   176,  -297,  -297,
    -297,  -297,  -199,   430,  -297,  -297,  -297
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,   261,   182,    91,    92,   239,   240,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   215,   130,   161,   195,   221,    24,    46,    60,
      40,    41,    42,    26,    27,   226,   133,    28,    67,    68,
      69,    29,    30,    74,    44,   114,    45,    53,    54,   115,
     116,   117,    34,   118,   135,   108,   138,   139,   140,   141,
     142,   143,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,    31,    32,    61,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     126,   128,   129,   220,   131,    59,    25,   235,   120,   294,
     293,   163,   323,   181,   162,   220,    43,   211,   107,   122,
     123,   224,   328,   212,   111,   230,   331,   225,   262,    25,
      55,    52,    47,    47,    66,    47,    47,    37,    33,    -5,
     275,   225,   344,   131,   162,   131,   232,    71,   278,   325,
     352,    37,   136,   302,   137,   225,   162,    52,   353,   233,
    -159,   359,   301,   213,   225,   220,   242,   315,   236,   113,
     305,   196,   309,   310,   136,   268,   137,    56,   335,   134,
     216,   245,   246,   247,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     107,   319,   294,   267,   208,   320,   162,   241,    39,   297,
     300,   218,    52,   225,    71,     4,    51,   306,   134,    38,
     134,   244,    39,   334,    10,   134,    63,   134,    64,    13,
     337,   338,    75,     4,    76,    77,    78,    79,   346,   167,
     168,   349,    10,   351,   164,   165,   291,    13,    57,   162,
     171,   172,   136,   119,   137,   357,   360,    80,   166,    66,
     363,   316,    75,    38,    76,    77,    78,    79,   330,   169,
     170,   173,   174,   283,   227,    72,   227,   286,   109,   340,
     341,   162,   162,   342,   177,   289,   345,    80,   124,    81,
      82,   308,   175,   176,   311,     4,    58,   354,    83,    84,
      85,   179,   358,    86,    10,   132,   326,   327,   362,    13,
     178,    88,    89,    90,   180,   217,   113,   209,   318,    81,
      82,   348,   266,    48,   322,    49,    50,   210,    83,    84,
      85,   304,   229,    86,   144,   145,   146,   222,    87,   223,
     196,    88,    89,    90,   132,   231,   132,   234,   147,   238,
     148,   132,   149,   132,   107,   243,   317,   248,   249,   347,
     263,   183,   162,    76,    77,    78,    79,     1,     2,     3,
       4,     5,   184,     6,   185,     7,   186,     8,     9,    10,
      11,   187,    12,   188,    13,   189,    80,    14,   190,   191,
      15,    16,   192,    17,   264,    18,   193,    19,   194,    20,
      21,   250,   251,    22,   265,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   256,   257,   269,    81,    82,
     252,   253,   254,   255,   270,   271,   272,    83,    84,    85,
     273,   274,    86,   276,   225,   277,   282,   109,   279,   284,
      88,    89,    90,  -187,     1,     2,     3,     4,     5,   160,
       6,  -205,     7,   285,     8,     9,    10,    11,   287,    12,
     288,    13,   295,   292,    14,   296,   303,    15,    16,   313,
      17,   307,    18,   314,    19,   321,    20,    21,   290,   324,
      22,   183,   329,    76,    77,    78,    79,     1,     2,     3,
       4,     5,   184,     6,   185,     7,   186,     8,     9,    10,
      11,   187,    12,   188,    13,   189,    80,    14,   190,   191,
      15,    16,   192,    17,  -210,    18,   193,    19,   194,    20,
      21,   332,   333,    22,   339,   336,   343,    58,    -5,   350,
     355,   356,   361,   298,   228,    73,   258,   299,    81,    82,
     219,   259,    65,   260,    70,   121,   281,    83,    84,    85,
     237,   110,    86,    36,   312,     0,     0,   109,     0,     0,
      88,    89,    90,    75,     0,    76,    77,    78,    79,     1,
       2,     3,     4,     5,     0,     6,     0,     7,     0,     8,
       9,    10,    11,     0,    12,     0,    13,     0,    80,    14,
       0,     0,    15,    16,     0,    17,     0,    18,     0,    19,
       0,    20,    21,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,    82,     0,     0,     0,     0,     0,     0,     0,    83,
      84,    85,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    75,     0,    76,    77,    78,
      79,     1,     0,     3,     4,     5,     0,     0,     0,     7,
       0,     8,     9,    10,    11,     0,    12,     0,    13,     0,
      80,    14,     0,     0,     0,    16,     0,     0,     0,    18,
       0,    19,     0,    20,    21,     0,     0,     0,     0,    75,
       0,    76,    77,    78,    79,     0,     0,     0,     0,     0,
       0,     0,    81,    82,     0,     0,     0,     0,     0,     0,
       0,    83,    84,    85,    80,     0,    86,   183,     0,    76,
      77,    78,    79,     0,    88,    89,    90,     0,   184,     0,
     185,     0,   186,     0,     0,     0,     0,   187,     0,   188,
       0,   189,    80,     0,   190,   191,    81,    82,   192,     0,
       0,     0,   193,     0,   194,    83,    84,    85,     0,     0,
      86,     0,     0,     0,     0,   290,     0,     0,    88,    89,
      90,     0,     0,     0,    81,    82,    75,     0,    76,    77,
      78,    79,     0,    83,    84,    85,     0,     0,    86,     0,
       0,     0,     0,   109,     0,     0,    88,    89,    90,     0,
       0,    80,    75,     0,    76,    77,    78,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,     0,    76,    77,    78,    79,     0,    80,     0,     0,
       0,     0,     0,    81,    82,     0,    75,     0,    76,    77,
      78,    79,    83,    84,    85,    80,     0,   125,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,     0,    81,
      82,    80,     0,     0,     0,     0,     0,     0,    83,    84,
      85,     0,     0,   127,     0,     0,     0,    81,    82,     0,
       0,    88,    89,    90,     0,     0,    83,    84,    85,     0,
       0,    86,     0,    81,    82,     0,     0,     0,     0,    88,
      89,    90,    83,    84,   214,     0,     0,    86,    35,     0,
       0,     0,     0,     0,     0,    88,    89,    90,     1,     2,
       3,     4,     5,     0,     6,     0,     7,     0,     8,     9,
      10,    11,     0,    12,     0,    13,     0,     0,    14,     0,
       0,    15,    16,     0,    17,     0,    18,     0,    19,   112,
      20,    21,     0,     0,    22,     1,     2,     3,     4,     5,
       0,     6,     0,     7,     0,     8,     9,    10,    11,     0,
      12,     0,    13,     0,     0,    14,     0,     0,    15,    16,
       0,    17,     0,    18,     0,    19,     0,    20,    21,     0,
       0,    22,     1,     2,     3,     4,     5,     0,     6,     0,
       7,     0,     8,     9,    10,    11,     0,    12,     0,    13,
       0,     0,    14,     0,     0,    15,    16,     0,    17,     0,
      18,     0,    19,     0,    20,    21,     0,     0,    22,     0,
     280,     1,     2,     3,     4,     5,     0,     6,     0,     7,
       0,     8,     9,    10,    11,     0,    12,     0,    13,     0,
       0,    14,     0,     0,    15,    16,     0,    17,     0,    18,
       0,    19,     0,    20,    21,     0,     1,    22,     3,     4,
       5,     0,     0,     0,     7,     0,     8,     9,    10,    11,
       0,    12,     0,    13,     0,     0,    14,     0,     0,     0,
      16,     0,     0,     0,    18,     0,    19,     0,    20,    21
};

static const yytype_int16 yycheck[] =
{
      80,    81,    82,   124,    86,    43,     0,   140,    64,   234,
     233,    94,   308,    65,    94,   136,    25,    76,    58,    81,
      82,    76,   318,    82,    62,   136,   322,    82,   181,    23,
      39,    38,    26,    27,     4,    29,    30,     4,     4,    91,
     193,    82,   338,   125,   124,   127,    81,    54,   201,    76,
     346,     4,    77,    94,    79,    82,   136,    64,    76,    94,
      80,   357,   264,   119,    82,   186,   148,   290,    93,    63,
     269,   109,   274,   275,    77,   186,    79,    94,    81,    86,
     120,   164,   165,   166,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     140,   303,   327,   185,   113,   304,   186,   147,    75,    78,
     263,    81,   119,    82,   121,    13,    80,   270,   125,    72,
     127,   161,    75,   325,    22,   132,    75,   134,    77,    27,
     329,   330,     4,    13,     6,     7,     8,     9,   340,    70,
      71,   343,    22,   345,    72,    73,   229,    27,    82,   229,
      66,    67,    77,    33,    79,   354,   358,    29,    86,     4,
     362,   294,     4,    72,     6,     7,     8,     9,   321,    59,
      60,    87,    88,   213,   132,    76,   134,   217,    80,   332,
     333,   261,   262,   336,    83,   225,   339,    29,    93,    61,
      62,   273,    68,    69,   276,    13,    93,   350,    70,    71,
      72,    90,   355,    75,    22,    86,    81,    82,   361,    27,
      89,    83,    84,    85,    64,    33,   210,    76,   300,    61,
      62,   342,    94,    27,   306,    29,    30,    82,    70,    71,
      72,   269,    76,    75,    61,    62,    63,   125,    80,   127,
     278,    83,    84,    85,   125,     4,   127,    82,    75,     4,
      77,   132,    79,   134,   294,     4,   296,   167,   168,   341,
      91,     4,   342,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    92,    38,    39,    40,    41,    42,
      43,   169,   170,    46,    94,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,   175,   176,    75,    61,    62,
     171,   172,   173,   174,    75,     4,    94,    70,    71,    72,
      75,    92,    75,    75,    82,    81,     4,    80,    94,    78,
      83,    84,    85,    81,    10,    11,    12,    13,    14,    93,
      16,    94,    18,    78,    20,    21,    22,    23,    76,    25,
      76,    27,    76,    78,    30,    82,    92,    33,    34,    78,
      36,    94,    38,    78,    40,    94,    42,    43,    80,    26,
      46,     4,    94,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    80,    38,    39,    40,    41,    42,
      43,    76,    75,    46,    76,    92,    76,    93,    45,    94,
      45,    94,    76,   261,   134,    57,   177,   262,    61,    62,
     123,   178,    45,   179,    53,    64,   210,    70,    71,    72,
     142,    61,    75,    23,   278,    -1,    -1,    80,    -1,    -1,
      83,    84,    85,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    -1,    18,    -1,    20,
      21,    22,    23,    -1,    25,    -1,    27,    -1,    29,    30,
      -1,    -1,    33,    34,    -1,    36,    -1,    38,    -1,    40,
      -1,    42,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    -1,    -1,    -1,    18,
      -1,    20,    21,    22,    23,    -1,    25,    -1,    27,    -1,
      29,    30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,
      -1,    40,    -1,    42,    43,    -1,    -1,    -1,    -1,     4,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    29,    -1,    75,     4,    -1,     6,
       7,     8,     9,    -1,    83,    84,    85,    -1,    15,    -1,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    -1,    26,
      -1,    28,    29,    -1,    31,    32,    61,    62,    35,    -1,
      -1,    -1,    39,    -1,    41,    70,    71,    72,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    84,
      85,    -1,    -1,    -1,    61,    62,     4,    -1,     6,     7,
       8,     9,    -1,    70,    71,    72,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    84,    85,    -1,
      -1,    29,     4,    -1,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,     6,     7,     8,     9,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,     4,    -1,     6,     7,
       8,     9,    70,    71,    72,    29,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    -1,    61,
      62,    29,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    61,    62,    -1,
      -1,    83,    84,    85,    -1,    -1,    70,    71,    72,    -1,
      -1,    75,    -1,    61,    62,    -1,    -1,    -1,    -1,    83,
      84,    85,    70,    71,    72,    -1,    -1,    75,     0,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    10,    11,
      12,    13,    14,    -1,    16,    -1,    18,    -1,    20,    21,
      22,    23,    -1,    25,    -1,    27,    -1,    -1,    30,    -1,
      -1,    33,    34,    -1,    36,    -1,    38,    -1,    40,     4,
      42,    43,    -1,    -1,    46,    10,    11,    12,    13,    14,
      -1,    16,    -1,    18,    -1,    20,    21,    22,    23,    -1,
      25,    -1,    27,    -1,    -1,    30,    -1,    -1,    33,    34,
      -1,    36,    -1,    38,    -1,    40,    -1,    42,    43,    -1,
      -1,    46,    10,    11,    12,    13,    14,    -1,    16,    -1,
      18,    -1,    20,    21,    22,    23,    -1,    25,    -1,    27,
      -1,    -1,    30,    -1,    -1,    33,    34,    -1,    36,    -1,
      38,    -1,    40,    -1,    42,    43,    -1,    -1,    46,    -1,
      48,    10,    11,    12,    13,    14,    -1,    16,    -1,    18,
      -1,    20,    21,    22,    23,    -1,    25,    -1,    27,    -1,
      -1,    30,    -1,    -1,    33,    34,    -1,    36,    -1,    38,
      -1,    40,    -1,    42,    43,    -1,    10,    46,    12,    13,
      14,    -1,    -1,    -1,    18,    -1,    20,    21,    22,    23,
      -1,    25,    -1,    27,    -1,    -1,    30,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    38,    -1,    40,    -1,    42,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    11,    12,    13,    14,    16,    18,    20,    21,
      22,    23,    25,    27,    30,    33,    34,    36,    38,    40,
      42,    43,    46,    96,   122,   124,   128,   129,   132,   136,
     137,   168,   169,     4,   147,     0,   168,     4,    72,    75,
     125,   126,   127,   138,   139,   141,   123,   124,   123,   123,
     123,    80,   136,   142,   143,   138,    94,    82,    93,   122,
     124,   170,   171,    75,    77,   139,     4,   133,   134,   135,
     141,   136,    76,   127,   138,     4,     6,     7,     8,     9,
      29,    61,    62,    70,    71,    72,    75,    80,    83,    84,
      85,    99,   100,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   118,   150,    80,
     159,   122,     4,   124,   140,   144,   145,   146,   148,    33,
     142,   143,    81,    82,    93,    75,   103,    75,   103,   103,
     118,   120,   129,   131,   136,   149,    77,    79,   151,   152,
     153,   154,   155,   156,    61,    62,    63,    75,    77,    79,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      93,   119,   103,   105,    72,    73,    86,    70,    71,    59,
      60,    66,    67,    87,    88,    68,    69,    83,    89,    90,
      64,    65,    98,     4,    15,    17,    19,    24,    26,    28,
      31,    32,    35,    39,    41,   120,   122,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   138,    76,
      82,    76,    82,   142,    72,   117,   118,    33,    81,   134,
     116,   121,   149,   149,    76,    82,   130,   131,   130,    76,
     121,     4,    81,    94,    82,   150,    93,   156,     4,   101,
     102,   118,   120,     4,   118,   105,   105,   105,   106,   106,
     107,   107,   108,   108,   108,   108,   109,   109,   110,   111,
     112,    97,    97,    91,    92,    94,    94,   120,   121,    75,
      75,     4,    94,    75,    92,    97,    75,    81,    97,    94,
      48,   146,     4,   118,    78,    78,   118,    76,    76,   118,
      80,   105,    78,   152,   153,    76,    82,    78,   113,   114,
      97,   157,    94,    92,   122,   167,    97,    94,   120,   157,
     157,   120,   162,    78,    78,   152,   150,   118,   120,   157,
     167,    94,   120,    98,    26,    76,    81,    82,    98,    94,
      97,    98,    76,    75,   157,    81,    92,   167,   167,    76,
      97,    97,    97,    76,    98,    97,   157,   120,   116,   157,
      94,   157,    98,    76,    97,    45,    94,   167,    97,    98,
     157,    76,    97,   157
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    96,    97,    98,    99,    99,    99,    99,
      99,    99,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   101,   101,   102,   102,   103,   103,   103,   103,   103,
     103,   104,   104,   104,   104,   104,   104,   105,   105,   106,
     106,   106,   106,   107,   107,   107,   108,   108,   108,   109,
     109,   109,   109,   109,   110,   110,   110,   111,   111,   112,
     112,   113,   113,   114,   114,   115,   115,   116,   116,   117,
     117,   118,   118,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   120,   120,   121,   122,   123,   123,
     124,   124,   124,   124,   125,   125,   126,   126,   127,   127,
     128,   128,   128,   128,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   130,   130,
     131,   131,   132,   132,   132,   133,   133,   134,   134,   135,
     136,   136,   136,   137,   138,   138,   139,   139,   139,   139,
     139,   139,   139,   139,   140,   140,   141,   141,   142,   142,
     143,   143,   144,   144,   145,   145,   146,   146,   147,   147,
     148,   148,   149,   150,   150,   151,   151,   152,   152,   153,
     153,   154,   155,   155,   156,   156,   157,   157,   157,   157,
     157,   157,   158,   158,   158,   159,   160,   160,   161,   161,
     162,   162,   163,   164,   164,   164,   165,   165,   165,   165,
     166,   166,   166,   166,   166,   167,   167,   168,   168,   169,
     170,   170,   171,   171
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     0,     1,     1,     1,     1,
       1,     3,     1,     4,     4,     3,     3,     2,     2,     6,
       7,     0,     1,     1,     3,     1,     2,     2,     2,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     4,     1,     4,     1,     9,     0,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     0,     1,
       2,     2,     2,     2,     0,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       2,     2,     5,     6,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     5,     6,
       6,     5,     4,     4,     0,     1,     2,     3,     0,     1,
       1,     2,     1,     3,     1,     3,     2,     1,     0,     1,
       1,     3,     1,     1,     3,     1,     3,     2,     4,     0,
       1,     2,     1,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     3,     0,     1,     1,     3,
       1,     1,     2,     7,    11,     5,     8,     9,    14,     8,
       3,     2,     2,     2,     3,     0,     1,     1,     1,     4,
       0,     1,     1,     2
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
#line 63 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 67 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 74 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
          // It stores the index of next quad to be generated
          // Used in control statements
          (yyval.instr) = quad.nextInstr;
       }
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 83 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
          // It inserts a goto statement and stores the list of the index of goto
          (yyval.nextList) = new List(quad.nextInstr);
          quad.emit(quadEntry(OP_GOTO_O, ""));
      }
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 92 "ass5_15CS10025.y" /* yacc.c:1646  */
    { 
              // Check if this is in a global function
              if(!globalSymTab->isPresent(*((yyvsp[0].id).strVal))) 
                  (yyval.exp).loc = currentSymTab->lookUp(*((yyvsp[0].id).strVal));
              else (yyval.exp).loc = globalSymTab->lookUp(*((yyvsp[0].id).strVal));

              // Initialise array and type
              (yyval.exp).array = (yyval.exp).loc;
              (yyval.exp).type = (yyval.exp).loc->type;
              (yyval.exp).trueList = NULL;
              (yyval.exp).falseList = NULL;
              (yyval.exp).strLabel = -1;
          }
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 106 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // Generate a temporary variable of int type
              (yyval.exp).loc = currentSymTab->genTemp(new type_t(t_INT));
              (yyval.exp).type = (yyval.exp).loc->type;
              (yyval.exp).trueList = NULL;
              (yyval.exp).falseList = NULL;
              initialVal init; init.intVal = (yyvsp[0].intVal);
              // update the initial value of the temp variable generated
              currentSymTab->update((yyval.exp).loc, init);
              // emit a quad assigning the value
              quad.emit(quadEntry(OP_COPY, (yyval.exp).loc->name, (yyvsp[0].intVal)));
              (yyval.exp).strLabel = -1;
          }
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 120 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // Generate a temporary variable of float type
              (yyval.exp).loc = currentSymTab->genTemp(new type_t(t_DOUBLE));
              (yyval.exp).type = (yyval.exp).loc->type;
              (yyval.exp).trueList = NULL;
              (yyval.exp).falseList = NULL;
              // update the initial value of the temp variable generated
              initialVal init; init.doubleVal = (yyvsp[0].doubleVal);
              currentSymTab->update((yyval.exp).loc, init);
              // emit a quad assigning the value
              quad.emit(quadEntry(OP_COPY, (yyval.exp).loc->name, (yyvsp[0].doubleVal)));
              (yyval.exp).strLabel = -1;
          }
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 134 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // Generate a temporary variable of char type
              (yyval.exp).loc = currentSymTab->genTemp(new type_t(t_CHAR));
              (yyval.exp).type = (yyval.exp).loc->type;
              (yyval.exp).trueList = NULL;
              (yyval.exp).falseList = NULL;
              initialVal init; init.charVal = int((yyvsp[0].charVal));
              // update the initial value of the temp variable generated
              currentSymTab->update((yyval.exp).loc, init);
              // emit a quad assigning the value
              quad.emit(quadEntry(OP_COPY, (yyval.exp).loc->name, int((yyvsp[0].charVal))));
              (yyval.exp).strLabel = -1;
          }
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 148 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // This is not supported
              (yyval.exp).type = new type_t(t_PTR);
              (yyval.exp).type->next = new type_t(t_CHAR);
              (yyval.exp).isString = true;
              if(uniqueLabels.count(*((yyvsp[0].strVal)))) {
                (yyval.exp).strLabel = uniqueLabels[*((yyvsp[0].strVal))];
              } else {
                (yyval.exp).strLabel = strLabels.size();
                uniqueLabels[*((yyvsp[0].strVal))] = strLabels.size();
                strLabels.push_back(*((yyvsp[0].strVal)));
              }
          }
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 162 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // Copy the attribute
              (yyval.exp) = (yyvsp[-1].exp);
          }
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 170 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // Copy the attribute
              (yyval.exp) = (yyvsp[0].exp);
              (yyval.exp).isArrayType = false;
          }
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 176 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

              (yyval.exp) = (yyvsp[-3].exp);
              if(!((yyval.exp).isArrayType)) { //This case appears if postfix_exp was identifier thus it's the case from aho book where L -> id [num]
                  // If this was not array type, we need to create a temporary variable to store offset
                  (yyval.exp).isArrayType = true;
                  (yyval.exp).loc = currentSymTab->genTemp(new type_t(t_INT));
                  // Initialize the temporary variable with value 0
                  quad.emit(quadEntry(OP_MULT, (yyval.exp).loc->name, (yyvsp[-1].exp).loc->name, i2s((yyvsp[-3].exp).type->next->getSize())));
              } else {//This case appears if postfix_exp was another postfix_exp, thus it's the case from aho book where L -> L1 [num]
                  if((yyvsp[-3].exp).type->next == NULL) {
                      yyerror("error: subscripted value is neither array nor pointer nor vector");
                      exit(1);
                  }

                  // Update the offset value
                  symEntry * tmp = currentSymTab->genTemp(new type_t(t_INT));
                  quad.emit(quadEntry(OP_MULT, tmp->name, (yyvsp[-1].exp).loc->name, i2s((yyvsp[-3].exp).type->next->getSize())));
                  quad.emit(quadEntry(OP_PLUS, (yyval.exp).loc->name, (yyval.exp).loc->name, tmp->name));
              }

              

              // now the type of $$ is the type of its element
              (yyval.exp).type = (yyvsp[-3].exp).type->next;

          }
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 204 "ass5_15CS10025.y" /* yacc.c:1646  */
    {    
              // check if this is a valid function
              // check the types of the parameters
              (yyval.exp) = (yyvsp[-3].exp);
              if((yyvsp[-3].exp).loc->nestedTable == NULL || !checkParams((yyvsp[-3].exp), (yyvsp[-1].args))) {
                  char err[100];
                  sprintf(err, "Error in calling %s. Parameters type do not match.\n", (yyvsp[-3].exp).loc->name.c_str());
                  yyerror(err);
                  exit(1);
              } else {
                  // output all the parameters in the quad, taking care of it is a label(strings) or id
                  for(int i = (int)(yyvsp[-1].args)->size() - 1; i >= 0; --i) {
                      if((*(yyvsp[-1].args))[i]->isString) {
                        string label = ".LC" + i2s((*(yyvsp[-1].args))[i]->strLabel);
                        quad.emit(quadEntry(OP_PARAM, label));
                      } else {
                        
                        quad.emit(quadEntry(OP_PARAM, (*(yyvsp[-1].args))[i]->loc->name));
                      }
                  }
                  // emit the quad to csll function
                  char buf[10];
                  sprintf(buf, "%d", (yyvsp[-1].args)->size());
                  (yyval.exp).loc = currentSymTab->genTemp((yyvsp[-3].exp).loc->nestedTable->entries[0]->type);
                  (yyval.exp).type = (yyval.exp).loc->type;
                  (yyval.exp).trueList = NULL;
                  (yyval.exp).falseList = NULL;
                  (yyval.exp).isArrayType = false;
                  // call the function
                  quad.emit(quadEntry(OP_CALL, (yyval.exp).loc->name, (yyvsp[-3].exp).loc->name, buf));
              }
          }
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 237 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // Not supported
          }
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 241 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // Not supported
          }
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 245 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // Generate a temporary variable
              (yyval.exp) = (yyvsp[-1].exp);
              (yyval.exp).loc = currentSymTab->genTemp((yyvsp[-1].exp).type);
              (yyval.exp).type = (yyval.exp).loc->type;

              if((yyvsp[-1].exp).isArrayType) {
                  // if $$ is array type we need to dereference the array first and then increment
                  quad.emit(quadEntry(OP_R_INDEX, (yyval.exp).loc->name, (yyvsp[-1].exp).array->name, (yyvsp[-1].exp).loc->name));
                  symEntry * tmp = currentSymTab->genTemp((yyvsp[-1].exp).type);
                  quad.emit(quadEntry(OP_PLUS, tmp->name, (yyval.exp).loc->name, "1"));
                  quad.emit(quadEntry(OP_L_INDEX, (yyvsp[-1].exp).array->name, (yyvsp[-1].exp).loc->name, tmp->name));
              } else {
                  quad.emit(quadEntry(OP_COPY, (yyval.exp).loc->name, (yyvsp[-1].exp).loc->name));
                  quad.emit(quadEntry(OP_PLUS, (yyvsp[-1].exp).loc->name, (yyvsp[-1].exp).loc->name, "1"));
              }
              (yyval.exp).isArrayType = false;
          }
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 264 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // Generate a temporary variable
              (yyval.exp) = (yyvsp[-1].exp);
              (yyval.exp).loc = currentSymTab->genTemp((yyvsp[-1].exp).type);
              (yyval.exp).type = (yyval.exp).loc->type;

              if((yyvsp[-1].exp).isArrayType) {
                  // if $$ is array type we need to dereference the array first and then increment
                  quad.emit(quadEntry(OP_R_INDEX, (yyval.exp).loc->name, (yyvsp[-1].exp).array->name, (yyvsp[-1].exp).loc->name));
                  symEntry * tmp = currentSymTab->genTemp((yyvsp[-1].exp).type);
                  quad.emit(quadEntry(OP_MINUS, tmp->name, (yyval.exp).loc->name, "1"));
                  quad.emit(quadEntry(OP_L_INDEX, (yyvsp[-1].exp).array->name, (yyvsp[-1].exp).loc->name, tmp->name));
              } else {
                  quad.emit(quadEntry(OP_COPY, (yyval.exp).loc->name, (yyvsp[-1].exp).loc->name));
                  quad.emit(quadEntry(OP_MINUS, (yyvsp[-1].exp).loc->name, (yyvsp[-1].exp).loc->name, "1"));
              }
              (yyval.exp).isArrayType = false;
          }
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 283 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 287 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 294 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // initalise parameter list
              (yyval.args) = new vector <exp_t * >();
          }
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 299 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.args) = (yyvsp[0].args);
          }
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 306 "ass5_15CS10025.y" /* yacc.c:1646  */
    {   
              // initialise parameter list
              (yyval.args) = new vector <exp_t * >();
              (yyval.args)->push_back(new exp_t((yyvsp[0].exp)));
          }
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 312 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // merge parameter list
              (yyval.args) = (yyvsp[-2].args);
              (yyval.args)->push_back(new exp_t((yyvsp[0].exp)));
          }
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 321 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 325 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // Generate temporary variable
              (yyval.exp) = (yyvsp[0].exp);
              (yyval.exp).loc = currentSymTab->genTemp((yyvsp[0].exp).type);
              (yyval.exp).type = (yyval.exp).loc->type;

              if((yyvsp[0].exp).isArrayType) {
                  // we need to dereference the array
                  quad.emit(quadEntry(OP_R_INDEX, (yyval.exp).loc->name, (yyvsp[0].exp).array->name, (yyvsp[0].exp).loc->name));
                  quad.emit(quadEntry(OP_PLUS, (yyval.exp).loc->name, (yyval.exp).loc->name, "1"));
                  quad.emit(quadEntry(OP_L_INDEX, (yyvsp[0].exp).array->name, (yyvsp[0].exp).loc->name, (yyval.exp).loc->name));
              } else {
                  quad.emit(quadEntry(OP_PLUS, (yyvsp[0].exp).loc->name, (yyvsp[0].exp).loc->name, "1"));
                  quad.emit(quadEntry(OP_COPY, (yyval.exp).loc->name, (yyvsp[0].exp).loc->name));
              }
              (yyval.exp).isArrayType = false;
          }
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 343 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // Generate a temporary variable
              (yyval.exp) = (yyvsp[0].exp);
              (yyval.exp).loc = currentSymTab->genTemp((yyvsp[0].exp).type);
              (yyval.exp).type = (yyval.exp).loc->type;

              if((yyvsp[0].exp).isArrayType) {
                  // we need to dereference the array
                  symEntry * tmp = currentSymTab->genTemp((yyvsp[0].exp).type);
                  quad.emit(quadEntry(OP_R_INDEX, (yyval.exp).loc->name, (yyvsp[0].exp).array->name, (yyvsp[0].exp).loc->name));
                  quad.emit(quadEntry(OP_MINUS, tmp->name, (yyval.exp).loc->name, "1"));
                  quad.emit(quadEntry(OP_L_INDEX, (yyvsp[0].exp).array->name, (yyvsp[0].exp).loc->name, tmp->name));
                  (yyval.exp).loc = tmp;
              } else {
                  quad.emit(quadEntry(OP_MINUS, (yyvsp[0].exp).loc->name, (yyvsp[0].exp).loc->name, "1"));
                  quad.emit(quadEntry(OP_COPY, (yyval.exp).loc->name, (yyvsp[0].exp).loc->name));
              }
              (yyval.exp).isArrayType = false;
          }
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 363 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // TODO
              
              (yyval.exp).trueList = NULL;
              (yyval.exp).falseList = NULL;

              switch((yyvsp[-1].charVal)) {
                  case '&':
                    {
                      // address of operator
                      type_t * ptr = new type_t(t_PTR);
                      ptr->next = (yyvsp[0].exp).type;
                      (yyval.exp).loc = currentSymTab->genTemp(ptr);
                      (yyval.exp).type = (yyval.exp).loc->type;
                      if(!(yyvsp[0].exp).isArrayType) quad.emit(quadEntry(OP_ADDR, (yyval.exp).loc->name, (yyvsp[0].exp).loc->name));
                      else quad.emit(quadEntry(OP_PLUS, (yyval.exp).loc->name, (yyvsp[0].exp).array->name, (yyvsp[0].exp).loc->name));
                    }
                    break;
                  case '*':
                    {
                      // value of operator
                      if((yyvsp[0].exp).type->next == NULL) {
                        yyerror("Non pointer type.");
                        exit(1);
                      }
                      (yyval.exp) = (yyvsp[0].exp);
                      (yyval.exp).type = (yyvsp[0].exp).type->next;
                      (yyval.exp).isPtrType = true;
                    }
                    break;
                  case '+':
                    if((yyvsp[0].exp).isArrayType) {
                        (yyvsp[0].exp).isArrayType = false;
                        symEntry * tmp = currentSymTab->genTemp((yyvsp[0].exp).type);
                        quad.emit(quadEntry(OP_R_INDEX, tmp->name, (yyvsp[0].exp).array->name, (yyvsp[0].exp).loc->name));
                        (yyvsp[0].exp).loc = tmp;
                    } else if((yyvsp[0].exp).isPtrType) {
                        (yyvsp[0].exp).isPtrType = false;
                        symEntry * tmp = currentSymTab->genTemp((yyvsp[0].exp).type);
                        quad.emit(quadEntry(OP_R_VAL_AT, tmp->name, (yyvsp[0].exp).array->name, (yyvsp[0].exp).loc->name));
                        (yyvsp[0].exp).loc = tmp;
                    }
                    (yyval.exp) = (yyvsp[0].exp);
                    break;
                  case '-':
                    // unary minus
                    if((yyvsp[0].exp).isArrayType) {
                        (yyvsp[0].exp).isArrayType = false;
                        symEntry * tmp = currentSymTab->genTemp((yyvsp[0].exp).type);
                        quad.emit(quadEntry(OP_R_INDEX, tmp->name, (yyvsp[0].exp).array->name, (yyvsp[0].exp).loc->name));
                        (yyvsp[0].exp).loc = tmp;
                    } else if((yyvsp[0].exp).isPtrType) {
                        (yyvsp[0].exp).isPtrType = false;
                        symEntry * tmp = currentSymTab->genTemp((yyvsp[0].exp).type);
                        quad.emit(quadEntry(OP_R_VAL_AT, tmp->name, (yyvsp[0].exp).array->name, (yyvsp[0].exp).loc->name));
                        (yyvsp[0].exp).loc = tmp;
                    }
                    (yyval.exp).loc = currentSymTab->genTemp((yyvsp[0].exp).type);
                    (yyval.exp).type = (yyval.exp).loc->type;
                    quad.emit(quadEntry(OP_UMINUS, (yyval.exp).loc->name, (yyvsp[0].exp).loc->name));
                    break;
                  case '~':
                    // bitwise not
                    if((yyvsp[0].exp).isArrayType) {
                        (yyvsp[0].exp).isArrayType = false;
                        symEntry * tmp = currentSymTab->genTemp((yyvsp[0].exp).type);
                        quad.emit(quadEntry(OP_R_INDEX, tmp->name, (yyvsp[0].exp).array->name, (yyvsp[0].exp).loc->name));
                        (yyvsp[0].exp).loc = tmp;
                    } else if((yyvsp[0].exp).isPtrType) {
                        (yyvsp[0].exp).isPtrType = false;
                        symEntry * tmp = currentSymTab->genTemp((yyvsp[0].exp).type);
                        quad.emit(quadEntry(OP_R_VAL_AT, tmp->name, (yyvsp[0].exp).array->name, (yyvsp[0].exp).loc->name));
                        (yyvsp[0].exp).loc = tmp;
                    }
                    if((yyvsp[0].exp).type->bType == t_INT || (yyvsp[0].exp).type->bType == t_CHAR || (yyvsp[0].exp).type->bType == t_BOOL) {
                        exp_t e; e.type = new type_t(t_INT);
                        (yyval.exp).loc = currentSymTab->genTemp(e.type);
                        (yyval.exp).type = (yyval.exp).loc->type;
                        typeCheck(&e, &((yyvsp[0].exp)), true);
                        quad.emit(quadEntry(OP_BW_NOT, (yyval.exp).loc->name, (yyvsp[0].exp).loc->name));
                    } else yyerror("Incompatible type for ~");
                    break;

              }
          }
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 449 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 453 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 460 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.charVal) = '&';
          }
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 464 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.charVal) = '*';
          }
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 468 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.charVal) = '+';
          }
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 472 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.charVal) = '-';
          }
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 476 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.charVal) = '~';
          }
#line 2308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 480 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.charVal) = '!';
          }
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 487 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 491 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 500 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

              (yyval.exp) = (yyvsp[0].exp);
              if((yyvsp[0].exp).isArrayType) {
                  (yyvsp[0].exp).isArrayType = false;
                  (yyval.exp).loc = currentSymTab->genTemp((yyvsp[0].exp).type);
                  quad.emit(quadEntry(OP_R_INDEX, (yyval.exp).loc->name, (yyvsp[0].exp).array->name, (yyvsp[0].exp).loc->name));
              } else if((yyvsp[0].exp).isPtrType) {
                  (yyvsp[0].exp).isPtrType = false;
                  (yyval.exp).loc = currentSymTab->genTemp((yyvsp[0].exp).type);
                  quad.emit(quadEntry(OP_R_VAL_AT, (yyval.exp).loc->name, (yyvsp[0].exp).array->name, (yyvsp[0].exp).loc->name));
              }
          }
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 514 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              if((yyvsp[0].exp).isArrayType) {
                  (yyvsp[0].exp).isArrayType = false;
                  symEntry * tmp = currentSymTab->genTemp((yyvsp[0].exp).type);
                  quad.emit(quadEntry(OP_R_INDEX, tmp->name, (yyvsp[0].exp).array->name, (yyvsp[0].exp).loc->name));
                  (yyvsp[0].exp).loc = tmp;
              } else if((yyvsp[0].exp).isPtrType) {
                  (yyvsp[0].exp).isPtrType = false;
                  symEntry * tmp = currentSymTab->genTemp((yyvsp[0].exp).type);
                  quad.emit(quadEntry(OP_R_VAL_AT, tmp->name, (yyvsp[0].exp).array->name, (yyvsp[0].exp).loc->name));
                  (yyvsp[0].exp).loc = tmp;
              }
              (yyval.exp) = (yyvsp[-2].exp);
              typeCheck(&((yyvsp[-2].exp)), &((yyvsp[0].exp)));
              (yyval.exp).loc = currentSymTab->genTemp((yyvsp[0].exp).type);
              (yyval.exp).type = (yyval.exp).loc->type;
              quad.emit(quadEntry(OP_MULT, (yyval.exp).loc->name, (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));
          }
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 533 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              if((yyvsp[0].exp).isArrayType) {
                  (yyvsp[0].exp).isArrayType = false;
                  symEntry * tmp = currentSymTab->genTemp((yyvsp[0].exp).type);
                  quad.emit(quadEntry(OP_R_INDEX, tmp->name, (yyvsp[0].exp).array->name, (yyvsp[0].exp).loc->name));
                  (yyvsp[0].exp).loc = tmp;
              } else if((yyvsp[0].exp).isPtrType) {
                  (yyvsp[0].exp).isPtrType = false;
                  symEntry * tmp = currentSymTab->genTemp((yyvsp[0].exp).type);
                  quad.emit(quadEntry(OP_R_VAL_AT, tmp->name, (yyvsp[0].exp).array->name, (yyvsp[0].exp).loc->name));
                  (yyvsp[0].exp).loc = tmp;
              }
              (yyval.exp) = (yyvsp[-2].exp);
              typeCheck(&((yyvsp[-2].exp)), &((yyvsp[0].exp)));
              (yyval.exp).loc = currentSymTab->genTemp((yyvsp[0].exp).type);
              (yyval.exp).type = (yyval.exp).loc->type;
              quad.emit(quadEntry(OP_DIV, (yyval.exp).loc->name, (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));
          }
#line 2396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 552 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              if((yyvsp[0].exp).isArrayType) {
                  (yyvsp[0].exp).isArrayType = false;
                  symEntry * tmp = currentSymTab->genTemp((yyvsp[0].exp).type);
                  quad.emit(quadEntry(OP_R_INDEX, tmp->name, (yyvsp[0].exp).array->name, (yyvsp[0].exp).loc->name));
                  (yyvsp[0].exp).loc = tmp;
              } else if((yyvsp[0].exp).isPtrType) {
                  (yyvsp[0].exp).isPtrType = false;
                  symEntry * tmp = currentSymTab->genTemp((yyvsp[0].exp).type);
                  quad.emit(quadEntry(OP_R_VAL_AT, tmp->name, (yyvsp[0].exp).array->name, (yyvsp[0].exp).loc->name));
                  (yyvsp[0].exp).loc = tmp;
              }
              (yyval.exp) = (yyvsp[-2].exp);
              typeCheck(&((yyvsp[-2].exp)), &((yyvsp[0].exp)));
              (yyval.exp).loc = currentSymTab->genTemp((yyvsp[0].exp).type);
              (yyval.exp).type = (yyval.exp).loc->type;
              quad.emit(quadEntry(OP_MOD, (yyval.exp).loc->name, (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));
          }
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 574 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 578 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[-2].exp);
              typeCheck(&((yyvsp[-2].exp)), &((yyvsp[0].exp)));
              (yyval.exp).loc = currentSymTab->genTemp((yyvsp[0].exp).type);
              (yyval.exp).type = (yyval.exp).loc->type;
              quad.emit(quadEntry(OP_PLUS, (yyval.exp).loc->name, (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));
          }
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 586 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[-2].exp);
              typeCheck(&((yyvsp[-2].exp)), &((yyvsp[0].exp)));
              (yyval.exp).loc = currentSymTab->genTemp((yyvsp[0].exp).type);
              (yyval.exp).type = (yyval.exp).loc->type;
              quad.emit(quadEntry(OP_MINUS, (yyval.exp).loc->name, (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));
          }
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 597 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 601 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              exp_t e; e.type = new type_t(t_INT);
              if((yyvsp[-2].exp).type->bType == t_DOUBLE || !typeCheck(&e, &((yyvsp[-2].exp)), true)) {
                  yyerror("Invalid type for operator <<\n");
                  exit(1);
              }
              if((yyvsp[0].exp).type->bType == t_DOUBLE || !typeCheck(&e, &((yyvsp[0].exp)), true)) {
                  yyerror("Invalid type for operator <<\n");
                  exit(1);
              }
              (yyval.exp) = (yyvsp[-2].exp);
              (yyval.exp).loc = currentSymTab->genTemp(e.type);
              (yyval.exp).type = (yyval.exp).loc->type;
              quad.emit(quadEntry(OP_SHL, (yyval.exp).loc->name, (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));
          }
#line 2479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 617 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              exp_t e; e.type = new type_t(t_INT);
              if((yyvsp[-2].exp).type->bType == t_DOUBLE || !typeCheck(&e, &((yyvsp[-2].exp)), true)) {
                  yyerror("Invalid type for operator >>\n");
                  exit(1);
              }
              if((yyvsp[0].exp).type->bType == t_DOUBLE || !typeCheck(&e, &((yyvsp[0].exp)), true)) {
                  yyerror("Invalid type for operator >>\n");
                  exit(1);
              }
              (yyval.exp) = (yyvsp[-2].exp);
              (yyval.exp).loc = currentSymTab->genTemp(e.type);
              (yyval.exp).type = (yyval.exp).loc->type;
              quad.emit(quadEntry(OP_SHR, (yyval.exp).loc->name, (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));
          }
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 637 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 641 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              typeCheck(&((yyvsp[-2].exp)), &((yyvsp[0].exp)));
              (yyval.exp).type = new type_t(t_BOOL);
              (yyval.exp).trueList = new List(quad.nextInstr);
              quad.emit(quadEntry(OP_LT, "", (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));
              (yyval.exp).falseList = new List(quad.nextInstr);
              quad.emit(quadEntry(OP_GOTO_O, ""));
          }
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 650 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              typeCheck(&((yyvsp[-2].exp)), &((yyvsp[0].exp)));
              (yyval.exp).type = new type_t(t_BOOL);
              (yyval.exp).trueList = new List(quad.nextInstr);
              quad.emit(quadEntry(OP_GT, "", (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));
              (yyval.exp).falseList = new List(quad.nextInstr);
              quad.emit(quadEntry(OP_GOTO_O, ""));   
          }
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 659 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              typeCheck(&((yyvsp[-2].exp)), &((yyvsp[0].exp)));
              (yyval.exp).type = new type_t(t_BOOL);
              (yyval.exp).trueList = new List(quad.nextInstr);
              quad.emit(quadEntry(OP_LTE, "", (yyvsp[-2].exp).loc->name, (yyvsp[0].exp). loc->name));
              (yyval.exp).falseList = new List(quad.nextInstr);
              quad.emit(quadEntry(OP_GOTO_O, ""));
          }
#line 2546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 668 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              typeCheck(&((yyvsp[-2].exp)), &((yyvsp[0].exp)));
              (yyval.exp).type = new type_t(t_BOOL);
              (yyval.exp).trueList = new List(quad.nextInstr);
              quad.emit(quadEntry(OP_GTE, "", (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));
              (yyval.exp).falseList = new List(quad.nextInstr);
              quad.emit(quadEntry(OP_GOTO_O, ""));
          }
#line 2559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 680 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 684 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              typeCheck(&((yyvsp[-2].exp)), &((yyvsp[0].exp)));
              (yyval.exp).type = new type_t(t_BOOL);
              (yyval.exp).trueList = new List(quad.nextInstr);
              quad.emit(quadEntry(OP_EQ, "", (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));
              (yyval.exp).falseList = new List(quad.nextInstr);
              quad.emit(quadEntry(OP_GOTO_O, ""));
          }
#line 2580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 693 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              typeCheck(&((yyvsp[-2].exp)), &((yyvsp[0].exp)));
              (yyval.exp).type = new type_t(t_BOOL);
              (yyval.exp).trueList = new List(quad.nextInstr);
              quad.emit(quadEntry(OP_NEQ, "", (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));
              (yyval.exp).falseList = new List(quad.nextInstr);
              quad.emit(quadEntry(OP_GOTO_O, ""));
          }
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 705 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 709 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              exp_t e; e.type = new type_t(t_INT);
              if((yyvsp[-2].exp).type->bType == t_DOUBLE || !typeCheck(&e, &((yyvsp[-2].exp)), true)) {
                  yyerror("Invalid type for operator &\n");
                  exit(1);
              }
              if((yyvsp[0].exp).type->bType == t_DOUBLE || !typeCheck(&e, &((yyvsp[0].exp)), true)) {
                  yyerror("Invalid type for operator &\n");
                  exit(1);
              }
              (yyval.exp) = (yyvsp[-2].exp);
              (yyval.exp).loc = currentSymTab->genTemp(e.type);
              (yyval.exp).type = (yyval.exp).loc->type;
              quad.emit(quadEntry(OP_BW_AND, (yyval.exp).loc->name, (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));
          }
#line 2621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 728 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 732 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              exp_t e; e.type = new type_t(t_INT);
              if((yyvsp[-2].exp).type->bType == t_DOUBLE || !typeCheck(&e, &((yyvsp[-2].exp)), true)) {
                  yyerror("Invalid type for operator ^\n");
                  exit(1);
              }
              if((yyvsp[0].exp).type->bType == t_DOUBLE || !typeCheck(&e, &((yyvsp[0].exp)), true)) {
                  yyerror("Invalid type for operator ^\n");
                  exit(1);
              }
              (yyval.exp) = (yyvsp[-2].exp);
              (yyval.exp).loc = currentSymTab->genTemp(e.type);
              (yyval.exp).type = (yyval.exp).loc->type;
              quad.emit(quadEntry(OP_BW_XOR, (yyval.exp).loc->name, (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));
          }
#line 2649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 751 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 755 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              exp_t e; e.type = new type_t(t_INT);
              if((yyvsp[-2].exp).type->bType == t_DOUBLE || !typeCheck(&e, &((yyvsp[-2].exp)), true)) {
                  yyerror("Invalid type for operator |\n");
                  exit(1);
              }
              if((yyvsp[0].exp).type->bType == t_DOUBLE || !typeCheck(&e, &((yyvsp[0].exp)), true)) {
                  yyerror("Invalid type for operator |\n");
                  exit(1);
              }
              (yyval.exp) = (yyvsp[-2].exp);
              (yyval.exp).loc = currentSymTab->genTemp(e.type);
              (yyval.exp).type = (yyval.exp).loc->type;
              quad.emit(quadEntry(OP_BW_OR, (yyval.exp).loc->name, (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));
          }
#line 2677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 774 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 778 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              backPatch((yyvsp[-3].exp).trueList, (yyvsp[-1].instr));
              (yyval.exp).type = new type_t(t_BOOL);
              (yyval.exp).trueList = (yyvsp[0].exp).trueList;
              (yyval.exp).falseList = mergeList((yyvsp[-3].exp).falseList, (yyvsp[0].exp).falseList);
          }
#line 2696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 788 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 792 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              backPatch((yyvsp[-3].exp).falseList, (yyvsp[-1].instr));
              (yyval.exp).type = new type_t(t_BOOL);
              (yyval.exp).trueList = mergeList((yyvsp[-3].exp).trueList, (yyvsp[0].exp).trueList);
              (yyval.exp).falseList = (yyvsp[0].exp).falseList;
          }
#line 2715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 802 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 806 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // N has been inserted to allow non bool expressions
              // M has been inserted to get the address of instruction for backpatching
              (yyval.exp).loc = currentSymTab->genTemp((yyvsp[-4].exp).type);
              quad.emit(quadEntry(OP_COPY, (yyval.exp).loc->name, (yyvsp[0].exp).loc->name));
              List * l = new List(quad.nextInstr);
              quad.emit(quadEntry(OP_GOTO_O, ""));
              backPatch((yyvsp[-3].nextList), quad.nextInstr);
              quad.emit(quadEntry(OP_COPY, (yyval.exp).loc->name, (yyvsp[-4].exp).loc->name));
              l = mergeList(l, new List(quad.nextInstr));
              quad.emit(quadEntry(OP_GOTO_O, ""));
              backPatch((yyvsp[-7].nextList), quad.nextInstr);
              conv2Bool(&((yyvsp[-8].exp)));
              backPatch((yyvsp[-8].exp).trueList, (yyvsp[-5].instr));
              backPatch((yyvsp[-8].exp).falseList, (yyvsp[-1].instr));
              backPatch(l, quad.nextInstr);
          }
#line 2745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 827 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp).trueList = NULL;
              (yyval.exp).falseList = NULL;
              (yyval.exp).loc = NULL;
          }
#line 2755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 833 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 840 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 844 "ass5_15CS10025.y" /* yacc.c:1646  */
    { 
              //if($1.type->bType == t_ARR) {
                //  yyerror("Assignment of arrays. Incompatible types");
                //  exit(1);
              //}
              if((yyvsp[-2].exp).type->bType == t_PTR) {
                  if((yyvsp[0].exp).type->bType == t_DOUBLE) yyerror("Assignment of pointer to double not allowed.");
                  else quad.emit(quadEntry(OP_COPY, (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));
              } else {
                  if(!typeCheck(&((yyvsp[-2].exp)), &((yyvsp[0].exp)), true)) {
                      yyerror("Incompatible types in assignment.");
                      exit(1);
                  }
                  if((yyvsp[-2].exp).isArrayType) {
                      (yyvsp[-2].exp).isArrayType = false;
                      quad.emit(quadEntry(OP_L_INDEX, (yyvsp[-2].exp).array->name, (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));	
                  } else if((yyvsp[-2].exp).isPtrType) {
                      (yyvsp[-2].exp).isPtrType = false;
                      quad.emit(quadEntry(OP_L_VAL_AT, (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));
                  } else {
                      quad.emit(quadEntry(OP_COPY, (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));
                  }
              }
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 874 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 878 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 882 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 886 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 890 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 894 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 898 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 902 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 906 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 910 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 917 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 921 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 928 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 935 "ass5_15CS10025.y" /* yacc.c:1646  */
    { 
              // create a symbol table for the function
              if((yyvsp[-1].exp).type->bType == t_FUNC) {
                  currentSymTab = new symTable();
              }
          }
#line 2916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 945 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 949 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.dec).type = (yyvsp[0].dec).type;
              (yyval.dec).width = (yyvsp[0].dec).width;
          }
#line 2933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 957 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 961 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // save the properties of current type
              (yyval.dec).type = (yyvsp[-1].dec).type;
              (yyval.dec).width = (yyvsp[-1].dec).width;
              quad.type = (yyvsp[-1].dec).type;
              quad.width = (yyvsp[-1].dec).width;
          }
#line 2953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 969 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 973 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 980 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 2977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 984 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 991 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 2993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 995 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 3001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1002 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);     
          }
#line 3009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1006 "ass5_15CS10025.y" /* yacc.c:1646  */
    { 
                // check the type
                typeCheck(&((yyvsp[-2].exp)), &((yyvsp[0].exp)), true);
                // if its initial value was set, update its initial value in symbol table
                if((yyvsp[0].exp).loc->wasInitialised) currentSymTab->update((yyvsp[-2].exp).loc, (yyvsp[0].exp).loc->init);
                quad.emit(quadEntry(OP_COPY, (yyvsp[-2].exp).loc->name, (yyvsp[0].exp).loc->name));
                (yyval.exp) = (yyvsp[-2].exp);
          }
#line 3022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1018 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1022 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1026 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1030 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1037 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.dec).type = new type_t(t_VOID);
              (yyval.dec).width = SIZE_OF_VOID;
          }
#line 3063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1042 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.dec).type = new type_t(t_CHAR);
              (yyval.dec).width = SIZE_OF_CHAR;
          }
#line 3072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1047 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1051 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.dec).type = new type_t(t_INT);
              (yyval.dec).width = SIZE_OF_INT;
          }
#line 3089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1056 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1060 "ass5_15CS10025.y" /* yacc.c:1646  */
    {        

          }
#line 3105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1064 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.dec).type = new type_t(t_DOUBLE);
              (yyval.dec).width = SIZE_OF_DOUBLE;
          }
#line 3114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1069 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1073 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1077 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1081 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1085 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1089 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1093 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
          	  
              (yyval.dec).type = new type_t(t_DOUBLE);
              (yyval.dec).type->isMatrix=1;
              (yyval.dec).width = SIZE_OF_DOUBLE;          
          }
#line 3173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1104 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1108 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.dec).type = (yyvsp[0].dec).type;
              (yyval.dec).width = (yyvsp[0].dec).width;
          }
#line 3190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1116 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.dec).type = (yyvsp[-1].dec).type;
              (yyval.dec).width = (yyvsp[-1].dec).width;
          }
#line 3199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1121 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1128 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1132 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1136 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1143 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1147 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1154 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1158 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1165 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 3271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1172 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1176 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1180 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1187 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1194 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 3311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1198 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

              // update the type
              // update its type, size, offset in symbol table
              type_t * head = new type_t(t_VOID);
              type_t * toChange;
              if((yyvsp[0].exp).loc->nestedTable == NULL) toChange = (yyvsp[0].exp).type;
              else toChange = (yyvsp[0].exp).loc->nestedTable->entries[0]->type;

              head->next = toChange;

              type_t * ptr = head;

              int oldSize = (yyvsp[0].exp).loc->size;
              if((yyvsp[0].exp).loc->nestedTable != NULL) oldSize = (yyvsp[0].exp).loc->nestedTable->entries[0]->size;
              int newSize = SIZE_OF_PTR;
              
              while(ptr->next->next != NULL) {
                  newSize *= ptr->size;
                  ptr = ptr->next;
              }

              type_t * ptr2 = (yyvsp[-1].dec).type;
              while(ptr2->next != NULL) ptr2 = ptr2->next;
              ptr2->next = ptr->next;
              ptr->next = (yyvsp[-1].dec).type; 
             
              if((yyvsp[0].exp).loc->nestedTable == NULL) {
                  currentSymTab->offset += newSize - oldSize; 
                  (yyvsp[0].exp).loc->type = head->next;
                  (yyvsp[0].exp).loc->size = newSize;
                  (yyvsp[0].exp).type = (yyvsp[0].exp).loc->type;
              } else {
                  // if its a function, we change the offset values of all the entries after this
                  for(int i = 1; i < (int)(yyvsp[0].exp).loc->nestedTable->entries.size(); ++i) {
                      (yyvsp[0].exp).loc->nestedTable->entries[i]->offset += newSize - oldSize;
                  }
                  (yyvsp[0].exp).loc->nestedTable->entries[0]->type = head->next;
                  (yyvsp[0].exp).loc->nestedTable->entries[0]->size = newSize;
                  (yyvsp[0].exp).loc->nestedTable->offset += newSize - oldSize;
                  (yyvsp[0].exp).type = head->next;
              }
              (yyval.exp) = (yyvsp[0].exp);
              
              delete head;
          }
#line 3362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1248 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // find the identifier in the symbol table, if its not present, insert it
              (yyval.exp).loc = currentSymTab->lookUp(*((yyvsp[0].id).strVal));
              currentSymTab->update((yyval.exp).loc, quad.type, quad.width);
              (yyval.exp).type = (yyval.exp).loc->type;
          }
#line 3373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1255 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[-1].exp);
          }
#line 3381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1259 "ass5_15CS10025.y" /* yacc.c:1646  */
    { 
              type_t * p = new type_t(t_ARR);
              int isMatrix = (yyvsp[-4].exp).type->isMatrix;// check Matrix type
              if((yyvsp[-1].exp).loc == NULL) {
                  if((yyvsp[-4].exp).type->bType == t_INT || (yyvsp[-4].exp).type->bType == t_VOID || (yyvsp[-4].exp).type->bType == t_CHAR || (yyvsp[-4].exp).type->bType == t_DOUBLE) {
                      p = new type_t(t_PTR);
                      p->next = (yyvsp[-4].exp).type;
                      (yyvsp[-4].exp).type = p;
                      (yyvsp[-4].exp).loc->type = p;
                      int oldSize = (yyvsp[-4].exp).loc->size;
                      (yyvsp[-4].exp).loc->size += SIZE_OF_PTR - oldSize;
                      currentSymTab->offset += SIZE_OF_PTR - oldSize;
                      (yyval.exp) = (yyvsp[-4].exp);
                  } else {
                      yyerror("Incomplete type for array.\n");
                      exit(1);
                  }
              } else {
                if((yyvsp[-1].exp).loc->type->bType == t_INT) p->size = (yyvsp[-1].exp).loc->init.intVal;
                else {
                    yyerror("Non integer type array size.");
                    exit(1);
                }
                int oldSize = (yyvsp[-4].exp).loc->size;

                p->next = (yyvsp[-4].exp).type;
                type_t * head = new type_t();
                head->next = (yyvsp[-4].exp).type;
                type_t * ptr = head;
                while(ptr->next->next != NULL) ptr = ptr->next;

                p->next = ptr->next;
                ptr->next = p;

                int newSize;
                if((yyvsp[-1].exp).loc != NULL) newSize = head->next->getSize();
                else newSize = SIZE_OF_PTR;


                (yyvsp[-4].exp).type = head->next;
                (yyvsp[-4].exp).loc->type = head->next;
                (yyvsp[-4].exp).loc->size = newSize;
 

                for(int i = (int)currentSymTab->entries.size() - 1; i >= 0; --i) {
                    if(currentSymTab->entries[i] == (yyvsp[-4].exp).loc) break;
                    currentSymTab->entries[i]->offset += newSize - oldSize;
                }
                currentSymTab->offset += newSize - oldSize;

                (yyval.exp) = (yyvsp[-4].exp);
                (yyval.exp).type->isMatrix=isMatrix; //set type if matrix
              }
          }
#line 3440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1314 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1318 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1322 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1326 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // this is a function declaration
              // save the return type
              // save the nestedTable
              // update its name
              symEntry * s = globalSymTab->lookUp((yyvsp[-3].exp).loc->name);
              globalSymTab->update(s, new type_t(t_FUNC), SIZE_OF_FUNC);
              s->nestedTable = currentSymTab;
              currentSymTab->name = "ST (" + (yyvsp[-3].exp).loc->name + ")";
              quad.emit(quadEntry(OP_FUNC_START, (yyvsp[-3].exp).loc->name));
              (yyvsp[-3].exp).loc->name = "__retVal";
              (yyvsp[-3].exp).loc->scope = "return";
              (yyval.exp).loc = s;
              (yyval.exp).type = (yyval.exp).loc->type;
          }
#line 3484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1342 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1349 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

            }
#line 3500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1353 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

            }
#line 3508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1358 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.dec).type = new type_t(t_PTR);
          }
#line 3516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1362 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // type of $$ is pointer of $3
              (yyval.dec).type = new type_t(t_PTR);
              (yyval.dec).type->next = (yyvsp[0].dec).type;
          }
#line 3526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1371 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1375 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1382 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1386 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1394 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1398 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1405 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1409 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1417 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // save its scope as param
              (yyvsp[0].exp).loc->scope = "param";
          }
#line 3599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1422 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1429 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1433 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1440 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1444 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1451 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              // save the width and type of current type for the variables to be declared
              (yyval.dec).type = (yyvsp[0].dec).type;
              (yyval.dec).width = (yyvsp[0].dec).width;
          }
#line 3649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1460 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
              (yyval.exp) = (yyvsp[0].exp);
          }
#line 3657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1464 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

          }
#line 3665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1471 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
		
		}
#line 3673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1475 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
	  	
	  	}
#line 3681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1483 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 3689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1487 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 3697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1494 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 3705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1498 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 3713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1505 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 3721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1512 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 3729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1516 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 3737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1523 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 3745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1527 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 3753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1535 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 3761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1539 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            (yyval.nextList) = (yyvsp[0].nextList);
        }
#line 3769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1543 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            (yyval.nextList) = NULL;
        }
#line 3777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1547 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            (yyval.nextList) = (yyvsp[0].nextList);
        }
#line 3785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1551 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            (yyval.nextList) = (yyvsp[0].nextList);
        }
#line 3793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1555 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            (yyval.nextList) = (yyvsp[0].nextList);
        }
#line 3801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1562 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            // Not supported          
        }
#line 3809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1566 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            // Not supported
        }
#line 3817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1570 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            // Not supported
        }
#line 3825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1577 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            (yyval.nextList) = (yyvsp[-1].nextList);
        }
#line 3833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1584 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            (yyval.nextList) = NULL;
        }
#line 3841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1588 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            (yyval.nextList) = (yyvsp[0].nextList);
        }
#line 3849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1595 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            (yyval.nextList) = (yyvsp[0].nextList);
        }
#line 3857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1599 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

            backPatch((yyvsp[-2].nextList), (yyvsp[-1].instr));
            (yyval.nextList) = (yyvsp[0].nextList);
        }
#line 3867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1608 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            (yyval.nextList) = NULL;
        }
#line 3875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1612 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            (yyval.nextList) = (yyvsp[0].nextList);
        }
#line 3883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1623 "ass5_15CS10025.y" /* yacc.c:1646  */
    {   
            // N has been inserted to allow non-bool expressions as condition
            // if expression is not bool then we convert it into bool 
            List * l = mergeList((yyvsp[0].nextList), new List(quad.nextInstr));
            quad.emit(quadEntry(OP_GOTO_O, ""));
            backPatch((yyvsp[-3].nextList), quad.nextInstr);
            conv2Bool(&((yyvsp[-4].exp)));
            backPatch((yyvsp[-4].exp).trueList, (yyvsp[-1].instr));
            // all dangling gotos are merged and stored
            (yyval.nextList) = mergeList((yyvsp[-4].exp).falseList, l);
        }
#line 3899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1635 "ass5_15CS10025.y" /* yacc.c:1646  */
    { 
            // N has been inserted to allow non-bool expressions as condition
            // if expression is not bool then we convert it into bool 
            List * l = mergeList((yyvsp[-4].nextList), (yyvsp[-3].nextList));
            l = mergeList(l, new List(quad.nextInstr));
            quad.emit(quadEntry(OP_GOTO_O, ""));
            backPatch((yyvsp[-7].nextList), quad.nextInstr);
            // convert to bool expression
            conv2Bool(&((yyvsp[-8].exp)));
            backPatch((yyvsp[-8].exp).trueList, (yyvsp[-5].instr));
            backPatch((yyvsp[-8].exp).falseList, (yyvsp[-1].instr));
            // merge the dangling gotos
            (yyval.nextList) = mergeList(l, (yyvsp[0].nextList));
        }
#line 3918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1650 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 3926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1657 "ass5_15CS10025.y" /* yacc.c:1646  */
    { 
            // N has been inserted to allow non-bool expressions as condition
            // if expression is not bool then we convert it into bool 
            List * l = mergeList((yyvsp[0].nextList), new List(quad.nextInstr));
            // emit a goto after statement to goto condition again
            quad.emit(quadEntry(OP_GOTO_O, ""));
            backPatch((yyvsp[-3].nextList), quad.nextInstr);
            conv2Bool(&((yyvsp[-4].exp)));
            backPatch((yyvsp[-4].exp).trueList, (yyvsp[-1].instr));
            backPatch(l, (yyvsp[-5].instr));
            (yyval.nextList) = (yyvsp[-4].exp).falseList;
        }
#line 3943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1670 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            // if expression is not bool then we convert it into bool 
            conv2Bool(&((yyvsp[-2].exp)));
            backPatch((yyvsp[-2].exp).trueList, (yyvsp[-7].instr));
            backPatch((yyvsp[-6].nextList), (yyvsp[-3].instr));
            (yyval.nextList) = (yyvsp[-2].exp).falseList;
        }
#line 3955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1678 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            // N has been inserted to allow non-bool expressions as condition
            // if expression is not bool then we convert it into bool 
           

            List * l = mergeList((yyvsp[0].nextList), new List(quad.nextInstr));
            // emit a goto after body of for loop to goto increment part
            quad.emit(quadEntry(OP_GOTO_O, ""));
            backPatch(l, (yyvsp[-5].instr));
            backPatch((yyvsp[-7].nextList), quad.nextInstr);
            conv2Bool(&((yyvsp[-8].exp)));
            backPatch((yyvsp[-8].exp).trueList, (yyvsp[-1].instr));
            backPatch((yyvsp[-3].nextList), (yyvsp[-9].instr));
            (yyval.nextList) = (yyvsp[-8].exp).falseList;
        }
#line 3975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1694 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            // Not supported
        }
#line 3983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1701 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            // Not supported
        }
#line 3991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1705 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 3999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1709 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 4007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1713 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            quad.emit(quadEntry(OP_RETURN, ""));
            (yyval.nextList) = NULL;
        }
#line 4016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1718 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            // convert the expression to the return type of the function
            exp_t e; e.type = currentSymTab->entries[0]->type;
            typeCheck(&e, &((yyvsp[-1].exp)), true);
            // save the expression in return value of the function
            quad.emit(quadEntry(OP_RETURN_VAL, (yyvsp[-1].exp).loc->name));
            (yyval.nextList) = NULL;
        }
#line 4029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1730 "ass5_15CS10025.y" /* yacc.c:1646  */
    { 
            // initialise trueList and falseList
            (yyval.exp).type = new type_t(t_BOOL);
            (yyval.exp).trueList = NULL;
            (yyval.exp).falseList = NULL;
        }
#line 4040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1737 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 4048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1744 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 4056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1748 "ass5_15CS10025.y" /* yacc.c:1646  */
    {
            quad.quad_v.pop_back();
            quad.nextInstr--;
        }
#line 4065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1756 "ass5_15CS10025.y" /* yacc.c:1646  */
    {   
            // save the nestedTable of the function in the global symbol table
            (yyvsp[-2].exp).loc->nestedTable = currentSymTab;
            currentSymTab = new symTable();
            // backPatch all dangling gotos to the next instruction
            backPatch((yyvsp[0].nextList), quad.nextInstr);
            quad.emit(quadEntry(OP_FUNC_END, (yyvsp[-2].exp).loc->name));
        }
#line 4078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1768 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 4086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1772 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 4094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1779 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 4102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1783 "ass5_15CS10025.y" /* yacc.c:1646  */
    {

        }
#line 4110 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4114 "y.tab.c" /* yacc.c:1646  */
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
#line 1789 "ass5_15CS10025.y" /* yacc.c:1906  */


void yyerror(const char * s) {
    fprintf(stderr, "%s\n",s);
}
