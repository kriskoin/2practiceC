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

static int binarySearch(const std::vector<int>& sortedVector, int lessThan){
   
    if (!((int )sortedVector.size())){
        return 0;
    }

    if (lessThan<sortedVector[0]){
        return 0;
    }

    int vecSize = (int)sortedVector.size();

    if (sortedVector[vecSize-1]<lessThan){
        return vecSize;
    }

    int s = 0;
    int f = (int)sortedVector.size() /2 ;
    while (s<f){

    }
    return 0;
}

int main(){
    
    std::vector<int> v { 12, 23, 50, 70 };
    std::cout << binarySearch(v, 35)<<std::endl;
    return 0;
}