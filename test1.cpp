/*
how to compile:
mkdir build
cd build
cmake ..
make

 how to run
 cd build
./program

*/
#include <vector>
#include <iostream>

#ifndef __ALGO_H
#include "algo.h"
#endif

int main(){
    
    std::vector<int> v { 12, 23, 50, 70 };
    std::cout<< "Test file: " <<__FILE__<<std::endl;
    //std::cout << binarySearch(v, 35)<<std::endl;
    return 0;
}