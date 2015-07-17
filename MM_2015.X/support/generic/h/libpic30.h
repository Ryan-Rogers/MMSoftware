/*
 * Copyright 2007-2011 Microchip Technology, all rights reserved
 * 
 * This file defines useful exports from libpic30.a
 * Not all functions defined in libpic30.a can be usefully called by
 * the user, most are helper functions for the standard C library, libc.a
 *
 */

#ifndef __LIBPIC30_H
#define __LIBPIC30_H

/*
 * The following two functions allow the programmer to attach a file to
 * standard input, and later close the file.  The functions are only useful
 * if the executable will be simulated.
 *
 * With these functions input from the file will be read on-demmand, otherwise
 * the programmer should use the message based stimulus (information on this
 * can be found within MPLAB IDE's help pages).
 */

extern int __attach_input_file(const char *f);
void __close_input_file(void);

/*
 * __C30_UART selects the default UART port that read() and write() will use.  
 * read() is called by fscanf and family, while write() is called by printf 
 * and family.  The default setting (as shipped) is 1, which is suitable for 
 * the dsPICdem 1.1(tm) board.   Modifying this to another value will select
 * UART 2, suitable for the explorer 16(tm) board.
 */

extern int __C30_UART;

/*
 * __delay32() provides a 32-bit delay routine which will delay for the number
 * of cycles denoted by its argument.  The minimum delay is 12 cycles
 * including call and return statements.  With this function only the time
 * required for argument transmission is not accounted for.  Requests for
 * less than 12 cycles of delay will cause an 12 cycle delay.
 */

extern void __delay32(unsigned long cycles);

/*
 * __delay_ms() and __delay_us() are defined as macros. They depend
 * on a user-supplied definition of FCY. If FCY is defined, the argument
 * is converted and passed to __delay32(). Otherwise, the functions
 * are declared external.
 *
 * For example, to declare FCY for a 10 MHz instruction rate:
 *
 * #define FCY 10000000UL
 */

#if !defined(FCY)
extern void __delay_ms(unsigned long);
extern void __delay_us(unsigned long);
#else
#define __delay_ms(d) \
  { __delay32( (unsigned long) (((unsigned long long) d)*(FCY)/1000ULL)); }
#define __delay_us(d) \
  { __delay32( (unsigned long) (((unsigned long long) d)*(FCY)/1000000ULL)); }
#endif

/*
 * _PROGRAM_END is a symbol in program memory that marks the highest
 * address used by a CODE or PSV section. It should be referenced
 * with the address operator (&) in a built-in function call that
 * accepts the address of an object in program memory.
 *
 * For example:
 *
 *  __builtin_tblpage(&_PROGRAM_END)
 *  __builtin_tbloffset(&_PROGRAM_END)
 *
 *  _prog_addressT big_addr;
 *  big_addr = __builtin_tbladdress(&_PROGRAM_END)
 */

extern __attribute__((space(prog))) int _PROGRAM_END;

/*
 * _dump_heap_info()
 *
 * Writes a summary of heap memory usage to stderr,
 * including address range info and a list of
 * allocated and free memory blocks.
 *
 * For diagnostic use only. The output format may
 * may change in future versions.
 */

extern void _dump_heap_info(void);

/*
 * _memcpy_helper() - not a user-callable function
 *
 * Copies data from program memory to data memory. It does
 * not require the Program Space Visibility (PSV) window. However, it
 * does change the value of TBLPAG during execution.
 *
 * The source address in program memory is specified by a tbl_offset,
 * tbl_page pair. Flags indicate whether the upper byte should be
 * copied, and whether to terminate early after a NULL byte.
 * The return value is an updated source address pair.
 *
 * The number of bytes copied may be even or odd. The source address
 * is always even and is always aligned to the start of the next
 * program memory word.
 */

typedef unsigned long _prog_addressT;

extern _prog_addressT _memcpy_helper(_prog_addressT src, void *dst,
                                     unsigned int len, int flags);

/*
 * _memcpy_df() - not a user-callable function
 *
 * Copies data from program __pack_upper_byte memory to data memory.
 * These parameters are in 'compiler' order, use _memcpy_packed for a more
 * normal calling convention.
 */

extern void _memcpy_df(__pack_upper_byte void *src,void *dst, unsigned int len);

