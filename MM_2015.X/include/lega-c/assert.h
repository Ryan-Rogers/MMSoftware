/* assert.h standard header */
#ifndef _YVALS
 #include <yvals.h>
#endif /* _YVALS */
_C_STD_BEGIN

#undef assert	/* remove existing definition */

#ifdef NDEBUG
 #define assert(test)	((void)0)
#else /* NDEBUG */
_C_LIB_DECL
void _Assert(const char *, const char *);
_END_C_LIB_DECL

		/* MACROS */
 #define _FUNNAME	0

  #define _STRIZE(x)	_VAL(x)
  #define _VAL(x)	#x

  #ifdef _VERBOSE_DEBUGGING
   #include <stdio.h>
   #define assert(test)	((test) ? (void)_CSTD fprintf(stderr, \
	__FILE__ ":" _STRIZE(__LINE__) " " #test " -- OK\n") \
	: _CSTD _Assert(__FILE__ ":" _STRIZE(__LINE__) " " #test, \
		_FUNNAME))
  #else /* _VERBOSE_DEBUGGING */
   #define assert(test)	((test) ? (void)0 \
	: _CSTD _Assert(__FILE__ ":" _STRIZE(__LINE__) " " #test, \
		_FUNNAME))
  #endif /* _VERBOSE_DEBUGGING */
 #endif /* NDEBUG */
_C_STD_END

/*
 * Copyright (c) 1992-2002 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V3.13:1332 */
