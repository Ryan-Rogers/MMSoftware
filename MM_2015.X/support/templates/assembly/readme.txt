================================================================================
Readme for description of device template files 
================================================================================
This "readme.txt" file consists of the following sections:


1. About the Template Files

2. What should the user's start-up code perform at run-time?

3. Functions of the start-up module, "crt0.s", in the run-time library,
   "libpic30.a"
   

   For additional information about dsPIC 30F  architecture and language
   tools, refer to the following documents:

   MPLAB C30 Compiler User's Guide                       : DS51284
   dsPIC 30F Assembler, Linker and Utilities User's Guide: DS51317
   dsPIC 30F 16-bit MCU Family Reference Manual          : DS70046
   dsPIC 30F Power and Motion Control Family Data Sheet  : DS70082
   dsPIC 30F Programmer's Reference Manual               : DS70030

1. About the Template Files:
============================
Two device template files have been provided in this folder.
These are named tmp6010.s and tmp6014.s. In addition, a set
of exception handlers is provided in traps.s:

  [i] tmp6010.s is a template file for the Motion Control and Power Conversion
      family of dsPIC 30F devices. The dsPIC 30F6010 is a device that belongs
      to this family. This template file can be used as a starting point in
      writing code for any device in this family, by replacing the references
      to the 30F6010 device to the one relevant to your application.

 [ii] tmp6014.s is a template file for the Sensor and General Purpose family
      of dsPIC 30F devices. The dsPIC 30F6014 is a device that belongs
      to this family. This template file can be used as a starting point in
      writing code for any device in this family, by replacing the references
      to the 30F6014 device to the one relevant to your application.

[iii] tmp6010_srt.s is a template file for the Motion Control and Power
      Conversion family of dsPIC 30F devices. The dsPIC 30F6010 is a device that
      belongs to this family. This template file can be used as a starting point
      in writing code for any device in this family, by replacing the references
      to the 30F6010 device to the one relevant to your application. This file
      utilizes a run-time start-up library module.

 [iv] tmp6014_srt.s is a template file for the Sensor and General Purpose family
      of dsPIC 30F devices. The dsPIC 30F6014 is a device that belongs
      to this family. This template file can be used as a starting point in
      writing code for any device in this family, by replacing the references
      to the 30F6014 device to the one relevant to your application.This file
      utilizes a run-time start-up library module.

  [v] traps.s contains handlers for the following exceptions:

        _OscillatorFail
        _AddressError
        _StackError
        _MathError

      These exception handlers "trap" the exception by entering
      an infinite loop. This can be very useful during the debugging
      phase of a project. Without an exception handler installed, the
      above exceptions would cause an application to restart, because
      the default handler for all exceptions and interrupts is a
      reset instruction. To install the exception handlers, simply
      add traps.s to your project.

The template files "tmp6010_srt.s" and "tmp6014_srt.s" provided in this folder
utilize a run-time start-up module, which is included in the run-time
library, "libpic30.a" file. The archive file libpic30.a is present in the
 "pic30_tools\lib\" folder which is part of the MPLAB C30 language tools
distribution.

The template files "tmp6010.s" and "tmp6014.s" provided in this folder do NOT
utilize the run-time library.

Each template file has a header section that contains a description of the main
contents of the file.


2. What should the user's start-up code perform at run-time?:
=============================================================
To control the initialization of the various data sections (named .data, .ndata,
.xdata and .ydata) the linker constructs a data initialization template. This
template is allocated in program memory and can be processed at startup by the
run-time library, if invoked. When the application main program takes control,
all variables in data memory will have been initialized.

Since, two of the template files, "tmp6010.s" and "tmp6014.s", present in
this folder do not invoke the start-up module in the run-time library, the user
will have to perform at least the following tasks before the application's
main program takes control:

[i]  The .ndata, .data, .ndconst and .dconst sections are initialized by 
     copying the initial values from an image in program memory.

[ii]  Set the stack pointer to point above the run-time heap and initialize the
      stack pointer limit register. This has been done for the user in the
      files provided in this folder.

Refer to the "dsPIC 30F Assembler, Linker and Utilities User's Guide" for a
detailed description of the data initialization template.


3. Functions of the start-up module, "crt0.s", in the run-time library,
   "libpic30.a"
=======================================================================
The template files "tmp6010_srt.s" and "tmp6014_srt.s" utilize the run-time
start-up module.

The runtime startup module includes the function "__reset", which by default 
gets control when the processor is reset. The module performs the following 
tasks:

[i]   Sets the stack pointer to point above the run-time heap and initializes 
      the stack pointer limit register.

[ii]  If there is a .const section, it is mapped into the Program Space 
      Visibility (PSV) data window.

[iii] The memory locations in the .bss and .nbss sections are initialized to 
      zero.

[iv]  The .ndata, .data and .dconst sections are initialized by copying the
      initial values from an image in program memory.

[v]   The function "_main" is called with no arguments.

[vi]  If "_main" returns, a BREAK/RESET instruction is executed, and the program
      halts in the debug environment, or resets in the application environment.

-----------------x-----------------------------------x-------------------------