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
#include <assert.h>
#ifndef __ALGO_H
#include "algo.h"
#endif



int main(){
    
    std::vector<int> v {  1, 3, 5, 7};
    assert(2,countNumbersv1(v,4));
    return 0;
}