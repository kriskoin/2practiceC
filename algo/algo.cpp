#ifndef __ALGO_H
#include "algo.h"
#endif



CNode::CNode(CNode * left,int val, CNode * right){
        this->left = left;
        this->val = val;
        this->right = right;
};

CNode * CNode::getLeft(){
    return this->left;
};

int CNode::getVal(){
    return this->val;
};

CNode * CNode::getRight(){
    this->right;
};

void CNode::setLeft(CNode * n){
    n->left = n;
};

void CNode::setRight(CNode * n){
    this->right = n ;
};

bool  CBinaryTreeSearch::find(CNode * node, int val){
    

    if(val==node->getVal()){
        return true;
    }

    if (val<node->getVal() && node->getLeft()!= nullptr){
        return find(node->getLeft(),val);
    }

    if (val>node->getVal() && node->getRight()!= nullptr){
        return find(node->getRight(),val);
    }
    return false;
}; 


void binaryTreeAddNode (CNode * node, int newVal){
    if(newVal<node->getVal()){
        if(node->getLeft()!=nullptr){
            binaryTreeAddNode(node->getLeft(),newVal);
        }else{
            CNode* n = new CNode(nullptr,newVal,nullptr);
            node->setLeft(n);
        }
    }
    if(newVal>node->getVal()){
        if(node->getRight()!=nullptr){
            binaryTreeAddNode(node->getRight(),newVal);
        }else{
            CNode* n = new CNode(nullptr,newVal,nullptr);
            node->setRight(n);
        }

    }
};

void binaryTreePrintInorder (CNode * node){
    if(node->getLeft() == nullptr){
        std::cout<<node->getVal();
    }else{

    }

};


