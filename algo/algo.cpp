#ifndef __ALGO_H
#include "algo.h"
#endif

/* 
    
    scenario:
   #item       3            6          9           12          15
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

int countNumbersv3(const std::vector<int>& sortedVector, int lessThan){
    if (sortedVector[0]>lessThan)
        return 0;
    if (sortedVector[sortedVector.size()-1]<lessThan)
        return (int)sortedVector.size();
    return countNumbersv3(sortedVector,0,(int)sortedVector.size()-1,lessThan);
}
int countNumbersv3(const std::vector<int>& sortedVector,int start,int end, int lessThan){
   if (start > end)
        return end+1;
    
    int p ;
    if(start+end){
        p = (start +end) /2;
    }else{
         p = 0;
    }

    if (sortedVector[p]>=lessThan){
        return countNumbersv3(sortedVector,start,p-1,lessThan);
    }

    if (sortedVector[p]<lessThan){
        return countNumbersv3(sortedVector,p+1,end,lessThan);
    }
    
}