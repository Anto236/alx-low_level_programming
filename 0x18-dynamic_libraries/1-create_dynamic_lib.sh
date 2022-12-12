#!/bin/bash
gcc -c Wall Wextra -fpic -C *c
gcc *.o -shared -o liball.so 
