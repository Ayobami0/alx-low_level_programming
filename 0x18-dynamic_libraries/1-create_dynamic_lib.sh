#!/bin/bash
gcc -o liball.so *c -shared -fPIC -Wl,soname,liball.so