/*
 * Initialize a variable of type _prog_addressT.
 *
 * These variables are not equivalent to C pointers,
 * since each source address corresponds to 2 or 3 chars.
 */

#define _init_prog_address(a,b)  (a = __builtin_tbladdress(&b))


/*
 * _memcpy_p2d16() copies 16 bits of data from each address
 * in program memory to data memory. The source address is
 * specified as type _prog_addressT; the next unused address
 * is returned.
 */

_prog_addressT _memcpy_p2d16(void *dest, _prog_addressT src,
                             unsigned int len);

#define _memcpy_p2d16(dest, src, len)  _memcpy_helper(src, dest, len, 0) 

/*
 * _memcpy_p2d24() copies 24 bits of data from each address
 * in program memory to data memory. The source address is
 * specified as type _prog_addressT; the next unused address
 * is returned.
 */

_prog_addressT _memcpy_p2d24(void *dest, _prog_addressT src,
                             unsigned int len);

#define _memcpy_p2d24(dest, src, len)  _memcpy_helper(src, dest, len, 1) 

/*
 * _strncpy_p2d16() copies 16 bits of data from each address
 * in program memory to data memory. The operation terminates
 * early if a NULL char is copied. The source address is
 * specified as type _prog_addressT; the next unused address
 * is returned.
 */

_prog_addressT _strncpy_p2d16(char *dest, _prog_addressT src,
                              unsigned int len);

#define _strncpy_p2d16(dest, src, len)  _memcpy_helper(src, dest, len, 2) 

/*
 * _strncpy_p2d24() copies 24 bits of data from each address
 * in program memory to data memory. The operation terminates
 * early if a NULL char is copied. The source address is
 * specified as type _prog_addressT; the next unused address
 * is returned.
 */

_prog_addressT _strncpy_p2d24(char *dest, _prog_addressT src,
                              unsigned int len);

#define _strncpy_p2d24(dest, src, len)  _memcpy_helper(src, dest, len, 3) 

/*
 * _memcpy_packed copies from a __pack_upper_byte data space to RAM,
 */

void _memcpy_packed(char *dest, __pack_upper_byte void *src, unsigned int len);

#define _memcpy_packed(dest, src, len) _memcpy_df(src, dest, len)


/*
 * _memcpy_eds copies between __eds__ qualified pointers
 *   this routine can safely be passed non-qualified (RAM) pointers too
 */

extern void _memcpy_eds(__eds__ void *src, __eds__ void *dst, 
                        int len, int align);

/*
 * parameters of the real _memcpy_eds (above) are backward for internal use
 *   we normalize and convert to the full call
 */

#define _memcpy_eds(dst, src, len) \
  _memcpy_eds(src, dst, len, ((unsigned long int)src | len) & 1)

/*
 * _strcpy_eds and _strncpy_eds
 *   _strncpy_eds does not zero fill up to n bytes if the copied string is 
 *    short  
 */
extern void _strcpy_eds(__eds__ void *src, __eds__ void *dst);
                        
extern void _strncpy_eds(__eds__ void *src, __eds__ void *dst, int len);

/*
 * normalize parameter order
 */

#define _strcpy_eds(dst, src) _strcpy_eds(src,dst)
#define _strncpy_eds(dst, src, n) _strncpy_eds(src,dst,n)

/**********************************************************
 *                                                        *
 *        Constants for FLASH & EEDATA Functions          *
 *                                                        *
 *********************************************************/

/*
 * Lengths in EEDATA memory = bytes
 * Lengths in FLASH memory = words
 *  (1 word = 3 bytes = 2 PC address units)
 */

/* constants for 30F devices */
#ifdef __dsPIC30F__
#define _FLASH_ERASE_CODE                 0x4041
#define _FLASH_WRITE_ROW_CODE             0x4001
#define _EE_ERASE_WORD_CODE               0x4044
#define _EE_ERASE_ROW_CODE                0x4045
#define _EE_ERASE_ALL_CODE                0x4046
#define _EE_WORD_WRITE_CODE               0x4004
#define _EE_ROW_WRITE_CODE                0x4005

#define _FLASH_PAGE     32
#define _FLASH_ROW      32
#define _EE_WORD         2
#define _EE_ROW         32

