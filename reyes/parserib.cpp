/* A Bison parser, made by GNU Bison 2.7.1.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 27 "parserib.y"

// C includes
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Reyes includes
#include "parserib.h"
#include "ri.h"

/* Line 371 of yacc.c  */
#line 79 "parserib.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FRAMEBEGIN = 258,
     FRAMEEND = 259,
     WORLDBEGIN = 260,
     WORLDEND = 261,
     ATTRIBUTEBEGIN = 262,
     ATTRIBUTEEND = 263,
     MOTIONBEGIN = 264,
     MOTIONEND = 265,
     TRANSFORMBEGIN = 266,
     TRANSFORMEND = 267,
     SOLIDBEGIN = 268,
     SOLIDEND = 269,
     OBJECTBEGIN = 270,
     OBJECTEND = 271,
     FORMAT = 272,
     FRAMEASPECTRATIO = 273,
     SCREENWINDOW = 274,
     CROPWINDOW = 275,
     PROJECTION = 276,
     CLIPPING = 277,
     DEPTHOFFIELD = 278,
     SHUTTER = 279,
     PIXELVARIANCE = 280,
     PIXELSAMPLES = 281,
     PIXELFILTER = 282,
     EXPOSURE = 283,
     IMAGER = 284,
     QUANTIZE = 285,
     DISPLAY = 286,
     HIDER = 287,
     COLORSAMPLES = 288,
     RELATIVEDETAIL = 289,
     OPTION = 290,
     COLOR = 291,
     OPACITY = 292,
     TEXTURECOORDINATES = 293,
     SURFACE = 294,
     SHADINGRATE = 295,
     SHADINGINTERPOLATION = 296,
     MATTE = 297,
     LIGHTSOURCE = 298,
     AREALIGHTSOURCE = 299,
     ILLUMINATE = 300,
     ATMOSPHERE = 301,
     INTERIOR = 302,
     EXTERIOR = 303,
     BOUND = 304,
     DETAIL = 305,
     DETAILRANGE = 306,
     GEOMETRICAPPROXIMATION = 307,
     ORIENTATION = 308,
     REVERSEORIENTATION = 309,
     SIDES = 310,
     IDENTITY = 311,
     TRANSFORM = 312,
     CONCATTRANSFORM = 313,
     PERSPECTIVE = 314,
     TRANSLATE = 315,
     ROTATE = 316,
     SCALE = 317,
     SKEW = 318,
     DEFORMATION = 319,
     DISPLACEMENT = 320,
     COORDINATESYSTEM = 321,
     TRANSFORMPOINTS = 322,
     ATTRIBUTE = 323,
     MAKETEXTURE = 324,
     DISK = 325,
     SPHERE = 326,
     CYLINDER = 327,
     CONE = 328,
     TORUS = 329,
     HYPERBOLOID = 330,
     PARABOLOID = 331,
     BOX = 332,
     GAUSSIAN = 333,
     WRAPPERIODIC = 334,
     WRAPCLAMP = 335,
     WRAPBLACK = 336,
     NUM = 337,
     NAME = 338
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 39 "parserib.y"

  float num;
  char *string;
  ParamList *paramlist;
  float (*filter)(float,float,float,float);
  int wrap;


