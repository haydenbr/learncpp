#!/bin/bash

if [ ! -d "build" ]; then
  mkdir build
fi

g++ HelloWorld.cpp -o ./build/HelloWorld -pedantic-errors -Wsign-conversion -Wextra -Wshadow -Wall -Werror --std=c++1z -Weffc++

# outputs assembly:
# g++ HelloWorld.cpp -pedantic-errors -Wall -S -Os
# see this webpage for optimization flags
# https://gcc.gnu.org/onlinedocs/gcc/Optimize-Options.html