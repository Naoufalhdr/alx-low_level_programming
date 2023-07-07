#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
ar -rc liball.a *.o
