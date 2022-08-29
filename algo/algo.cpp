#ifndef __ALGO_H
#include "algo.h"
#endif

int binarySearch(const std::vector<int>& sortedVector, int b,int e, int element){
     if (e < b){
        return -1;
    }
    if ( b > e){
        return -1;
    }


    //dont exits element minor than the lowest element
    if (element < sortedVector[b]){
        return -1;
    }

    //element bigger than the maximun
    if (sortedVector[e]<element){
        return -1;
    }

    int p = b+(e-b/2);
    std::cout<<"p: "<<p<<" b: "<<b<<" e: "<<e<<std::endl;
    
    //element bigger than the maximun
    if (sortedVector[p]==element){
        return p;
    }

     if (element > sortedVector[p]){
        return binarySearch(sortedVector,p+1,e,element);
    }

    if (element < sortedVector[p]){
        return binarySearch(sortedVector,b,p-1,element);
    }

}
