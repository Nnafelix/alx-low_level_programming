#!/bin/bash
gcc -Wall -pedantic -Werror -Wcreate_static_lib.sh extra -c *.c
ar -rc liball.a *.o
ranlib liball.a
