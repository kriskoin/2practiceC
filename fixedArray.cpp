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

#define MEDIUM_SIZE 1000

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
    assert (-1 ==  binarySearch(v,0,vecSize-1 ,7));
    assert (1 ==  binarySearch(v ,0,vecSize-1,23));
    assert (4 ==  binarySearch(v ,0,vecSize-1,100));
    assert (3 ==  binarySearch(v ,0,vecSize-1,70));
    assert (-1 ==  binarySearch(v,0,vecSize-1 ,55));
    //end corner cases

    printVector(v);

    //fill the vector with 
    v.clear();

    for(int i=0;i<=MEDIUM_SIZE;i++){
        v.insert(v.end(),i);
    }
    //TODO: Fix this!!
    for(int i=1;i<=MEDIUM_SIZE;i++){
         assert (i-1 ==  binarySearch(v,0,vecSize-1 ,i));
    }
     


    return 0;
}