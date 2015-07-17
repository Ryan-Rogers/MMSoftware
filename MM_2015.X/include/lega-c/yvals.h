/* yvals.h values header for C/C++ library on VC++ */
#ifndef _YVALS
#define _YVALS

#define _CPPLIB_VER	313

		/* NAMING PROPERTIES */
/* #define _STD_LINKAGE	defines C names as extern "C++" */
/* #define _STD_USING	exports C names from std to global, else reversed */
#define _HAS_STRICT_LINKAGE	!__COMO__	/* extern "C" in function type */
#define _USE_EXISTING_SYSTEM_NAMES	1 /* _Open => open etc. */
#define _WIN32_C_LIB	0

		/* THREAD AND LOCALE CONTROL */
#ifndef _MULTI_THREAD
 #define _MULTI_THREAD	0	/* 0 for no locks, 1 for multithreaded library */
#endif /* _MULTI_THREAD */
#define _GLOBAL_LOCALE	0	/* 0 for per-thread locales, 1 for shared */
#define _FILE_OP_LOCKS	0	/* 0 for no file atomic locks, 1 for atomic */

		/* THREAD-LOCAL STORAGE */
#define _COMPILER_TLS	0	/* 1 if compiler supports TLS directly */
#define _TLS_QUAL	/* TLS qualifier, such as __declspec(thread), if any */


		/* NAMESPACE CONTROL */
 #if defined(__cplusplus)
  #define _STD_BEGIN	namespace std {
  #define _STD_END		}
  #define _STD	std::

  #ifdef _STD_USING
   #define _C_STD_BEGIN	namespace std {	/* only if *.c compiled as C++ */
   #define _C_STD_END	}
   #define _CSTD	std::

  #else /* _STD_USING */
   #define _GLOBAL_USING	/* *.h in global namespace, c* imports to std */

   #define _C_STD_BEGIN
   #define _C_STD_END
   #define _CSTD	::
  #endif /* _STD_USING */

  #define _C_LIB_DECL		extern "C" {	/* C has extern "C" linkage */
  #define _END_C_LIB_DECL	}
  #define _EXTERN_C			extern "C" {
  #define _END_EXTERN_C		}

 #else /* __cplusplus */
  #define _STD_BEGIN
  #define _STD_END
  #define _STD

  #define _C_STD_BEGIN
  #define _C_STD_END
  #define _CSTD

  #define _C_LIB_DECL
  #define _END_C_LIB_DECL
  #define _EXTERN_C
  #define _END_EXTERN_C
 #endif /* __cplusplus */


 #ifdef __cplusplus
_STD_BEGIN
typedef bool _Bool;
_STD_END
 #endif /* __cplusplus */

		/* VC++ COMPILER PARAMETERS */
#define _CRTIMP
#define _CDECL

#define fflush	_DNKfflush	/* kludge for VC++ */

 #ifndef _VA_LIST_DEFINED
  #ifdef  _M_ALPHA
typedef struct
	{	/* define va_list a la C */
	char *a0;
	int offset;
	} va_list;
  #else /* _M_ALPHA */
typedef void *va_list;
  #endif /* _M_ALPHA */
  #define _VA_LIST_DEFINED
 #endif /* _VA_LIST_DEFINED */

 #ifdef __cplusplus
  #define _LONGLONG	long long
  #define _ULONGLONG	unsigned long long

 #else /* __cplusplus */
  #define _LONGLONG	long long
  #define _ULONGLONG	unsigned long long
 #endif /* __cplusplus */
  #define _LLONG_MAX	0x7fffffffffffffffLL
  #define _ULLONG_MAX	0xffffffffffffffffLL

_C_STD_BEGIN
		/* errno PROPERTIES */
#define _EDOM	33
#define _ERANGE	34
#define _EFPOS	35
#define _EILSEQ	36
#define _EFOPEN 37
#define _ERRMAX 38

		/* FLOATING-POINT PROPERTIES */
#define _DBIAS	0x3fe	/* IEEE format double and float */
#define _DOFF	4
#define _FBIAS	0x7e
#define _FOFF	7
#define _FRND	1

#define _D0		3		/* 0 if big endian */
#define _DLONG	0		/* 1 if 80-bit long double */
#define _LBIAS	0x3fe	/* 0x3ffe if 80-bit long double */
#define _LOFF	4		/* 15 if 80-bit long double */
#define _FPP_TYPE	1	/* 80287/Pentium FPP */

		/* INTEGER PROPERTIES */
#define _BITS_BYTE	8
#define _C2			1	/* 0 if not 2's complement */
#define _CSIGN		1	/* 0 if char is not signed */
#define _MBMAX		1	/* MB_LEN_MAX */

#define _MAX_EXP_DIG	8	/* for parsing numerics */
#define _MAX_INT_DIG	32
#define _MAX_SIG_DIG	36

 #ifdef _LONGLONG
typedef _LONGLONG _Longlong;
typedef _ULONGLONG _ULonglong;
 #else /* _LONGLONG */
