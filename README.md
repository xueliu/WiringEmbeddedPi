WiringEmbeddedPi
================

Wiring library for Embedded Pi board

The source code of this  project is based on the [arduPi](http://www.cooking-hacks.com/documentation/tutorials/raspberry-pi-to-arduino-shields-connection-bridge "") library

1. Compile and install WiringEmbeddedPi library  
(This step needs to be done on the Raspberry, or using cross-compiling tools for the raspberry in other machine).  
```bash
make install
```
2. Compile a program that uses WiringEmbeddedPi library:  
(This step needs to be done on the raspberry, or using cross-compiling tools for the raspberry in other machine).  
If you have already install the WiringEmbeddedPi library (previous step) you can do:
```bash
g++ -lrt -lpthread -lwiringEPi my_program.cpp -o my_program
```  
The **-lwiringEPit** flag denotes that the ld will find WiringEmbeddedPi library
The **-lrt** flag is necesary because the library uses the function *clock_gettime* (time.h).   
The **-lpthread** option is needed because *attachInterrupt()* and *detachInterrupt()* functions use threads.
