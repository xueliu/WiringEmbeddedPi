WiringEmbeddedPi
================

Wiring library for Embedded Pi board

The project is based on the [arduPi](http://www.cooking-hacks.com/documentation/tutorials/raspberry-pi-to-arduino-shields-connection-bridge "") library

1. Compile arduPi library  
(This step needs to be done on the Raspberry, or using cross-compiling tools for the raspberry in other machine).  
As arduPi is a C++ library we will use g++ to compile it. You can compile the arduPi library to obtain an object file (.o) and use this file to link your program:
```bash
g++ -c arduPi.cpp -o arduPi.o
```
2. Compile a program that uses arduPi:  
(This step needs to be done on the raspberry, or using cross-compiling tools for the raspberry in other machine).  
If you have already compiled the arduPi library (previous step) you can do:
```bash
g++ -lrt -lpthread my_program.cpp arduPi.o -o my_program
```  
If arduPi library is not compiled you can just compile both arduPi and your program and link them in one step:  
```bash
g++ -lrt -lpthread my_program.cpp arduPi.cpp -o my_program
```  
The **-lrt** flag is necesary because the library uses the function *clock_gettime* (time.h).   
The **-lpthread** option is needed because *attachInterrupt()* and *detachInterrupt()* functions use threads.