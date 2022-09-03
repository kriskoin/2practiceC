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
    CBinaryTreeSearch bts;
    CNode * root = new CNode(nullptr,200,nullptr);
    binaryTreeAddNode(root,20);
    assert(true == bts.find(root,200));
    assert(true == bts.find(root,20));
    return 0;
}