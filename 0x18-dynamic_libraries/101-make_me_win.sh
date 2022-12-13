#!/bin/bash
wget -P https://github.com/Anto236/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=libtest.so
