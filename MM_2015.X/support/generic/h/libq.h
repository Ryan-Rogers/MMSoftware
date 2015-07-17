/*
 * MPLAB C30 Fixed Point Math Library
 *
 * Copyright 2007, 2008, 2009 by Microchip Technology, Inc.
 *
 *
 * Signed fixed point types are defined as follows:
 *
 * _Qn_m, where:
 *
 *    n is the number of data bits to the left of the radix point
 *    m is the number of data bits to the right of the radix point
 *    (note: a sign bit is implied)
 *
 * For convenience, short names are also defined:
 *
 *  Exact Name     # Bits Required      Short Name
 *  ----------     ---------------      ----------
 *   _Q0_15              16                _Q15
 *   _Q15_16             32                _Q16
 *
 *
 * Functions in the library are prefixed with the type
 *  of the return value. For example, _Q15acos returns
 *  a _Q15 value equal to the arc cosine of its argument.
 *
 * Note that argument types do not always match the
 * return type. Refer to the function prototype for
 * a specification of its arguments.
 *
 * In cases where the return value is not a fixed point
 * type, the argument type is appended to the function name.
 * For example, function _itoaQ15 accepts a type
 * _Q15 argument.
 *
 * In cases where two versions of a function are provided,
 * with the same return type but different argument types,
 * the argument type is appended to the function name.
 * For example:
 *
 *  Function Name        Return Type     Argument Type
 *  -------------        -----------     -------------
 *  _Q16reciprocalQ15       _Q16             _Q15
 *  _Q16reciprocalQ16       _Q16             _Q16
 *
 */

#ifndef _libq_h_
#define _libq_h_ 

typedef short _Q0_15;
typedef long  _Q15_16;

typedef _Q0_15  _Q15;
typedef _Q15_16 _Q16;

/*
 * Global variables defined in the library
 */
 extern short _Q15randomSeed;
 extern long  _Q16randomSeed;
 
 extern short _Q15shlSatFlag;  /* Used by the "NoSat" functions */
 extern short _Q16shlSatFlag;  /* to indicate that an overflow  */
 extern short _Q15shrSatFlag;  /* or underflow has occurred.    */
 extern short _Q16shrSatFlag;  /* Clear a flag before calling   */
 extern short _Q16macSatFlag;  /* the related function.         */
 
/*
 * Prototypes for _Q15 Functions
 */
_Q15 _Q15abs(_Q15);
_Q15 _Q15acos(_Q15);
_Q15 _Q15acosByPI(_Q15);
_Q15 _Q15add(_Q15, _Q15);
_Q15 _Q15asin(_Q15);
_Q15 _Q15asinByPI(_Q15);
_Q15 _Q15atan(_Q15);
_Q15 _Q15atanByPI(_Q15);
_Q15 _Q15atanYByX(_Q15,_Q15);
_Q15 _Q15atanYByXByPI(_Q15,_Q15);
_Q15 _Q15atoi(const unsigned char *);
_Q15 _Q15cos(_Q15);
_Q15 _Q15cosPI(_Q15);
_Q15 _Q15exp(_Q15);
_Q15 _Q15ftoi(float);
_Q15 _Q15log(_Q15);
_Q15 _Q15log10(_Q15);
_Q15 _Q15neg(_Q15);  /* this is the correct spelling */
_Q15 _Q15neq(_Q15) __attribute__((deprecated));
_Q15 _Q15norm (_Q15);
_Q15 _Q15power(_Q15, _Q15);
_Q15 _Q15random();
_Q15 _Q15shl (_Q15, short);
_Q15 _Q15shlNoSat(_Q15, short);
_Q15 _Q15shr (_Q15, short);
_Q15 _Q15shrNoSat (_Q15, short);
_Q15 _Q15sin(_Q15);
_Q15 _Q15sinPI(_Q15);
_Q15 _Q15sqrt(_Q15);
_Q15 _Q15sub(_Q15, _Q15);
_Q15 _Q15tan(_Q15);
_Q15 _Q15tanPI(_Q15);

float _itofQ15(_Q15);
void  _itoaQ15(_Q15, unsigned char *);
short _Q15sinSeries(_Q15, short, short, _Q15 *);

/*
 * Prototypes for _Q16 Functions
 */
_Q16 _Q16acos(_Q16);
_Q16 _Q16acosByPI(_Q16);
_Q16 _Q16asin(_Q16);
_Q16 _Q16asinByPI(_Q16);
_Q16 _Q16atan(_Q16);
_Q16 _Q16atanByPI(_Q16);
_Q16 _Q16atanYByX(_Q16, _Q16);
_Q16 _Q16atanYByXByPI(_Q16, _Q16);
_Q16 _Q16cos(_Q16);
_Q16 _Q16cosPI(_Q16);
_Q16 _Q16exp(_Q16);
_Q16 _Q16log(_Q16);
_Q16 _Q16log10(_Q16);
_Q16 _Q16mac(_Q16, _Q16, _Q16);
_Q16 _Q16macNoSat(_Q16, _Q16, _Q16);
_Q16 _Q16neg(_Q16);
_Q16 _Q16norm(_Q16);
_Q16 _Q16power(_Q16, _Q16);
_Q16 _Q16random();
_Q16 _Q16reciprocalQ15(_Q15);
_Q16 _Q16reciprocalQ16(_Q16);
_Q16 _Q16shl(_Q16, short);
_Q16 _Q16shlNoSat(_Q16, short);
_Q16 _Q16shr(_Q16, short);
_Q16 _Q16shrNoSat(_Q16, short);
_Q16 _Q16sin(_Q16);
_Q16 _Q16sinPI(_Q16);
_Q16 _Q16tan(_Q16);
_Q16 _Q16tanPI(_Q16);

short _Q16sinSeries(_Q16, short, short, _Q16 *);

static inline _Q16 _Q16ftoi(float x) {
  return (_Q16) (x * 65536);
}
static inline float _itofQ16(_Q16 x) {
  return (float) x / 65536;
}

_Q16 _IQ16mpy(_Q16,_Q16);
#define _Q16mpy _IQ16mpy

_Q16 _Q16div(_Q16,_Q16);
_Q16 _Q16divmod(_Q16,_Q16, _Q16 *);

 #endif
 
