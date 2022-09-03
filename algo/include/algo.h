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

class CNode {
    public:
    
    CNode(CNode * left,int val, CNode * right);

    CNode * getLeft();
    int getVal();
    CNode * getRight();
    void setLeft(CNode * n);
    void setRight(CNode * n);

    private:
    CNode * left;
    int val;
    CNode * right;

};

class CBinaryTreeSearch{

    public:
        bool  find(CNode * root, int val); 
};

void binaryTreeAddNode (CNode * node, int newVal);
void binaryTreePrintInorder (CNode * node);


		
#endif