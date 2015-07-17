/* stdlib.h standard header */
#ifndef _STDLIB
#define _STDLIB
#ifndef _YVALS
 #include <yvals.h>
#endif /* _YVALS */
_C_STD_BEGIN

		/* MACROS */
#ifndef NULL
 #define NULL	_NULL
#endif /* NULL */

#define EXIT_FAILURE	_EXFAIL
#define EXIT_SUCCESS	0

  #define MB_CUR_MAX    _MBMAX

 #if _ILONG
  #define RAND_MAX	0x3fffffff
 #else /* _ILONG */
  #define RAND_MAX	0x7fff
 #endif /* _ILONG */

 #ifndef _NO_RETURN
  #define _NO_RETURN
 #endif /* _NO_RETURN */

		/* TYPE DEFINITIONS */
 #if !defined(_SIZE_T) && !defined(_SIZET) \
	&& !defined(_BSD_SIZE_T_DEFINED_)
  #define _SIZE_T
  #define _SIZET
  #define _BSD_SIZE_T_DEFINED_
  #define _STD_USING_SIZE_T
typedef _Sizet size_t;
 #endif /* !defined(_SIZE_T) etc. */

#ifndef _WCHART
 #define _WCHART
typedef _Wchart wchar_t;
#endif /* _WCHART */

typedef struct
	{	/* result of int divide */
	int quot;
	int rem;
	} div_t;

typedef struct
	{	/* result of long divide */
	long quot;
	long rem;
	} ldiv_t;

 #ifndef _LLDIV_T
typedef struct
	{	/* result of long long divide */
	_Longlong quot;
	_Longlong rem;
	} _Lldiv_t;
 #endif /* _LLDIV_T */

		/* DECLARATIONS */
_EXTERN_C /* low-level functions */
void _Exit(int) _NO_RETURN;	/* added with C99 */
void exit(int) _NO_RETURN;
char * getenv(const char *);
int system(const char *);
_END_EXTERN_C

_C_LIB_DECL
void abort(void) _NO_RETURN;
int abs(int);
void * calloc(size_t, size_t);
div_t div(int, int);
void free(void *);
long labs(long);
ldiv_t ldiv(long, long);
void * malloc(size_t);
int mblen(const char *, size_t);
size_t mbstowcs(wchar_t *, const char *, size_t);
int mbtowc(wchar_t *, const char *, size_t);
int rand(void);
void srand(unsigned int);
void * realloc(void *, size_t);
long strtol(const char *, char **, int);
size_t wcstombs(char *, const wchar_t *, size_t);
int wctomb(char *, wchar_t);

 #if _ADDED_C_LIB
int getopt(int, char * const *, const char *);
char *mktemp(char *);
int putenv(char *);
int rand_r(unsigned *);
char *tempnam(const char *, const char *);

extern char *optarg;
extern int optind, opterr, optopt;
 #endif /* _ADDED_C_LIB */

unsigned long _Stoul(const char *, char **, int);
float _Stof(const char *, char **, long);
#if __FLT_MANT_DIG__ == __DBL_MANT_DIG__
/* float _Stod(const char *, char **, long); */
#define _Stod _Stof
#else
double _Stod(const char *, char **, long);
#endif
long double _Stold(const char *, char **, long);
_Longlong _Stoll(const char *, char **, int);
_ULonglong _Stoull(const char *, char **, int);

extern size_t _Getmbcurmax(void);
_END_C_LIB_DECL

 #if defined(__cplusplus) && !defined(_NO_CPP_INLINES)
_EXTERN_C
typedef void _Atexfun(void);
typedef int _Cmpfun(const void *, const void *);

int atexit(void (*)(void));
void * bsearch(const void *, const void *, size_t, size_t, _Cmpfun *);
void qsort(void *, size_t, size_t, _Cmpfun *);
_END_EXTERN_C
  #if _HAS_STRICT_LINKAGE

typedef int _Cmpfun2(const void *, const void *);

inline int atexit(void (*_Pfn)(void))
	{	// register a function to call at exit
	return (atexit((_Atexfun *)_Pfn)); }

inline void * bsearch(const void *_Key, const void *_Base,
	size_t _Nelem, size_t _Size, _Cmpfun2 *_Cmp)
	{	// search by binary chop
	return (bsearch(_Key, _Base, _Nelem, _Size, (_Cmpfun *)_Cmp)); }