/* constants for 33F devices */
#elif defined(__dsPIC33F__) 
#define _FLASH_ERASE_CODE                 0x4042
#define _FLASH_ERASE_GENERAL_SEGMENT_CODE 0x404D
#define _FLASH_ERASE_SECURE_SEGMENT_CODE  0x404C
#define _FLASH_WRITE_ROW_CODE             0x4001
#define _FLASH_WRITE_WORD_CODE            0x4003

#define _FLASH_PAGE   512
#define _FLASH_ROW     64

/* constants for 24H devices */
#elif defined(__PIC24H__)
#define _FLASH_ERASE_CODE                 0x4042
#define _FLASH_ERASE_GENERAL_SEGMENT_CODE 0x404D
#define _FLASH_ERASE_SECURE_SEGMENT_CODE  0x404C
#define _FLASH_WRITE_ROW_CODE             0x4001
#define _FLASH_WRITE_WORD_CODE            0x4003

#define _FLASH_PAGE   512
#define _FLASH_ROW     64

/* constants for 24F devices */
#elif defined(__PIC24F__)
#define _FLASH_ERASE_CODE      0x4042
#define _FLASH_WRITE_ROW_CODE  0x4001
#define _FLASH_WRITE_WORD_CODE 0x4003

#define _FLASH_PAGE   512
#define _FLASH_ROW     64

/* constants for 24FK devices */
#elif defined(__PIC24FK__)
#define _FLASH_ERASE_ROW_CODE             0x4058
#define _FLASH_ERASE_2ROW_CODE            0x4059
#define _FLASH_ERASE_4ROW_CODE            0x405A
#define _FLASH_WRITE_ROW_CODE             0x4004
#define _FLASH_ERASE_GENERAL_SEGMENT_CODE 0x404C
#define _FLASH_ERASE_BOOT_SEGMENT_CODE    0x4068

#define _EE_ERASE_WORD_CODE               0x4058
#define _EE_ERASE_4WORDS_CODE             0x4059
#define _EE_ERASE_8WORDS_CODE             0x405A
#define _EE_ERASE_ALL_CODE                0x4050
#define _EE_WRITE_WORD_CODE               0x4004

#define _FLASH_ROW     32
#define _FLASH_2ROWS   64
#define _FLASH_4ROWS  128
#define _EE_WORD        2
#define _EE_4WORDS      8
#define _EE_8WORDS     16

/* constants for 24EP and 33EP devices */
#elif defined(__dsPIC33E__) || defined(__PIC24E__)
#define _FLASH_ERASE_ALL_SEGMENT_CODE     0x400E
#define _FLASH_ERASE_GENERAL_SEGMENT_CODE 0x400D
#define _FLASH_ERASE_SECURE_SEGMENT_CODE  0x400C
#define _FLASH_ERASE_BOOT_SEGMENT_CODE    0x400B
#define _FLASH_ERASE_AUXILIARY_SEGMENT_CODE 0x400A
#define _FLASH_ERASE_CODE                 0x4003
#define _FLASH_WRITE_ROW_CODE             0x4002
#define _FLASH_WRITE_WORD_CODE            0x4001

#define _FLASH_PAGE   1024
#define _FLASH_ROW     128

#endif

/*
 * The following helper functions are not user-callable,
 * and may change in the future. The purpose of these
 * functions is to provide an abstraction layer where
 * device or family specific parameters can be specified.
*/
extern void _eedata_helper1(_prog_addressT dst, int len);
extern void _eedata_helper2(void);
extern void _eedata_helper3(_prog_addressT dst, int dat);
extern void _eedata_helper4(_prog_addressT dst, int *src);
extern void _eedata_helper5(_prog_addressT dst, int len);
extern void _eedata_helper6(void);
extern void _eedata_helper7(_prog_addressT dst, int dat);
extern void _flash_helper1 (_prog_addressT dst, int code);
extern void _flash_helper2 (_prog_addressT dst, int *src, int len);
extern void _flash_helper3 (_prog_addressT dst, long *src, int len);
extern void _flash_helper4 (_prog_addressT dst, int dat);
extern void _flash_helper5 (_prog_addressT dst, long dat);
extern void _flash_helper6 (int code);
extern void _flash_helper7(_prog_addressT dst, int len);
extern void _flash_helper8 (_prog_addressT dst, int *src, int len);
extern void _flash_helper9 (_prog_addressT dst, long *src, int len);
extern void _flash_helper10 (_prog_addressT dst, int dat1, int empty, int dat2);
extern void _flash_helper11 (_prog_addressT dst, long dat1, long dat2);

