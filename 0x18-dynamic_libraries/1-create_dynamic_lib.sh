#!/bin/bash
gcc -c Wall Wextra -C *c
gcc *.o -shared -o liball.so 
