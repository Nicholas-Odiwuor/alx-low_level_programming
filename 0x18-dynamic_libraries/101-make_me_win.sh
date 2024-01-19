#!/bin/bash
gcc -shared -fPIC -o /tmp/libhack.so -nostartfiles -ldl 101-make_me_win.c
LD_PRELOAD=/tmp/libhack.so

