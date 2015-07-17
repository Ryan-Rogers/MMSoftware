/* stdarg.h standard header */
#ifndef _STDARG
#define _STDARG
#ifndef _YVALS
 #include <yvals.h>
#endif /* _YVALS */
_C_STD_BEGIN

		/* type definitions */
/* typedef _Va_list va_list; */

		/* macros */
#define va_arg(AP, TYPE)	\
	(AP = (void *) ((char *) (AP) - __va_rounded_size (TYPE)), \
        *((TYPE *) (void *) ((char *) (AP) )))
#define va_copy(apd, aps)	(void)((apd) = (aps))
#define va_end(ap)		(void)0
#define va_start(AP, LASTARG) AP=(void *) __builtin_next_arg (LASTARG)
#define _Bnd(X, bnd)	(sizeof (X) + (bnd) & ~(bnd))
#define __va_rounded_size(TYPE) \
        (((sizeof (TYPE) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))

 #if 0 /* older version of macros ... */
  #define va_start(ap, A) _Va_start(ap, A)
  #define va_copy(apd, aps)	_Va_copy(apd, aps)
  #define va_arg(ap, T) _Va_arg(ap, T)
  #define va_end(ap)		(void)0
 #endif /* older version of macros ... */
_C_STD_END
#endif /* _STDARG */

#ifdef _STD_USING
using _CSTD va_list;
#endif /* _STD_USING */

/*
 * Copyright (c) 1992-2002 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V3.13:1332 */
