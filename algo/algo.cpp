#ifndef __ALGO_H
#include "algo.h"
#endif

/* 
    
    scenario:
    v { 7, 13, 15, 15, 15, 25, 37, 40, 45, 45, 45, 50, 51, 52, 99, 150};
   
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
//another form of for
int countNumbersv2(const std::vector<int>& sortedVector, int lessThan){
   int counter = 0;  
   for (unsigned i : sortedVector){
       if (i >=lessThan) 
            return counter;
        counter++;
   }
    return counter;
}
