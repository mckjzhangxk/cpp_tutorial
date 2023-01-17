#!/bin/sh
cmake -DCMAKE_INSTALL_PREFIX=results -S . -B build
cd build; make;make install
