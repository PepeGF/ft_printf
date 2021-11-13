#!/bin/bash
gcc -g -O0 -Wall -Wextra -Werror ft_*.c && gdb -q ./a.out -tui
