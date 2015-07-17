/* signal.h standard header */
#ifndef _SIGNAL
#define _SIGNAL
#ifndef _YVALS
 #include <yvals.h>
#endif /* _YVALS */
_C_STD_BEGIN

		/* SIGNAL CODES */
#define SIGABRT	1
#define SIGINT	2
#define SIGILL	3
#define SIGFPE	4
#define SIGSEGV	5
#define SIGTERM	6
#define _NSIG	6

		/* SIGNAL RETURN VALUES */
#define SIG_DFL	((_CSTD _Sigfun *)0)
#define SIG_ERR	((_CSTD _Sigfun *)-1)
#define SIG_IGN	((_CSTD _Sigfun *)1)

_EXTERN_C
		/* TYPE DEFINITIONS */
 #if !defined(__APPLE__)
typedef int sig_atomic_t;

 #elif !defined(_BSD_MACHINE_SIGNAL_H_)
  #define _BSD_MACHINE_SIGNAL_H_

typedef int sig_atomic_t;

struct sigcontext {	/* define jump buffer */
  #if defined(__ppc__)
	int _Ints[5];
	void *_Ptr;
  #elif defined(__i386__)
	int _Ints[18];
  #else	/* unknown machine type */
   #error unknown machine type
  #endif /* machine type */
	};
 #endif /* !defined(__APPLE__) */

typedef void _Sigfun(int);

		/* LOW-LEVEL FUNCTIONS */
_Sigfun * signal(int, _Sigfun *);
_END_EXTERN_C

_C_LIB_DECL		/* DECLARATIONS */
int raise(int);
_END_C_LIB_DECL
_C_STD_END
#endif /* _SIGNAL */

#ifdef _STD_USING
using _CSTD sig_atomic_t; using _CSTD raise; using _CSTD signal;
#endif /* _STD_USING */

/*
 * Copyright (c) 1992-2002 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V3.13:1332 */
