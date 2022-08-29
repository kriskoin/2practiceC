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


void printVector(std::vector<int> v){
    std::vector<int>::iterator it;
    for (it=v.begin(); it<v.end(); it++)
    std::cout << ' ' << *it;
  std::cout << '\n';
  
}

static  std::vector<int> v;


int main(){
    //4-0 / 2  2  0-2

    //fill the vector{ 12, 23, 50, 70,100};
    v.insert(v.end(),12);
    v.insert(v.end(),23);
    v.insert(v.end(),50);
    v.insert(v.end(),70);
    v.insert(v.end(),100);
    //v.insert(v.end(),101);
    int vecSize= (int)v.size();

    //7 lower than smaller element  expect -1
    //assert (-1 ==  binarySearch(v,0,vecSize-1 ,7));

   // assert (2 ==  binarySearch(v ,0,vecSize-1,50));
    //end corner cases

    assert (4 ==  binarySearch(v ,0,vecSize-1,100));
    assert (4 ==  binarySearch(v ,0,vecSize-1,70));


    printVector(v);
    return 0;
}