================================================================================
Readme for description of device C template files 
================================================================================

Three device template files have been provided in this folder.
These are named temp_6010.c, temp_6014.c and traps.c:

  [i] temp_6010.c is a template file for the Motion Control and Power Conversion
      family of dsPIC 30F devices. The dsPIC 30F6010 is a device that belongs
      to this family. This template file can be used as a starting point in
      writing code for any device in this family, by replacing the references
      to the 30F6010 device to the one relevant to your application.

 [ii] temp_6014.c is a template file for the Sensor and General Purpose family
      of dsPIC 30F devices. The dsPIC 30F6014 is a device that belongs
      to this family. This template file can be used as a starting point in
      writing code for any device in this family, by replacing the references
      to the 30F6014 device to the one relevant to your application.

[iii] traps.c contains handlers for the following exceptions:

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
      add traps.c to your project.


The template files "temp_6010.c" and "temp_6014.c" provided in this folder
utilize a run-time start-up module, which is included in the run-time
library, "libpic30.a" file. The archive file libpic30.a is present in the
 "pic30_tools\lib\" folder which is part of the MPLAB C30 language tools
distribution.

Each template file has a header section that contains a description of the main
contents of the file.

To control the initialization of the various data sections (named .data, .ndata,
.xdata and .ydata) the linker constructs a data initialization template. This
template is allocated in program memory and is processed at startup by the
run-time library. When the application main program takes control,
all variables in data memory will have been initialized.

Refer to the "dsPIC 30F C30 Compiler User's Guide" for a
detailed description of the C30 compiler.


-----------------x-----------------------------------x-------------------------