#/bin/sh
cmake -S . -B build -DCMAKE_INSTALL_PREFIX=install

cd build; make;make install;