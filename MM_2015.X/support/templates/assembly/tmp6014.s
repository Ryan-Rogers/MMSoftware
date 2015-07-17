;******************************************************************************
;   How to use this file:                                                     *
;   ======================                                                    *
;                                                                             *
;   This file is a basic template for creating Assembly code for a dsPIC30F   *
;   device.  Copy this file into your project directory and modify or         *
;   add to it as needed.                                                      *
;                                                                             *
;   Add the device linker script (e.g., p30f6014.gld) and the device          *
;   include file (e.g. p30f6014.inc). If you are using this file for          *
;   an application that uses a device other than dsPIC 30F6014 which is       *
;   identified in the list of supported devices, add the linker script and    *
;   include file specific to that device into your project.                   *
;                                                                             *
;   If you plan to use initialized data sections in the application and       *
;   would like to use the start-up module in the run-time library to          *
;   initialize the data sections then use the template file in this folder    *
;   named, "tmp6014_srt.s". Refer to the document "dsPIC 30F Assembler,       *
;   Linker and Utilities User's Guide" for further information on the start-up*
;   module in the run-time library.                                           *
;                                                                             *
;   If interrupts are not used, all code presented for that interrupt         *
;   can be removed or commented out using comment symbols (semi-colons).      *
;                                                                             *
;   For additional information about dsPIC 30F  architecture and language     *
;   tools, refer to the following documents:                                  *
;                                                                             *
;   MPLAB C30 Compiler User's Guide                       : DS51284           *
;   dsPIC 30F Assembler, Linker and Utilities User's Guide: DS51317           *
;   dsPIC 30F 16-bit MCU Family Reference Manual          : DS70046           *
;   dsPIC 30F Power and Motion Control Family Data Sheet  : DS70082           *
;   dsPIC 30F Programmer's Reference Manual               : DS70030           *
;                                                                             *
;******************************************************************************
;                                                                             *
;    Author              :                                                    *
;    Company             :                                                    *
;    Filename            :  tmp6014.s                                         *
;    Date                :  01/25/2005                                        *
;    File Version        :  1.30                                              *
;                                                                             *
;    Other Files Required: p30F6014.gld, p30f6014.inc                         *
;    Tools Used:MPLAB GL : 7.01                                               *
;               Compiler : 1.30                                               *
;               Assembler: 1.30                                               *
;               Linker   : 1.30                                               *
;                                                                             *
;    Devices Supported by this file:                                          *
;                        dsPIC 30F2011                                        *
;                        dsPIC 30F3012                                        *
;                        dsPIC 30F2012                                        *
;                        dsPIC 30F3013                                        *
;                        dsPIC 30F5011                                        *
;                        dsPIC 30F5012                                        *
;                        dsPIC 30F6011                                        *
;                        dsPIC 30F6012                                        *
;                        dsPIC 30F5013                                        *
;                        dsPIC 30F6013                                        *
;                        dsPIC 30F6014                                        *
;                                                                             *
;******************************************************************************
;    Notes:                                                                   *
;    ======                                                                   *
;                                                                             *
;1. The device include file defines bit names and their location within SFR   *
;   words. Replace the path to the include file, if necessary.                *
;   For e.g., to use the p30f2011 device modify the .include directive to     *
;   .include "Yourpath\p30F2011.inc"                                          *
;                                                                             *
;2. The "config" macro is present in the device specific '.inc' file and can  *
;   be used to set configuration bits for the dsPIC 30F device.               *
;   The '.inc' files also contain examples on using the "config" macro.       *
;   Some examples have been provided in this file. The user application may   *
;   require a different setting for the configuration bits.                   *
;   The dsPIC 30F 16-bit MCU Family Refernce Manual(DS70046) explains the     *
;   function of the configuration bits.                                       *
;                                                                             *
;3. The "__reset" label is the first label in the code section and must be    *
;   declared global. The Stack Pointer (W15) and the Stack Pointer Limit      *
;   register must be initialized to values that are past the run-time heap    *
;   space, so as to avoid corrupting user data. Initializing these registers  *
;   at the "__reset" label ensures that user data is not corrupted            *
;   accidentally. The __SP_init and __SPLIM_init literals are defined by the  *
;   linker. The linker automatically addresses above the run-time heap to     *
;   these symbols. Users can change the __SP_init and __SPLIM_init literals to*
;   suit their application.                                                   *
;                                                                             *
;4. A ".section <section_name>, <attributes>" directive declares a new section*
;   named "<section_name>" with an attribute list that specifies if the       *
;   section is located in Program Space(code), Uninitialized(bss) or          *
;   Initialized Data Space(data). Refer to the document "dsPIC 30F Assembler, *
;   Linker and Utilities User's Guide" for further details.                   *
;                                                                             *
;5. Initialize W registers: Using uninitialized W registers as Effective      *
;   Addresses(pointers) will cause an "Uninitialized W Register Trap" !       *
;                                                                             *
;6. The label "__T1Interrupt" is defined in the device linker script. The     *
;   label defines the starting location in program space of the Timer1        *
;   interrupt service routine (ISR).                                          *
;   Similarly, the linker script defines labels for all ISRs. Notice, that    *
;   the ISR label names are preceded by two underscore characters.            *
;   When users needs to write ISR code, they must use these labels after      *
;   providing them global scope. The linker will then place the ISR address in*
;   the respective interrupt vector table location in program space.          *
;   Context Save/Restore in ISRs can be performed using the double-word PUSH  *
;   instruction,PUSH.D. User can also make use of MOV.D, PUSH and PUSH.S      *
;   instructions. Refer dsPIC 30F 16-bit MCU Family Refernce Manual(DS70046)  *
;   for further details.                                                      *
;                                                                             *
;******************************************************************************
;                                                                             *
;    Additional Notes:                                                        *
;                                                                             *
;                                                                             *
;                                                                             *
;                                                                             *
;******************************************************************************

        .equ __30F6014, 1
        .include "p30f6014.inc"

