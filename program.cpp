/*
how to compile:
mkdir build
cd build
cmake ..
make

 how to run
 cd build
./program

how to test
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
                     //         3            6          9           12          15
    std::vector<int> v { 7, 13, 15, 15, 15, 25, 37, 40, 45, 45, 45, 50, 51, 52, 99, 150};
    std::cout<< "Test file: " <<__FILE__<<std::endl;
    assert(0 == countNumbersv1(v,7));
    assert(0 == countNumbersv1(v,4));
    assert(7 == countNumbersv1(v,38));
    assert(15 == countNumbersv1(v,150));
    assert(16 == countNumbersv1(v,200));
    assert(5 == countNumbersv1(v,16));
    assert(8 == countNumbersv1(v,45));
    std::cout<<"test algo countNumbersv1 ended"<<std::endl;

    assert(0 == countNumbersv2(v,7));
    assert(0 == countNumbersv2(v,4));
    assert(7 == countNumbersv2(v,38));
    assert(15 == countNumbersv2(v,150));
    assert(16 == countNumbersv2(v,200));
    assert(5 == countNumbersv2(v,16));
    assert(8 == countNumbersv2(v,45));
    std::cout<<"test algo countNumbersv2 ended"<<std::endl;
    return 0;
}