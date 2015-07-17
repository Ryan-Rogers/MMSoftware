/* string.h standard header */
#ifndef _STRING
#define _STRING
#ifndef _YVALS
 #include <yvals.h>
#endif /* _YVALS */
_C_STD_BEGIN

		/* macros */
#ifndef NULL
 #define NULL	_NULL
#endif /* NULL */

		/* type definitions */
 #if !defined(_SIZE_T) && !defined(_SIZET) \
	&& !defined(_BSD_SIZE_T_DEFINED_)
  #define _SIZE_T
  #define _SIZET
  #define _BSD_SIZE_T_DEFINED_
  #define _STD_USING_SIZE_T
typedef _Sizet size_t;
 #endif /* !defined(_SIZE_T) etc. */

		/* declarations */
_C_LIB_DECL
int memcmp(const void *, const void *, size_t);
void * memcpy(void *, const void *, size_t);
void * memmove(void *, const void *, size_t);
void * memset(void *, int, size_t);
char * strcat(char *, const char *);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char * strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char * strerror(int);
size_t strlen(const char *);
char * strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char * strncpy(char *, const char *, size_t);
size_t strspn(const char *, const char *);
char * strtok(char *, const char *);
size_t strxfrm(char *, const char *, size_t);

/* locales are not supported */
#define strcoll strcmp

 #if _ADDED_C_LIB
char *strdup(const char *);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);
char *strtok_r(char *, const char *, char **);
 #endif /* _ADDED_C_LIB */
_END_C_LIB_DECL

 #if defined(__cplusplus) && !defined(_NO_CPP_INLINES)
		// INLINES AND OVERLOADS, for C++
 #define _Const_return const

_C_LIB_DECL
const void * memchr(const void *, int, size_t);
const char * strchr(const char *, int);
const char * strpbrk(const char *, const char *);
const char * strrchr(const char *, int);
const char * strstr(const char *, const char *);
_END_C_LIB_DECL

inline void * memchr(void *_S, int _C, size_t _N)
	{	// call with const first argument
	return ((void *)_CSTD memchr((const void *)_S, _C, _N)); }

inline char * strchr(char *_S, int _C)
	{	// call with const first argument
	return ((char *)_CSTD strchr((const char *)_S, _C)); }

inline char * strpbrk(char *_S, const char *_P)
	{	// call with const first argument
	return ((char *)_CSTD strpbrk((const char *)_S, _P)); }

inline char * strrchr(char *_S, int _C)
	{	// call with const first argument
	return ((char *)_CSTD strrchr((const char *)_S, _C)); }

inline char * strstr(char *_S, const char *_P)
	{	// call with const first argument
	return ((char *)_CSTD strstr((const char *)_S, _P)); }

 #else /* defined(__cplusplus) && !defined(_NO_CPP_INLINES)*/
_C_LIB_DECL
 #define _Const_return

void * memchr(const void *, int, size_t);
char * strchr(const char *, int);
char * strpbrk(const char *, const char *);
char * strrchr(const char *, int);
char * strstr(const char *, const char *);
_END_C_LIB_DECL
 #endif /* defined(__cplusplus) && !defined(_NO_CPP_INLINES) */
_C_STD_END
#endif /* _STRING */

 #if defined(_STD_USING) && defined(__cplusplus)
  #ifdef _STD_USING_SIZE_T
using _CSTD size_t;
  #endif /* _STD_USING_SIZE_T */

using _CSTD memchr; using _CSTD memcmp;
using _CSTD memcpy; using _CSTD memmove; using _CSTD memset;
using _CSTD strcat; using _CSTD strchr; using _CSTD strcmp;
using _CSTD strcoll; using _CSTD strcpy; using _CSTD strcspn;
using _CSTD strerror; using _CSTD strlen; using _CSTD strncat;
using _CSTD strncmp; using _CSTD strncpy; using _CSTD strpbrk;
using _CSTD strrchr; using _CSTD strspn; using _CSTD strstr;
using _CSTD strtok; using _CSTD strxfrm;
 #endif /* defined(_STD_USING) && defined(__cplusplus) */

/*
 * Copyright (c) 1992-2002 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V3.13:1332 */
