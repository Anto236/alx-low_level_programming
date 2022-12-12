#!/bin/bash
gcc -c -Werror -Wall -fpic *.c
gcc *.o -shared -o liball.so 
