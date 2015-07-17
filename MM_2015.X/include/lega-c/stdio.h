/* stdio.h standard header */
#define __C30_LEGACY_LIBC__
#ifndef _STDIO
#define _STDIO
#ifndef _YVALS
 #include <yvals.h>
#endif /* _YVALS */
_C_STD_BEGIN

		/* macros */
#ifndef NULL
 #define NULL	 	_NULL
#endif /* NULL */

#define _IOFBF		0
#define _IOLBF		1
#define _IONBF		2

#define BUFSIZ		512
#define EOF			(-1)
#define FILENAME_MAX	_FNAMAX
#define FOPEN_MAX		_FOPMAX
#define L_tmpnam		_TNAMAX
#define TMP_MAX			32

#define SEEK_SET	0
#define SEEK_CUR	1
#define SEEK_END	2

#define stdin		(&_CSTD _Stdin)
#define stdout		(&_CSTD _Stdout)
#define stderr		(&_CSTD _Stderr)

 #if _MULTI_THREAD
  #define _Lockfile(str)	_Lockfilelock(str)
  #define _Unlockfile(str)	_Unlockfilelock(str)

 #else /* _MULTI_THREAD */
  #define _Lockfile(x)		(void)0
  #define _Unlockfile(x)	(void)0
 #endif /* _MULTI_THREAD */

		/* type definitions */
 #if !defined(_SIZE_T) && !defined(_SIZET) \
	&& !defined(_BSD_SIZE_T_DEFINED_)
  #define _SIZE_T
  #define _SIZET
  #define _BSD_SIZE_T_DEFINED_
  #define _STD_USING_SIZE_T
typedef _Sizet size_t;
 #endif /* !defined(_SIZE_T) etc. */

typedef _Fpost fpos_t;

#ifndef _FD_TYPE
 #define _FD_TYPE	signed char
#endif	/* _FD_TYPE */

typedef struct _Filet
	{	/* file control information */
	unsigned short _Mode;
	unsigned char _Lockno;
	_FD_TYPE _Handle;

	unsigned char *_Buf, *_Bend, *_Next;
	unsigned char *_Rend, *_Wend, *_Rback;

	_Wchart *_WRback, _WBack[2];
	unsigned char *_Rsave, *_WRend, *_WWend;

	struct _Mbstatet _Wstate;
	char *_Tmpnam;
	unsigned char _Back[_MBMAX * 2], _Cbuf;
	} FILE;

		/* declarations */
_C_LIB_DECL
extern FILE _Stdin, _Stdout, _Stderr;

void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE *, fpos_t *);
char * fgets(char *, int, FILE *);
FILE * fopen(const char *, const char *);
int fprintf(FILE *, const char *, ...);
int fputc(int, FILE *);
int fputs(const char *, FILE *);
size_t fread(void *, size_t, size_t, FILE *);
FILE * freopen(const char *, const char *,
	FILE *);
int fscanf(FILE *, const char *, ...);
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void *, size_t, size_t, FILE *);
char * gets(char *);
void perror(const char *);
int printf(const char *, ...);
int puts(const char *);
int remove(const char *);
int rename(const char *, const char *);
void rewind(FILE *);
int scanf(const char *, ...);
void setbuf(FILE *, char *);
int setvbuf(FILE *, char *, int, size_t);
int sprintf(char *, const char *, ...);
int sscanf(const char *, const char *, ...);
FILE * tmpfile(void); char * tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE *, const char *, _Va_list);
int vprintf(const char *, _Va_list);
int vsprintf(char *, const char *, _Va_list);

 #if _ADDED_C_LIB
FILE * fdopen(_FD_TYPE, const char *);
_FD_TYPE fileno(FILE *);
 #endif /* _ADDED_C_LIB */

long _Fgpos(FILE *, fpos_t *);
int _Flocale(FILE *, const char *, int);
void _Fsetlocale(FILE *, int);
int _Fspos(FILE *, const fpos_t *, long, int);

 #if _MULTI_THREAD
void _Lockfilelock(_Filet *);
void _Unlockfilelock(_Filet *);
 #endif /* _MULTI_THREAD */

extern FILE *_Files[FOPEN_MAX];
 #if _ADDED_C_LIB
