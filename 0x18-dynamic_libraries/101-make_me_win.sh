#!/bin/bash
wget -P /tmp/https://github.com/Anto236/alx-low_level_programming/blob/11345b83fce94a585157cec9a474fba1757ee057/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/tmp/libtest.s
