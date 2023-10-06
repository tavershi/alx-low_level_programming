#!/bin/bash
gcc -wall -pedantic -werror -wextra -c *.c
arc -rc liball.a *.c
ranlib liball.a
