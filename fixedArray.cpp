/*
how to compile:
mkdir build
cd build
cmake ..
make

 how to run
 cd build
./program

hot to test
cd build
ctest

*/

#include <vector>
#include <iostream>

#ifndef __ALGO_H
#include "algo.h"
#endif

static  std::vector<int> v { 12, 23, 50, 70 };

int main(){
    std::cout << binarySearch(v, 35)<<std::endl;
    return 0;
}