inline void qsort(void *_Base,
	size_t _Nelem, size_t _Size, _Cmpfun2 *_Cmp)
	{	// sort
	qsort(_Base, _Nelem, _Size, (_Cmpfun *)_Cmp); }
  #endif /* _HAS_STRICT_LINKAGE */

		// INLINES, FOR C++
_C_LIB_DECL
inline double atof(const char *_S)
	{	// convert string to double
	return (_Stod(_S, 0, 0)); }

inline int atoi(const char *_S)
	{	// convert string to int
	return ((int)_Stoul(_S, 0, 10)); }

inline long atol(const char *_S)
	{	// convert string to long
	return ((long)_Stoul(_S, 0, 10)); }

inline double strtod(const char *_S,
	char **_Endptr)
	{	// convert string to double, with checking
	return (_Stod(_S, _Endptr, 0)); }

inline unsigned long strtoul(const char *_S,
	char **_Endptr, int _Base)
	{	// convert string to unsigned long, with checking
	return (_Stoul(_S, _Endptr, _Base)); }

		// OVERLOADS, FOR C++
  #if !defined(_LLDIV_T) || defined(_LONGLONG)
inline long abs(long _X)
	{	// compute abs
	return (labs(_X)); }

inline ldiv_t div(long _X, long _Y)
	{	// compute quotient and remainder
	return (ldiv(_X, _Y)); }
  #endif /* !defined(_LLDIV_T) || defined(_LONGLONG) */

  #if !defined(_LLDIV_T) && defined(_LONGLONG)
inline _Longlong abs(_Longlong _X)
	{	// compute abs
	return (llabs(_X)); }

inline _Lldiv_t div(_Longlong _X, _Longlong _Y)
	{	// compute quotient and remainder
	return (lldiv(_X, _Y)); }
  #endif /* !defined(_LLDIV_T) && defined(_LONGLONG) */

 #else /* defined(__cplusplus) && !defined(_NO_CPP_INLINES) */
_C_LIB_DECL
		/* DECLARATIONS AND MACRO OVERRIDES, FOR C */
typedef int _Cmpfun(const void *, const void *);

int atexit(void (*)(void));
void * bsearch(const void *, const void *, size_t, size_t, _Cmpfun *);
void qsort(void *, size_t, size_t, _Cmpfun *);

double atof(const char *);
double strtod(const char *, char **);
int atoi(const char *);
long atol(const char *);
unsigned long strtoul(const char *, char **, int);

#define atoi(s)		(int)_Stoul(s, 0, 10)
#define atol(s)		(long)_Stoul(s, 0, 10)
#if __FLT_MANT_DIG__ == __DBL_MANT_DIG__
#define atof(s)		_Stod(s, 0, 0)
#define strtod(s, endptr)	_Stod(s, endptr, 0)
#else
#define atof(s)		_Stold(s, 0, 0)
#define strtod(s, endptr)	_Stold(s, endptr, 0)
#endif
#define strtoul(s, endptr, base)	_Stoul(s, endptr, base)

_END_C_LIB_DECL
 #endif /* defined(__cplusplus) && !defined(_NO_CPP_INLINES) */


 #ifndef _LLDIV_T
  #define _LLDIV_T
 #endif /* _LLDIV_T */
_C_STD_END
#endif /* _STDLIB */

 #if defined(_STD_USING) && defined(__cplusplus)
  #ifdef _STD_USING_SIZE_T
using _CSTD size_t;
  #endif /* _STD_USING_SIZE_T */

using _CSTD div_t; using _CSTD ldiv_t;

using _CSTD abort; using _CSTD abs; using _CSTD atexit;
using _CSTD atof; using _CSTD atoi; using _CSTD atol;
using _CSTD bsearch; using _CSTD calloc; using _CSTD div;
using _CSTD exit; using _CSTD free; using _CSTD getenv;
using _CSTD labs; using _CSTD ldiv; using _CSTD malloc;
using _CSTD mblen; using _CSTD mbstowcs; using _CSTD mbtowc;
using _CSTD qsort; using _CSTD rand; using _CSTD realloc;
using _CSTD srand; using _CSTD strtod; using _CSTD strtol;
using _CSTD strtoul; using _CSTD system;
using _CSTD wcstombs; using _CSTD wctomb;
 #endif /* defined(_STD_USING) && defined(__cplusplus) */

/*
 * Copyright (c) 1992-2002 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V3.13:1332 */
