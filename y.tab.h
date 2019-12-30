/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 7 "ass5_15CS10025.y" /* yacc.c:1909  */

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

#line 208 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
