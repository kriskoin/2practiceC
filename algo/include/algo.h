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

#include <iostream>
#include <vector>
#include <map>
#include <set>
class ShiffTotal
{
    public:
        /**
         *
         *  append 
         *
         * @param list - vector with at least 3 order (asc) elements 
         * 
         * @pre list must be a sorted vector in ascendent order
         *
         */
        void append(const std::vector<int>& list) ;
        bool contains(int total) ;
    private:
        void calculateTotals(const std::map<std::vector<int> ,int>::iterator * it);
        std::map<std::vector<int>, int> listArrays;
        std::set<int> listTotals;
};
		
#endif