#!/bin/bash
# a script that create a static library
# called liball.a from all the .c
#in the current directory

gcc -c *.c
ar rcs liball.a *.o
rm *.o