/**********************************************************
 *                                                        *
 *        EEDATA Functions for dsPIC30F Devices           *
 *                                                        *
 *********************************************************/

#ifdef __dsPIC30F__

/*
 * _erase_eedata() erases a word or a row of
 * eedata memory on 30F devices. The address is
 * specified with type _prog_addressT. The length
 * may be _EE_WORD or _EE_ROW (bytes).
*/

void _erase_eedata(_prog_addressT dst, int len);

#define _erase_eedata  _eedata_helper1

/*
 * _erase_eedata_all() erases the entire
 * range of eedata memory on 30F devices.
 */

void _erase_eedata_all(void);

#define _erase_eedata_all  _eedata_helper2

/*
 * _wait_eedata() waits for an erase
 * or write operation to complete.
 */

void _wait_eedata(void);

#define _wait_eedata() { while (NVMCONbits.WR); }

/*
 * _write_eedata_word() writes 16 bits of
 * eedata memory on 30F devices. The address is
 * specified with type _prog_addressT.
*/

void _write_eedata_word(_prog_addressT dst, int dat);

#define _write_eedata_word  _eedata_helper3

/*
 * _write_eedata_row() writes __EE_ROW bytes
 * of eedata memory on 30F devices. The address is
 * specified with type _prog_addressT.
*/

void _write_eedata_row(_prog_addressT dst, int *src);

#define _write_eedata_row  _eedata_helper4

#endif

/**********************************************************
 *                                                        *
 *       EEDATA Functions for PIC24FxxK Devices           *
 *                                                        *
 *********************************************************/

#ifdef __PIC24FK__

/*
 * _erase_eedata() erases eedata memory on 24FK devices. 
 * The address is specified with type _prog_addressT. 
 * The length may be _EE_WORD, _EE_4WORDS, or _EE_8WORDS.
 */

void _erase_eedata(_prog_addressT dst, int len);

#define _erase_eedata  _eedata_helper5

/*
 * _erase_eedata_all() erases the entire
 * range of eedata memory on 24FK devices.
 */

void _erase_eedata_all(void);

#define _erase_eedata_all  _eedata_helper6

/*
 * _wait_eedata() waits for an erase
 * or write operation to complete.
 */

void _wait_eedata(void);

#define _wait_eedata() { while (NVMCONbits.WR); }

/*
 * _write_eedata_word() writes 16 bits of
 * eedata memory on 24FK devices. The address is
 * specified with type _prog_addressT.
*/

void _write_eedata_word(_prog_addressT dst, int dat);

#define _write_eedata_word  _eedata_helper7

#endif

/**********************************************************
 *                                                        *
 *  FLASH Functions for PIC24F, PIC24H, and dsPIC Devices *
 *                                                        *
 *********************************************************/

#if defined(__dsPIC33F__) || defined(__PIC24H__) || defined(__dsPIC30F__) || defined(__PIC24F__) || defined(__dsPIC33E__) || defined(__PIC24E__)

/*
 * _erase_flash() erases a page of FLASH memory.
 * The page address is specified with type
 * _prog_addressT.
 */

void _erase_flash(_prog_addressT dst);

#define _erase_flash(dst)  _flash_helper1(dst, _FLASH_ERASE_CODE)

/*
 * _write_flash16() writes a row of FLASH memory
 * with 16-bit data. The row address is specified with
 * type _prog_addressT. The source address is an
 * array of type int, with _FLASH_ROW elements.
 * Note that the row must be erased before
 * any write can be successful.
 *
 * This function includes a workaround for the Device ID errata as 
 * described in DS-80444, DS-80446, or DS-80447 (#32).
 */

void _write_flash16(_prog_addressT dst, int *src);

#define _write_flash16(dst, src)  _flash_helper2(dst, src, _FLASH_ROW)

/*
 * _write_flash24() writes a row of FLASH memory
 * with 24-bit data. The row address is specified with
 * type _prog_addressT. The source address is an
 * array of type long, with _FLASH_ROW elements.
 * Note that the row must be erased before
 * any write can be successful.
 *
 * This function includes a workaround for the Device ID errata as 
 * described in DS-80444, DS-80446, or DS-80447 (#32).
 */

