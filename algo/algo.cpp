#ifndef __ALGO_H
#include "algo.h"
#endif

int binarySearch(const std::vector<int>& sortedVector, int lessThan){
   
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

    return 0;
}