int snprintf(char *, size_t, const char *, ...);
int vsnprintf(char *, size_t, const char *, _Va_list);
 #endif /* _ADDED_C_LIB */
_END_C_LIB_DECL

 #if _MULTI_THREAD && _FILE_OP_LOCKS
		/* declarations only */
_C_LIB_DECL
int getc(FILE *);
int getchar(void);
int putc(int, FILE *);
int putchar(int);
_END_C_LIB_DECL

 #else /* _MULTI_THREAD && _FILE_OP_LOCKS */
  #if defined(__cplusplus) && !defined(_NO_CPP_INLINES)
		// INLINES, for C++
inline int getc(FILE *_Str)
	{	// get a character
	return ((_Str->_Next < _Str->_Rend
		? *_Str->_Next++ : fgetc(_Str))); }

inline int getchar()
	{	// get a character from stdin
	return ((_Files[0]->_Next < _Files[0]->_Rend
	? *_Files[0]->_Next++ : fgetc(_Files[0]))); }

inline int putc(int _C, FILE *_Str)
	{	// put a character
	return ((_Str->_Next < _Str->_Wend
		? (*_Str->_Next++ = _C) : fputc(_C, _Str))); }

inline int putchar(int _C)
	{	// put a character to stdout
	return ((_Files[1]->_Next < _Files[1]->_Wend
	? (*_Files[1]->_Next++ = _C) : fputc(_C, _Files[1]))); }

  #else /* defined(__cplusplus) && !defined(_NO_CPP_INLINES) */
		/* declarations and macro overrides, for C */
_C_LIB_DECL
int getc(FILE *);
int getchar(void);
int putc(int, FILE *);
int putchar(int);
_END_C_LIB_DECL

 #define getc(str)	((str)->_Next < (str)->_Rend \
	? *(str)->_Next++ : (fgetc)(str))
 #define getchar()	(_Files[0]->_Next < _Files[0]->_Rend \
	? *_Files[0]->_Next++ : (fgetc)(_Files[0]))
 #define putc(c, str)	((str)->_Next < (str)->_Wend \
	? (*(str)->_Next++ = c) : (fputc)(c, str))
 #define putchar(c)	(_Files[1]->_Next < _Files[1]->_Wend \
	? (*_Files[1]->_Next++ = c) : (fputc)(c, _Files[1]))
  #endif /* defined(__cplusplus) && !defined(_NO_CPP_INLINES) */
 #endif /* _MULTI_THREAD && _FILE_OP_LOCKS */
_C_STD_END
#endif /* _STDIO */

 #if defined(_STD_USING) && defined(__cplusplus)
  #ifdef _STD_USING_SIZE_T
using _CSTD size_t;
  #endif /* _STD_USING_SIZE_T */

using _CSTD fpos_t; using _CSTD FILE;
using _CSTD clearerr; using _CSTD fclose; using _CSTD feof;
using _CSTD ferror; using _CSTD fflush; using _CSTD fgetc;
using _CSTD fgetpos; using _CSTD fgets; using _CSTD fopen;
using _CSTD fprintf; using _CSTD fputc; using _CSTD fputs;
using _CSTD fread; using _CSTD freopen; using _CSTD fscanf;
using _CSTD fseek; using _CSTD fsetpos; using _CSTD ftell;
using _CSTD fwrite; using _CSTD getc; using _CSTD getchar;
using _CSTD gets; using _CSTD perror;
using _CSTD putc; using _CSTD putchar;
using _CSTD printf; using _CSTD puts; using _CSTD remove;
using _CSTD rename; using _CSTD rewind; using _CSTD scanf;
using _CSTD setbuf; using _CSTD setvbuf; using _CSTD sprintf;
using _CSTD sscanf; using _CSTD tmpfile; using _CSTD tmpnam;
using _CSTD ungetc; using _CSTD vfprintf; using _CSTD vprintf;
using _CSTD vsprintf;
 #if _ADDED_C_LIB
using _CSTD fdopen; using _CSTD fileno;
using _CSTD snprintf; using _CSTD vsnprintf;
 #endif /* _ADDED_C_LIB */
 #endif /* defined(_STD_USING) && defined(__cplusplus) */

/*
 * Copyright (c) 1992-2002 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V3.13:1332 */
