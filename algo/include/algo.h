/*
 * @file
 * @author  (C) 2022 by kriskoin [ https://github.com/kriskoin ]
 * @version 1.1.0
 *
 * @section DESCRIPTION
 * 
 *  This is template to practice programming algorithms in c++
 *
 *    GitHub:        https://github.com/kriskoin/2practiceC
 *
 */
#ifndef __ALGO_H
#define __ALGO_H

#include <vector>


/**
 *
 *  countNumbersv1 implements a linear search
 *  countNumbersv2 implements a linear search
 *
 * @param sortedVector - vector with the sorted numbers,
 * @param lessThan - 
 * 
 * @return number of vector elements that are less than
 *      the parameter lessThan. 
 * 
 * @memo
 *  Implement function countNumbers that accepts a sorted vector of
 *  integers and counts the number of vector elements that are less than
 *  the parameter lessThan.
 *
 *  For example, for vector v containing { 1, 3, 5, 7 },
 *  SortedSearch::CountNumbers(v, 4) should return 2 because there are two
 *  vector elements less than 4.
 *
 */
int countNumbersv1(const std::vector<int>& sortedVector, int lessThan);
int countNumbersv2(const std::vector<int>& sortedVector, int lessThan);

/**
 *
 *  countNumbersv3 implements a binary search
 *
 * @param sortedVector - vector with the sorted numbers,
 * @param lessThan     - 
 * @param start        - low  bound of the vector
 * @param end          - high bound of the vector
 * 
 * @return number of vector elements that are less than
 *      the parameter lessThan. 
 * 
 * @memo
 *  Implement function countNumbers that accepts a sorted vector of
 *  integers and counts the number of vector elements that are less than
 *  the parameter lessThan.
 *
 *  For example, for vector v containing { 1, 3, 5, 7 },
 *  SortedSearch::CountNumbers(v, 4) should return 2 because there are two
 *  vector elements less than 4.
 *
 */
int countNumbersv3(const std::vector<int>& sortedVector, int lessThan);
int countNumbersv3(const std::vector<int>& sortedVector,int start,int end, int lessThan);
		
#endif