/* Line 387 of yacc.c  */
#line 211 "parserib.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 239 "parserib.cpp"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   209

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNRULES -- Number of states.  */
#define YYNSTATES  210

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   338

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    84,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    85,     2,    86,     2,     2,     2,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81,    82,    83
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    11,    13,    15,    17,
      19,    21,    23,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    54,    56,    62,
      67,    70,    76,    82,    88,    91,    95,   102,   106,   112,
     121,   133,   135,   137,   143,   146,   153,   160,   166,   168,
     171,   176,   182,   188,   193,   200,   209,   215,   216,   221,
     224,   231,   237,   242,   247,   253,   257,   276,   278,   280,
     282,   284
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      88,     0,    -1,    89,    -1,    -1,    89,    90,    -1,    91,
      -1,    92,    -1,    95,    -1,    98,    -1,    99,    -1,     1,
      -1,   102,    -1,     3,    82,    -1,     4,    -1,     5,    -1,
       6,    -1,     7,    -1,     8,    -1,     9,    -1,    10,    -1,
      11,    -1,    12,    -1,    13,    -1,    14,    -1,    15,    -1,
      16,    -1,    93,    -1,    94,    -1,    35,    84,    83,    84,
     100,    -1,    17,    82,    82,    82,    -1,    18,    82,    -1,
      19,    82,    82,    82,    82,    -1,    20,    82,    82,    82,
      82,    -1,    21,    84,    83,    84,   100,    -1,    25,    82,
      -1,    26,    82,    82,    -1,    27,    84,   103,    84,    82,
      82,    -1,    28,    82,    82,    -1,    29,    84,    83,    84,
     100,    -1,    30,    84,    83,    84,    82,    82,    82,    82,
      -1,    31,    84,    83,    84,    84,    83,    84,    84,    83,
      84,   100,    -1,    96,    -1,    97,    -1,    39,    84,    83,
      84,   100,    -1,    40,    82,    -1,    36,    85,    82,    82,
      82,    86,    -1,    37,    85,    82,    82,    82,    86,    -1,
      43,    84,    83,    84,   100,    -1,   101,    -1,    55,    82,
      -1,    70,    82,    82,    82,    -1,    71,    82,    82,    82,
      82,    -1,    72,    82,    82,    82,    82,    -1,    73,    82,
      82,    82,    -1,    74,    82,    82,    82,    82,    82,    -1,
      75,    82,    82,    82,    82,    82,    82,    82,    -1,    76,
      82,    82,    82,    82,    -1,    -1,   100,    84,    83,    84,
      -1,   100,    82,    -1,   100,    85,    82,    82,    82,    86,
      -1,    61,    82,    82,    82,    82,    -1,    62,    82,    82,
      82,    -1,    60,    82,    82,    82,    -1,    65,    84,    83,
      84,   100,    -1,    65,    84,    84,    -1,    69,    84,    83,
      84,    84,    83,    84,    84,   104,    84,    84,   104,    84,
      84,   103,    84,    82,    82,    -1,    77,    -1,    78,    -1,
      79,    -1,    80,    -1,    81,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   171,   171,   174,   175,   178,   179,   180,   181,   182,
     183,   184,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   204,   205,   206,   209,
     210,   211,   212,   213,   216,   217,   218,   219,   220,   221,
     222,   226,   227,   228,   229,   232,   233,   236,   240,   241,
     245,   246,   247,   248,   249,   250,   251,   254,   255,   256,
     257,   260,   261,   262,   263,   264,   267,   270,   271,   274,
     275,   276
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FRAMEBEGIN", "FRAMEEND", "WORLDBEGIN",
  "WORLDEND", "ATTRIBUTEBEGIN", "ATTRIBUTEEND", "MOTIONBEGIN", "MOTIONEND",
  "TRANSFORMBEGIN", "TRANSFORMEND", "SOLIDBEGIN", "SOLIDEND",
  "OBJECTBEGIN", "OBJECTEND", "FORMAT", "FRAMEASPECTRATIO", "SCREENWINDOW",
  "CROPWINDOW", "PROJECTION", "CLIPPING", "DEPTHOFFIELD", "SHUTTER",
  "PIXELVARIANCE", "PIXELSAMPLES", "PIXELFILTER", "EXPOSURE", "IMAGER",
  "QUANTIZE", "DISPLAY", "HIDER", "COLORSAMPLES", "RELATIVEDETAIL",
  "OPTION", "COLOR", "OPACITY", "TEXTURECOORDINATES", "SURFACE",
  "SHADINGRATE", "SHADINGINTERPOLATION", "MATTE", "LIGHTSOURCE",
  "AREALIGHTSOURCE", "ILLUMINATE", "ATMOSPHERE", "INTERIOR", "EXTERIOR",
  "BOUND", "DETAIL", "DETAILRANGE", "GEOMETRICAPPROXIMATION",
  "ORIENTATION", "REVERSEORIENTATION", "SIDES", "IDENTITY", "TRANSFORM",
  "CONCATTRANSFORM", "PERSPECTIVE", "TRANSLATE", "ROTATE", "SCALE", "SKEW",
  "DEFORMATION", "DISPLACEMENT", "COORDINATESYSTEM", "TRANSFORMPOINTS",
  "ATTRIBUTE", "MAKETEXTURE", "DISK", "SPHERE", "CYLINDER", "CONE",
  "TORUS", "HYPERBOLOID", "PARABOLOID", "BOX", "GAUSSIAN", "WRAPPERIODIC",
  "WRAPCLAMP", "WRAPBLACK", "NUM", "NAME", "'\"'", "'['", "']'", "$accept",
  "input", "commands", "command", "structure", "options", "camera",
  "display", "shadingattributes", "colorandopacity", "lights",
  "geometryattributes", "primitive", "paramlist", "transformations",
  "makefunctions", "filter", "wrap", YY_NULL
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
     335,   336,   337,   338,    34,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    92,    92,    92,    93,
      93,    93,    93,    93,    94,    94,    94,    94,    94,    94,
      94,    95,    95,    95,    95,    96,    96,    97,    98,    98,
      99,    99,    99,    99,    99,    99,    99,   100,   100,   100,
     100,   101,   101,   101,   101,   101,   102,   103,   103,   104,
     104,   104
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     4,
       2,     5,     5,     5,     2,     3,     6,     3,     5,     8,
      11,     1,     1,     5,     2,     6,     6,     5,     1,     2,
       4,     5,     5,     4,     6,     8,     5,     0,     4,     2,
       6,     5,     4,     4,     5,     3,    18,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     1,    10,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     5,     6,    26,    27,     7,    41,    42,     8,     9,
      48,    11,    12,     0,    30,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
       0,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,    67,
      68,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,    57,     0,    57,
       0,     0,    57,     0,     0,    57,    57,    63,     0,    62,
      57,     0,    50,     0,     0,    53,     0,     0,     0,    31,
      32,    33,     0,    38,     0,     0,    28,     0,     0,    43,
      47,    61,    64,     0,    51,    52,     0,     0,    56,    59,
       0,     0,    36,     0,     0,    45,    46,     0,    54,     0,
       0,     0,     0,     0,     0,     0,    58,     0,    39,     0,
       0,    55,     0,     0,    69,    70,    71,     0,    60,    57,
       0,    40,     0,     0,     0,     0,     0,     0,     0,    66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,   151,    60,    61,   101,   197
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -122
static const yytype_int8 yypact[] =
{
    -122,     2,     0,  -122,  -122,   -48,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,   -40,
     -30,   -29,   -28,   -27,   -26,   -24,   -25,   -19,   -20,   -18,
     -17,   -16,    -8,    -7,    -5,    -2,    -3,     1,     3,     4,
       5,     6,     7,    10,    11,    12,    13,    14,    15,    16,
    -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,    17,  -122,    18,    19,    -1,  -122,    20,
     -45,    21,    22,    23,    24,    26,    28,    29,    30,  -122,
      31,  -122,    33,    34,    35,   -37,    36,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,  -122,  -122,
    -122,    49,  -122,    50,    51,    52,    53,    56,    57,    58,
      59,    62,    63,    64,    65,  -122,    66,    69,    70,    71,
      72,    73,    74,    75,  -122,    76,    77,  -122,    78,  -122,
      79,    80,  -122,    81,    83,  -122,  -122,  -122,    84,  -122,
    -122,    85,  -122,    86,    88,  -122,    89,    90,    91,  -122,
    -122,   -34,    92,   -34,    93,    94,   -34,    32,    54,   -34,
     -34,  -122,   -34,    95,  -122,  -122,    97,    98,  -122,  -122,
      99,   101,  -122,   102,   103,  -122,  -122,   104,  -122,   107,
     106,   109,   110,   111,   112,   115,  -122,   116,  -122,   117,
     -57,  -122,    55,   118,  -122,  -122,  -122,   119,  -122,  -122,
     120,   -34,   -57,   121,   122,   -45,   123,   126,   127,  -122
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,   -91,  -122,  -122,  -121,  -114
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yytype_int16 yytable[] =
{
      -2,     4,     3,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   194,   195,   196,    24,    25,    26,    27,    28,
      29,    30,    99,   100,    62,    31,    32,    33,   153,    34,
      35,   156,    63,    36,   159,   160,   114,   115,   169,   162,
     170,   171,    64,    65,    66,    37,    68,    67,    69,    70,
      38,    39,    40,    71,    72,    41,    73,    74,    75,    42,
      43,    44,    45,    46,    47,    48,    49,    76,    77,    78,
      79,    80,    97,    81,   206,    82,    83,    84,   203,     0,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    98,   102,     0,   103,   104,   105,   201,   106,
     107,   108,     0,   109,   110,   111,   112,   113,   175,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,     0,   127,   128,   129,   130,   131,   132,   133,   134,
     176,   198,   135,   136,   137,   138,   139,     0,     0,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     152,   154,     0,   157,   155,   158,   161,     0,   164,   163,
     165,   166,   167,   168,   172,   173,     0,   174,   177,   178,
     179,     0,   180,   181,   182,     0,     0,   183,   184,   185,
     186,   187,   188,     0,     0,   189,   190,   191,   192,     0,
     193,     0,   199,   200,   202,   204,   205,   207,   208,   209
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-122)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,     1,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    79,    80,    81,    25,    26,    27,    28,    29,
      30,    31,    77,    78,    82,    35,    36,    37,   129,    39,
      40,   132,    82,    43,   135,   136,    83,    84,    82,   140,
      84,    85,    82,    82,    82,    55,    82,    84,    82,    84,
      60,    61,    62,    82,    84,    65,    84,    84,    84,    69,
      70,    71,    72,    73,    74,    75,    76,    85,    85,    84,
      82,    84,    83,    82,   205,    82,    82,    82,   202,    -1,
      84,    84,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    -1,    83,    83,    83,   199,    83,
      82,    82,    -1,    83,    83,    82,    82,    82,    86,    83,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      -1,    -1,    84,    84,    84,    84,    84,    84,    82,    82,
      86,    86,    84,    84,    82,    82,    82,    -1,    -1,    84,
      84,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    -1,    82,    84,    82,    82,    -1,    82,    84,
      82,    82,    82,    82,    82,    82,    -1,    83,    83,    82,
      82,    -1,    83,    82,    82,    -1,    -1,    84,    84,    82,
      84,    82,    82,    -1,    -1,    84,    84,    82,    82,    -1,
      83,    -1,    84,    84,    84,    84,    84,    84,    82,    82
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    88,    89,     0,     1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    25,    26,    27,    28,    29,    30,
      31,    35,    36,    37,    39,    40,    43,    55,    60,    61,
      62,    65,    69,    70,    71,    72,    73,    74,    75,    76,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     101,   102,    82,    82,    82,    82,    82,    84,    82,    82,
      84,    82,    84,    84,    84,    84,    85,    85,    84,    82,
      84,    82,    82,    82,    82,    84,    84,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    83,    82,    77,
      78,   103,    82,    83,    83,    83,    83,    82,    82,    83,
      83,    82,    82,    82,    83,    84,    83,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    84,    84,    84,
      84,    84,    84,    82,    82,    84,    84,    82,    82,    82,
      84,    84,    82,    82,    82,    82,    82,    82,    82,    82,
      82,   100,    82,   100,    82,    84,   100,    82,    82,   100,
     100,    82,   100,    84,    82,    82,    82,    82,    82,    82,
      84,    85,    82,    82,    83,    86,    86,    83,    82,    82,
      83,    82,    82,    84,    84,    82,    84,    82,    82,    84,
      84,    82,    82,    83,    79,    80,    81,   104,    86,    84,
      84,   100,    84,   104,    84,    84,   103,    84,    82,    82
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


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
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
     `$$ = $1'.

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
/* Line 1787 of yacc.c  */
#line 171 "parserib.y"
    {}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 188 "parserib.y"
    {RiFrameBegin((int)(yyvsp[(2) - (2)].num));}
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 189 "parserib.y"
    {RiFrameEnd();}
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 190 "parserib.y"
    {RiWorldBegin();}
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 191 "parserib.y"
    {RiWorldEnd();}
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 192 "parserib.y"
    {RiAttributeBegin();}
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 193 "parserib.y"
    {RiAttributeEnd();}
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 194 "parserib.y"
    {RiMotionBegin();}
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 195 "parserib.y"
    {RiMotionEnd();}
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 196 "parserib.y"
    {RiTransformBegin();}
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 197 "parserib.y"
    {RiTransformEnd();}
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 198 "parserib.y"
    {RiSolidBegin();}
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 199 "parserib.y"
    {RiSolidEnd();}
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 200 "parserib.y"
    {RiObjectBegin();}
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 201 "parserib.y"
    {RiObjectEnd();}
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 206 "parserib.y"
    {RiOption((yyvsp[(3) - (5)].string),*(yyvsp[(5) - (5)].paramlist));}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 209 "parserib.y"
    {RiFormat((int)(yyvsp[(2) - (4)].num),(int)(yyvsp[(3) - (4)].num),(yyvsp[(4) - (4)].num));}
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 210 "parserib.y"
    {RiFrameAspectRatio((yyvsp[(2) - (2)].num));}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 211 "parserib.y"
    {RiScreenWindow((yyvsp[(2) - (5)].num),(yyvsp[(3) - (5)].num),(yyvsp[(4) - (5)].num),(yyvsp[(5) - (5)].num));}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 212 "parserib.y"
    {RiCropWindow((yyvsp[(2) - (5)].num),(yyvsp[(3) - (5)].num),(yyvsp[(4) - (5)].num),(yyvsp[(5) - (5)].num));}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 213 "parserib.y"
    {RiProjection((yyvsp[(3) - (5)].string),*(yyvsp[(5) - (5)].paramlist));}
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 216 "parserib.y"
    {RiPixelVariance((yyvsp[(2) - (2)].num));}
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 217 "parserib.y"
    {RiPixelSamples((int)(yyvsp[(2) - (3)].num),(int)(yyvsp[(3) - (3)].num));}
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 218 "parserib.y"
    {RiPixelFilter((yyvsp[(3) - (6)].filter),(yyvsp[(5) - (6)].num),(yyvsp[(6) - (6)].num));}
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 219 "parserib.y"
    {RiExposure((yyvsp[(2) - (3)].num),(yyvsp[(3) - (3)].num));}
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 220 "parserib.y"
    {RiImager((yyvsp[(3) - (5)].string),*(yyvsp[(5) - (5)].paramlist));}
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 221 "parserib.y"
    {RiQuantize((yyvsp[(3) - (8)].string),(int)(yyvsp[(5) - (8)].num),(int)(yyvsp[(6) - (8)].num),(int)(yyvsp[(7) - (8)].num),(yyvsp[(8) - (8)].num));}
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 222 "parserib.y"
    {RiDisplay((yyvsp[(3) - (11)].string),(yyvsp[(6) - (11)].string),(yyvsp[(9) - (11)].string),*(yyvsp[(11) - (11)].paramlist));}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 228 "parserib.y"
    {RiSurface((yyvsp[(3) - (5)].string),*(yyvsp[(5) - (5)].paramlist));}
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 229 "parserib.y"
    {RiShadingRate((yyvsp[(2) - (2)].num));}
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 232 "parserib.y"
    {RiColour(Colour((yyvsp[(3) - (6)].num),(yyvsp[(4) - (6)].num),(yyvsp[(5) - (6)].num)));}
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 233 "parserib.y"
    {RiOpacity(Opacity((yyvsp[(3) - (6)].num),(yyvsp[(4) - (6)].num),(yyvsp[(5) - (6)].num)));}
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 236 "parserib.y"
    {RiLightSource((yyvsp[(3) - (5)].string),*(yyvsp[(5) - (5)].paramlist));}
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 241 "parserib.y"
    {RiSides((int)(yyvsp[(2) - (2)].num));}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 245 "parserib.y"
    {RiDisk((yyvsp[(2) - (4)].num),(yyvsp[(3) - (4)].num),(yyvsp[(4) - (4)].num));}
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 246 "parserib.y"
    {RiSphere((yyvsp[(2) - (5)].num),(yyvsp[(3) - (5)].num),(yyvsp[(4) - (5)].num),(yyvsp[(5) - (5)].num));}
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 247 "parserib.y"
    {RiCylinder((yyvsp[(2) - (5)].num),(yyvsp[(3) - (5)].num),(yyvsp[(4) - (5)].num),(yyvsp[(5) - (5)].num));}
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 248 "parserib.y"
    {RiCone((yyvsp[(2) - (4)].num),(yyvsp[(3) - (4)].num),(yyvsp[(4) - (4)].num));}
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 249 "parserib.y"
    {RiTorus((yyvsp[(2) - (6)].num),(yyvsp[(3) - (6)].num),(yyvsp[(4) - (6)].num),(yyvsp[(5) - (6)].num),(yyvsp[(6) - (6)].num));}
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 250 "parserib.y"
    {RiHyperboloid(Point3((yyvsp[(2) - (8)].num),(yyvsp[(3) - (8)].num),(yyvsp[(4) - (8)].num)),Point3((yyvsp[(5) - (8)].num),(yyvsp[(6) - (8)].num),(yyvsp[(7) - (8)].num)),(yyvsp[(8) - (8)].num));}
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 251 "parserib.y"
    {RiParaboloid((yyvsp[(2) - (5)].num),(yyvsp[(3) - (5)].num),(yyvsp[(4) - (5)].num),(yyvsp[(5) - (5)].num));}
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 254 "parserib.y"
    {(yyval.paramlist)=new ParamList();}
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 255 "parserib.y"
    {(yyval.paramlist)->AddParameter(Parameter((yyvsp[(3) - (4)].string)));}
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 256 "parserib.y"
    {(yyval.paramlist)->AddParameter(Parameter((yyvsp[(2) - (2)].num)));}
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 257 "parserib.y"
    {(yyval.paramlist)->AddParameter(Parameter(Vector3((yyvsp[(3) - (6)].num),(yyvsp[(4) - (6)].num),(yyvsp[(5) - (6)].num))));}
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 260 "parserib.y"
    {RiRotate((yyvsp[(2) - (5)].num),Vector3((yyvsp[(3) - (5)].num),(yyvsp[(4) - (5)].num),(yyvsp[(5) - (5)].num)));}
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 261 "parserib.y"
    {RiScale(Vector3((yyvsp[(2) - (4)].num),(yyvsp[(3) - (4)].num),(yyvsp[(4) - (4)].num)));}
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 262 "parserib.y"
    {RiTranslate(Vector3((yyvsp[(2) - (4)].num),(yyvsp[(3) - (4)].num),(yyvsp[(4) - (4)].num)));}
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 263 "parserib.y"
    {RiDisplacement((yyvsp[(3) - (5)].string),*(yyvsp[(5) - (5)].paramlist));}
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 264 "parserib.y"
    {RiDisplacement();}
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 267 "parserib.y"
    {RiMakeTexture((yyvsp[(3) - (18)].string),(yyvsp[(6) - (18)].string),(yyvsp[(9) - (18)].wrap),(yyvsp[(12) - (18)].wrap),(yyvsp[(15) - (18)].filter),(yyvsp[(17) - (18)].num),(yyvsp[(18) - (18)].num));}
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 270 "parserib.y"
    {(yyval.filter)=RiBoxFilter;}
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 271 "parserib.y"
    {(yyval.filter)=RiGaussianFilter;}
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 274 "parserib.y"
    {(yyval.wrap)=RI_PERIODIC;}
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 275 "parserib.y"
    {(yyval.wrap)=RI_CLAMP;}
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 276 "parserib.y"
    {(yyval.wrap)=RI_BLACK;}
    break;


/* Line 1787 of yacc.c  */
#line 1943 "parserib.cpp"
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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2050 of yacc.c  */
#line 279 "parserib.y"


/******************************************************/
/* Global variables                                   */
/******************************************************/
FILE *fp_rib=NULL;

/******************************************************/
/* yyerror                                            */
/******************************************************/
int yyerror (char *s)
{
  printf ("%s\n", s);
}

/******************************************************/
/* iswhitespace                                       */
/******************************************************/
int iswhitespace(int c)
{
  return (c==' ')||(c=='\n')||(c=='\t');
}

/******************************************************/
/* isnumber                                           */
/******************************************************/
int isnumber(int c)
{
  return (isdigit(c)||(c=='.')||(c=='-'));
}

int myfgetc(FILE *stream)
{
  int c;
  c=fgetc(stream);
  if (!feof(stream)) putchar(c);
  return c;
}

/******************************************************/
/* yylex                                              */
/******************************************************/
int yylex(void)
{
  int c;
  char buffer[32];
  int i=0;
     
  do
  {
    c=myfgetc(fp_rib);
    /* Handle single char types we might see */
    switch(c)
    {
      case '{':
      case '}':
      case ',':
      case '(':
      case ')':
      case '=':
	return c;
	break;
      case '#':
	c=myfgetc(fp_rib);
	while((c!=EOF)&&(c!='\n'))
	{
	  c=myfgetc(fp_rib);
	}
	break;
    }
  }
  while(iswhitespace(c));

  /* Get chars up until white space */
  if (isalpha(c))
  {
    while(isupper(c)||islower(c)||isdigit(c)||(c=='.')){buffer[i++]=c; c=myfgetc(fp_rib);}
    if (!iswhitespace(c)) ungetc(c,fp_rib);
    buffer[i]='\0';
    /* Block begin/end */
    if (!strcmp(buffer,"WorldBegin"))       return WORLDBEGIN;
    if (!strcmp(buffer,"WorldEnd"))         return WORLDEND;
    if (!strcmp(buffer,"FrameBegin"))       return FRAMEBEGIN;
    if (!strcmp(buffer,"FrameEnd"))         return FRAMEEND;
    if (!strcmp(buffer,"AttributeBegin"))   return ATTRIBUTEBEGIN;
    if (!strcmp(buffer,"AttributeEnd"))     return ATTRIBUTEEND;
    if (!strcmp(buffer,"TransformBegin"))   return TRANSFORMBEGIN;
    if (!strcmp(buffer,"TransformEnd"))     return TRANSFORMEND;
    /* Primitives */
    if (!strcmp(buffer,"Disk"))             return DISK;
    if (!strcmp(buffer,"Sphere"))           return SPHERE;
    if (!strcmp(buffer,"Cylinder"))         return CYLINDER;
    if (!strcmp(buffer,"Cone"))             return CONE;
    if (!strcmp(buffer,"Torus"))            return TORUS;
    if (!strcmp(buffer,"Hyperboloid"))      return HYPERBOLOID;
    if (!strcmp(buffer,"Paraboloid"))       return PARABOLOID;
    /* Geometry attributes */
    if (!strcmp(buffer,"Sides"))            return SIDES;
    if (!strcmp(buffer,"Translate"))        return TRANSLATE;
    if (!strcmp(buffer,"Rotate"))           return ROTATE;
    if (!strcmp(buffer,"Scale"))            return SCALE;
    /* Surface attributes */
    if (!strcmp(buffer,"ShadingRate"))      return SHADINGRATE;
    /* Surface and light tokens */
    if (!strcmp(buffer,"Color"))            return COLOR;
    if (!strcmp(buffer,"Opacity"))          return OPACITY;
    if (!strcmp(buffer,"Surface"))          return SURFACE;
    if (!strcmp(buffer,"LightSource"))      return LIGHTSOURCE;
    if (!strcmp(buffer,"Surface"))          return SURFACE;
    if (!strcmp(buffer,"Displacement"))     return DISPLACEMENT;
    /* Camera options */
    if (!strcmp(buffer,"Format"))           return FORMAT;
    if (!strcmp(buffer,"CropWindow"))       return CROPWINDOW;
    if (!strcmp(buffer,"ScreenWindow"))     return SCREENWINDOW;
    if (!strcmp(buffer,"FrameAspectRatio")) return FRAMEASPECTRATIO;
    if (!strcmp(buffer,"Projection"))       return PROJECTION;
    /* Display options */
    if (!strcmp(buffer,"PixelVariance"))    return PIXELVARIANCE;
    if (!strcmp(buffer,"PixelSamples"))     return PIXELSAMPLES;
    if (!strcmp(buffer,"PixelFilter"))      return PIXELFILTER;
    if (!strcmp(buffer,"Exposure"))         return EXPOSURE;
    if (!strcmp(buffer,"Imager"))           return IMAGER;
    if (!strcmp(buffer,"Quantize"))         return QUANTIZE;
    if (!strcmp(buffer,"Display"))          return DISPLAY;
    /* Additional options */
    if (!strcmp(buffer,"Option"))           return OPTION;
    /* Filter types */
    if (!strcmp(buffer,"box"))              return BOX;
    if (!strcmp(buffer,"gaussian"))         return GAUSSIAN;
    /* Making functions */
    if (!strcmp(buffer,"MakeTexture"))      return MAKETEXTURE;
    /* Wrap types */
    if (!strcmp(buffer,"periodic"))         return WRAPPERIODIC;
    if (!strcmp(buffer,"black"))            return WRAPBLACK;
    if (!strcmp(buffer,"clamp"))            return WRAPCLAMP;

    yylval.string=(char*)calloc(strlen(buffer)+1,1);
    strcpy(yylval.string,buffer);
    return NAME;
  }
  else
  {
    if (isnumber(c))
    {
      while(isnumber(c)){buffer[i++]=c; c=myfgetc(fp_rib);}
      if (!iswhitespace(c)) ungetc(c,fp_rib);
      buffer[i]='\0';
      yylval.num=atof(buffer);
      return NUM;
    }
  }
  if (c==EOF) return 0;
  return c;
}

/******************************************************/
/* ParseRIB                                           */
/******************************************************/
void ParseRIB(char *filename)
{
  fp_rib=fopen(filename,"r");
  int success;

  if (fp_rib)
  {
#ifdef YYDEBUG
    // yydebug=1;
#endif
    RiBegin("");
    success=yyparse();
    fclose(fp_rib);
    RiEnd();
  }
  else
    fprintf(stderr,"Cannot open RIB file `%s'\n",filename);
}
