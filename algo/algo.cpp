#ifndef __ALGO_H
#include "algo.h"
#endif


int countNumbersv1(const std::vector<int>& sortedVector, int lessThan){
   int counter = 0;  
   for (unsigned i=0; i<sortedVector.size(); i++){
       if (sortedVector[i]>lessThan) 
            return counter-1;
        counter++;
   }
    return 0;
}
