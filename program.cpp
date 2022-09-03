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
    //   element number         3            6          9           12          15
    std::vector<int> v { 7, 13, 15, 15, 15, 25, 37, 40, 45, 45, 45, 50, 51, 52, 99, 150};
     std::vector<int>v2 { 1, 5,  9, 20, 29};
    std::cout<< "Test file: " <<__FILE__<<std::endl;
    assert(0 == countNumbersv1(v,7));
    assert(0 == countNumbersv1(v,4));
    assert(7 == countNumbersv1(v,38));
    assert(15 == countNumbersv1(v,150));
    assert(16 == countNumbersv1(v,200));
    assert(5 == countNumbersv1(v,16));
    assert(8 == countNumbersv1(v,45));
    assert(5 == countNumbersv1(v2,45));
    assert(1 == countNumbersv1(v2,2));
    assert(0 == countNumbersv1(v2,0));
    std::cout<<"test algo countNumbersv1 ended"<<std::endl;

    assert(0 == countNumbersv2(v,7));
    assert(0 == countNumbersv2(v,4));
    assert(7 == countNumbersv2(v,38));
    assert(15 == countNumbersv2(v,150));
    assert(16 == countNumbersv2(v,200));
    assert(5 == countNumbersv2(v,16));
    assert(8 == countNumbersv2(v,45));
    assert(5 == countNumbersv2(v2,45));
    assert(1 == countNumbersv2(v2,2));
    assert(0 == countNumbersv2(v2,0));
    std::cout<<"test algo countNumbersv2 ended"<<std::endl;

   
    assert(0 == countNumbersv3(v,7));
    assert(0 == countNumbersv3(v,4));
    assert(7 == countNumbersv3(v,38));
    assert(15 == countNumbersv3(v,150));
    assert(16 == countNumbersv3(v,200));
    assert(5 == countNumbersv3(v,16));
    assert(8 == countNumbersv3(v,45));
    assert(5 == countNumbersv3(v2,45));
    assert(1 == countNumbersv3(v2,2));
    assert(0 == countNumbersv3(v2,0));
    std::cout<<"test algo countNumbersv3 ended"<<std::endl;

    assert(0 == countNumbersv4(v,0,(int)v.size()-1,7));
    assert(0 == countNumbersv4(v,0,(int)v.size()-1,4));
    assert(7 == countNumbersv4(v,0,(int)v.size()-1,38));
    assert(15 == countNumbersv4(v,0,(int)v.size()-1,150));
    assert(16 == countNumbersv4(v,0,(int)v.size()-1,200));
    assert(5 == countNumbersv4(v,0,(int)v.size()-1,16));
    assert(8 == countNumbersv4(v,0,(int)v.size()-1,45));
    assert(5 == countNumbersv4(v2,0,(int)v2.size()-1,45));
    assert(1 == countNumbersv4(v2,0,(int)v2.size()-1,2));
    assert(0 == countNumbersv4(v2,0,(int)v2.size()-1,0));
    std::cout<<"test algo countNumbersv4 ended"<<std::endl;

    assert(0 == countNumbersv5(v,7));
    assert(0 == countNumbersv5(v,4));
    assert(7 == countNumbersv5(v,38));
    assert(15 == countNumbersv5(v,150));
    assert(16 == countNumbersv5(v,200));
    assert(5 == countNumbersv5(v,16));
    assert(8 == countNumbersv5(v,45));
    assert(5 == countNumbersv5(v2,45));
    assert(1 == countNumbersv6(v2,2));
    assert(0 == countNumbersv6(v2,0));
    assert(7 == countNumbersv7(v,38));
    assert(1 == countNumbersv7(v2,2));

    assert(16 == std::distance(v.begin(),std::lower_bound (v.begin(), v.end(), 200)) );
    assert(1 == std::distance(v2.begin(),std::lower_bound (v2.begin(), v2.end(), 2)) );

    std::cout<<"test algo countNumbersv 5.6... ended"<<std::endl;

    return 0;
}