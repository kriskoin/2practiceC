#ifndef __ALGO_H
#include "algo.h"
#endif


int countNumbersv1(const std::vector<int>& sortedVector, int lessThan){
   int counter = 0;  
   for (unsigned i=0; i<=sortedVector.size()-1; i++){
       if (sortedVector[i]>=lessThan) 
            return counter;
        counter++;
   }
    return 0;
}
