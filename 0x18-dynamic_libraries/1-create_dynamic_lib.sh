#!/bin/bash
# Graham S. Paul (1-create_dynamic_lib.sh)
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
