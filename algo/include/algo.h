/*
 * @file
 * @author  (C) 2022 by kriskoin [ https://github.com/kriskoin ]
 * @version 1.1.0
 *
 * 
 * @section DESCRIPTION
 * 
 *  a binary search implemented on ordered vector *std::vector<int>*

 *
 */
#ifndef __ALGO_H
#define __ALGO_H

#include <iostream>

#include <vector>
//returns the position of the element within the sorted array
// returns -1 if no exits
int binarySearch(const std::vector<int>& sortedVector, int b,int e, int element);
		
#endif