#!/bin/sh
mkdir build
mkdir build/bin
mkdir build/lib


c++ -c src/sum.cpp -I include -o  build/sum.o
c++ -c src/subtract.cpp -I include -o  build/subtract.o
ar rcs build/lib/libipb_arithmetic.a build/sum.o build/subtract.o

c++ src/main.cpp -I include -L  build/lib -lipb_arithmetic -o build/bin/main

# c++  build/subtract.o build/sum.o src/main.cpp -I include -o  build/main
