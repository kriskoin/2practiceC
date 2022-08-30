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
    std::vector<int> v {  7, 13, 25, 37, 40, 45, 50, 51, 52, 99, 150};
    std::cout<<"r: "<<countNumbersv1(v,200)<<std::endl;
    assert(0 == countNumbersv1(v,4));
    assert(4 == countNumbersv1(v,38));
    assert(10 == countNumbersv1(v,150));
    assert(11 == countNumbersv1(v,200));
    return 0;
}