typedef long _Longlong;
typedef unsigned long _ULonglong;
 #define _LLONG_MAX		0x7fffffff
 #define _ULLONG_MAX	0xffffffff
 #endif /* _LONGLONG */

 #ifdef __cplusplus
 #define _WCHART
typedef wchar_t _Wchart;
typedef wchar_t _Wintt;
 #else /* __cplusplus */
typedef __WCHAR_TYPE__ _Wchart;
typedef __WINT_TYPE__ _Wintt;
 #endif /* __cplusplus */

#define _WCMIN		0
#define _WCMAX		0xff

#define _ILONG		0	/* 0 if 16-bit int */

		/* POINTER PROPERTIES */
#define _NULL		0	/* 0L if pointer same as long */

typedef __PTRDIFF_TYPE__ _Ptrdifft;
typedef __SIZE_TYPE__ _Sizet;

		/* setjmp PROPERTIES */
#define	_NSETJMP	(16+2)	/* 16 register + 32-bit return address */
int _Setjmp(int *);

		/* stdarg PROPERTIES */
typedef va_list _Va_list;

		/* stdlib PROPERTIES */
#define _EXFAIL	1	/* EXIT_FAILURE */

_EXTERN_C
void _Atexit(void (*)(void));
_END_EXTERN_C

typedef struct _Mbstatet
	{	/* state of a multibyte translation */
	_Wchart _Wchar;
	unsigned short _Byte, _State;
	} _Mbstatet;

		/* stdio PROPERTIES */
#define _FNAMAX	260
#define _FOPMAX	8
#define _TNAMAX	16

#define _Filet	FILE

typedef struct _Fpost
	{	/* file position */
	long _Off;	/* can be system dependent */
	_Mbstatet _Wstate;
	} _Fpost;

#ifndef _FPOSOFF
 #define _FPOSOFF(fp)	((fp)._Off)
#endif /* _FPOSOFF */

#define _FD_VALID(fd)	(0 <= (fd))	/* fd is signed integer */
#define _FD_INVALID		(-1)

		/* STORAGE ALIGNMENT PROPERTIES */
#define _AUPBND	1U /* even-byte boundaries (2^^1) */
#define _ADNBND	1U
#define _MEMBND	1U

		/* time PROPERTIES */
#define _CPS	1
#define _TBIAS	((70 * 365LU + 17) * 86400)
_C_STD_END

		/* MULTITHREAD PROPERTIES */
 #if _MULTI_THREAD
_C_STD_BEGIN
_EXTERN_C
void _Locksyslock(unsigned int);
void _Unlocksyslock(unsigned int);
_END_EXTERN_C
_C_STD_END

 #else /* _MULTI_THREAD */
  #define _Locksyslock(x)	(void)0
  #define _Unlocksyslock(x)	(void)0
 #endif /* _MULTI_THREAD */

		/* LOCK MACROS */
 #define _LOCK_LOCALE	0
 #define _LOCK_MALLOC	1
 #define _LOCK_STREAM	2
 #define _MAX_LOCK		3	/* one more than highest lock number */

 #ifdef __cplusplus
_STD_BEGIN
		// CLASS _Lockit
class _Lockit
	{	// lock while object in existence -- MUST NEST
public:
  #if _MULTI_THREAD
   #define _LOCKIT(x)	lockit x
	explicit _Lockit()
		: _Locktype(0)
		{	// set default lock
		_Locksyslock(_Locktype); }

	explicit _Lockit(int _Type)
		: _Locktype(_Type)
		{	// set the lock
		_Locksyslock(_Locktype); }

	~_Lockit()
		{	// clear the lock
		_Unlocksyslock(_Locktype); }

private:
	_Lockit(const _Lockit&);				// not defined
	_Lockit& operator=(const _Lockit&);	// not defined

	int _Locktype;
  #else /* _MULTI_THREAD */
   #define _LOCKIT(x)
	explicit _Lockit()
		{}	// do nothing

	explicit _Lockit(int)
		{}	// do nothing

	~_Lockit()
		{}	// do nothing
  #endif /* _MULTI_THREAD */
	};

class _Mutex
	{	// lock under program control
public:
  #if _MULTI_THREAD
	_Mutex();
	~_Mutex();
	void _Lock();
	void _Unlock();

private:
	_Mutex(const _Mutex&);				// not defined
	_Mutex& operator=(const _Mutex&);	// not defined
	void *_Mtx;
  #else /* _MULTI_THREAD */
    void _Lock()
		{}	// do nothing

	void _Unlock()
		{}	// do nothing
  #endif /* _MULTI_THREAD */
	};
_STD_END
 #endif /* __cplusplus */

		/* MISCELLANEOUS MACROS */
#define _ATEXIT_T	void
#define _Mbstinit(x)	mbstate_t x = {0, 0}

#define _MAX	max
#define _MIN	min

#define _TEMPLATE_STAT

 #if defined(__cplusplus)
_STD_BEGIN
typedef ::va_list va_list;
_STD_END
 #endif /* __cplusplus */
#endif /* _YVALS */

/*
 * Copyright (c) 1992-2002 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V3.13:1332 */