void _write_flash24(_prog_addressT dst, long *src);

#define _write_flash24(dst, src)  _flash_helper3(dst, src, _FLASH_ROW);

#endif

#if defined(__dsPIC33F__) || defined(__PIC24H__) || defined(__PIC24F__)

/*
 * _write_flash_word16() writes a word of FLASH memory
 * with 16 bits of data. Word writes are supported on
 * 33F, 24H, and 24F devices. The row address is specified
 * with type _prog_addressT. Note that the location must
 * be erased before any write can be successful.
 *
 * This function is currently disable for devices subject to the 
 * Device ID errata as described in DS-80444, DS-80446, or DS-80447 (#32).
 */
#if defined(__PIC24F__)

void _write_flash_word16(_prog_addressT dst, int dat);

#define _write_flash_word16  _flash_helper4

#endif

/*
 * _write_flash_word24() writes a word of FLASH memory
 * with 24-bits of data.  Word writes are supported on
 * 33F, 24H, and 24F devices. The row address is specified
 * with type _prog_addressT. Note that the location must
 * be erased before any write can be successful.
 *
 * This function is currently disable for devices subject to the 
 * Device ID errata as described in DS-80444, DS-80446, or DS-80447 (#32).
 */
#if defined(__PIC24F__)

void _write_flash_word24(_prog_addressT dst, long dat);

#define _write_flash_word24  _flash_helper5

#endif

#endif

/**********************************************************
 *                                                        *
 *        FLASH Functions for PIC24FxxK Devices           *
 *                                                        *
 *********************************************************/

#if defined(__PIC24FK__)

/*
 * _erase_flash erases rows of FLASH memory.
 * The first row address is specified with type
 * _prog_addressT. The length may be _FLASH_ROW,
 * _FLASH_2ROWS, or _FLASH_4ROWS.
 */

void _erase_flash(_prog_addressT dst, int len);

#define _erase_flash  _flash_helper7

/*
 * _write_flash16() writes a row of FLASH memory
 * with 16-bit data. The row address is specified with
 * type _prog_addressT. The source address is an
 * array of type int, with _FLASH_ROW elements.
 * Note that the row must be erased before
 * any write can be successful.
 */

void _write_flash16(_prog_addressT dst, int *src);

#define _write_flash16(dst, src)  _flash_helper8(dst, src, _FLASH_ROW)

/*
 * _write_flash24() writes a row of FLASH memory
 * with 24-bit data. The row address is specified with
 * type _prog_addressT. The source address is an
 * array of type long, with _FLASH_ROW elements.
 * Note that the row must be erased before
 * any write can be successful.
 */

void _write_flash24(_prog_addressT dst, long *src);

#define _write_flash24(dst, src)  _flash_helper9(dst, src, _FLASH_ROW);

#endif

/**********************************************************
 *                                                        *
 *    FLASH Functions for PIC24E and dsPIC33E Devices     *
 *    (May be expanded for all devices)                   *
 *                                                        *
 *********************************************************/
 
#if defined(__dsPIC33E__) || defined(__PIC24E__)

/*
 * _write_flash_word32() writes two words of FLASH memory
 * with 16 bits of data per word. The 16 bits are written
 * to the low 16 bits of the word. Word writes are supported
 * 33E, and 24E devices. The row address is specified
 * with type _prog_addressT. Note that the location must
 * be erased before any write can be successful.
 *
 * This function is currently disable for devices subject to the 
 * Device ID errata as described in DS-80444, DS-80446, or DS-80447 (#32).
 */

void _write_flash_word32(_prog_addressT dst, int dat1, int dat2);

#define _write_flash_word32(dst, dat1, dat2) _flash_helper10(dst, dat1, 0, dat2)

/*
 * _write_flash_word48() writes two words of FLASH memory
 * with 24 bits of data per word. Word writes are supported
 * 33E, and 24E devices. The row address is specified
 * with type _prog_addressT. Note that the location must
 * be erased before any write can be successful.
 *
 * This function is currently disable for devices subject to the 
 * Device ID errata as described in DS-80444, DS-80446, or DS-80447 (#32).
 */

void _write_flash_word48(_prog_addressT dst, long dat1, long dat2);

#define _write_flash_word48 _flash_helper11

#endif 

#endif