;..............................................................................
;Configuration bits:
;..............................................................................

        config __FOSC, CSW_FSCM_OFF & XT_PLL16    ;Turn off clock switching and
                                            ;fail-safe clock monitoring and
                                            ;use the External Clock as the
                                            ;system clock

        config __FWDT, WDT_OFF              ;Turn off Watchdog Timer

        config __FBORPOR, PBOR_ON & BORV_27 & PWRT_16 & MCLR_EN
                                            ;Set Brown-out Reset voltage and
                                            ;and set Power-up Timer to 16msecs
                                            
        config __FGS, CODE_PROT_OFF         ;Set Code Protection Off for the 
                                            ;General Segment

;..............................................................................
;Program Specific Constants (literals used in code)
;..............................................................................

        .equ SAMPLES, 64         ;Number of samples


;..............................................................................
;Global Declarations:
;..............................................................................

        .global _wreg_init       ;Provide global scope to _wreg_init routine
                                 ;In order to call this routine from a C file,
                                 ;place "wreg_init" in an "extern" declaration
                                 ;in the C file.

        .global __reset          ;The label for the first line of code. 

        .global __T1Interrupt    ;Declare Timer 1 ISR name global



;..............................................................................
;Constants stored in Program space
;..............................................................................

        .section .myconstbuffer, code
        .palign 2                ;Align next word stored in Program space to an
                                 ;address that is a multiple of 2
ps_coeff:
        .hword   0x0002, 0x0003, 0x0005, 0x000A




;..............................................................................
;Uninitialized variables in X-space in data memory
;..............................................................................

         .section .xbss, bss, xmemory
x_input: .space 2*SAMPLES        ;Allocating space (in bytes) to variable.


;..............................................................................
;Uninitialized variables in Y-space in data memory
;..............................................................................

          .section .ybss, bss, ymemory
y_input:  .space 2*SAMPLES



;..............................................................................
;Uninitialized variables in Near data memory (Lower 8Kb of RAM)
;..............................................................................

          .section .nbss, bss, near
var1:     .space 2               ;Example of allocating 1 word of space for
                                 ;variable "var1".



;..............................................................................
;Code Section in Program Memory
;..............................................................................

.text                             ;Start of Code section
__reset:
        MOV #__SP_init, W15       ;Initalize the Stack Pointer
        MOV #__SPLIM_init, W0     ;Initialize the Stack Pointer Limit Register
        MOV W0, SPLIM
        NOP                       ;Add NOP to follow SPLIM initialization
        
        CALL _wreg_init           ;Call _wreg_init subroutine
                                  ;Optionally use RCALL instead of CALL




        ;<<insert more user code here>>





done:
        BRA     done              ;Place holder for last line of executed code



;..............................................................................
;Subroutine: Initialization of W registers to 0x0000
;..............................................................................

_wreg_init:
        CLR W0
        MOV W0, W14
        REPEAT #12
        MOV W0, [++W14]
        CLR W14
        RETURN



;..............................................................................
;Timer 1 Interrupt Service Routine
;Example context save/restore in the ISR performed using PUSH.D/POP.D
;instruction. The instruction pushes two words W4 and W5 on to the stack on
;entry into ISR and pops the two words back into W4 and W5 on exit from the ISR
;..............................................................................

__T1Interrupt:
        PUSH.D W4                  ;Save context using double-word PUSH

        ;<<insert more user code here>>

        BCLR IFS0, #T1IF           ;Clear the Timer1 Interrupt flag Status
                                   ;bit.
        POP.D W4                   ;Retrieve context POP-ping from Stack
        RETFIE                     ;Return from Interrupt Service routine



;--------End of All Code Sections ---------------------------------------------

.end                               ;End of program code in this file



