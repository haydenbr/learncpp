#!/bin/bash

if [ ! -d "build" ]; then
  mkdir build
fi

g++ main.cpp add.cpp -o ./build/add \
  --std=c++1z -pedantic-errors -Wsign-conversion -Wextra -Wshadow -Wall -Werror -Weffc++

# outputs assembly:
# g++ HelloWorld.cpp -S -Os
# see this webpage for optimization flags
# https://gcc.gnu.org/onlinedocs/gcc/Optimize-Options.html

if [ $? -eq 0 ]; then
  ./build/add
fi