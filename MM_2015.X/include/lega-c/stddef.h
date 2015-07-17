/* stddef.h standard header */
#ifndef _STDDEF
#define _STDDEF
#ifndef _YVALS
 #include <yvals.h>
#endif /* _YMATH */
_C_STD_BEGIN

		/* macros */
#ifndef NULL
 #define NULL	_NULL
#endif /* NULL */

#ifndef offsetof
#define offsetof(T, member)	((_CSTD _Sizet)&(((T *)0)->member))
#endif /* offsetof */

		/* type definitions */
 #if !defined(_PTRDIFF_T) && !defined(_PTRDIFFT)
  #define _PTRDIFF_T
  #define _PTRDIFFT
  #define _STD_USING_PTRDIFF_T
typedef _Ptrdifft ptrdiff_t;
 #endif /* !defined(_PTRDIFF_T) && !defined(_PTRDIFFT) */

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
_C_STD_END
#endif /* _STDDEF */

 #if defined(_STD_USING) && defined(__cplusplus)
  #ifdef _STD_USING_PTRDIFF_T
using _CSTD ptrdiff_t;
  #endif /* _STD_USING_PTRDIFF_T */

  #ifdef _STD_USING_SIZE_T
using _CSTD size_t;
  #endif /* _STD_USING_SIZE_T */
 #endif /* defined(_STD_USING) && defined(__cplusplus) */

/*
 * Copyright (c) 1992-2002 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V3.13:1332 */
