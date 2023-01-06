#!/bin/bash
# a script that create a static library
# called liball.a from all the .c
#in the current directory

gcc -c *.c
ar arc liball.a *.o
echo y | rm -I *.o
