#ifndef __ALGO_H
#include "algo.h"
#endif

/* 
    this implementation has a issue
    scenario:
    v { 7, 13, 15, 15, 15, 25, 37, 40, 45, 45, 45, 50, 51, 52, 99, 150};
     countNumbersv1(v,200) returns 0 insted 16 (all elements)

*/
int countNumbersv1(const std::vector<int>& sortedVector, int lessThan){
   int counter = 0;  
   for (unsigned i=0; i<sortedVector.size(); i++){
       if (sortedVector[i]>=lessThan) 
            return counter;
        counter++;
   }
    return counter;
}
