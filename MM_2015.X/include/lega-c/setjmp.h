/* setjmp.h standard header */
#ifndef _SETJMP
#define _SETJMP
#ifndef _YVALS
 #include <yvals.h>
#endif /* _YVALS */
_C_STD_BEGIN

extern int setjmp(int *);

		/* type definitions */
typedef int jmp_buf[_NSETJMP];

		/* declarations */
_C_LIB_DECL
void longjmp(jmp_buf, int);
_END_C_LIB_DECL
_C_STD_END
#endif /* _SETJMP */

#ifdef _STD_USING
using _CSTD jmp_buf; using _CSTD longjmp;
#endif /* _STD_USING */

/*
 * Copyright (c) 1992-2002 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V3.13:1332 */
