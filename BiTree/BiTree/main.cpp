//
//  main.cpp
//  BiTree
//
//  Created by 肖业凡 on 2019/8/28.
//  Copyright © 2019 肖业凡. All rights reserved.
//

#include <iostream>
#include "Stack.h"
#include "Queue.h"
using namespace std;

typedef struct BiTNode{
    int data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

bool CreateBiTree(BiTree &T){
    int num;
    cin >> num;
    if(num == -1){
        T = NULL;
    }else{
        T = (BiTNode*)malloc(sizeof(BiTNode));
        if(!T){
            exit(0);
        }
        T->data = num;
        cout << "the left: " << endl;
        CreateBiTree(T->lchild);
        cout << "the right: " << endl;
        CreateBiTree(T->rchild);
    }
    return true;
}

void preOrderTraverse(BiTree T){
    if(T == NULL){
        return;
    }else{
        cout<<T->data<<" "<<endl;
        preOrderTraverse(T->lchild);
        preOrderTraverse(T->rchild);
    }
}

void midOrderTraverse(BiTree T){
    if(T == NULL){
        return;
    }else{
        midOrderTraverse(T->lchild);
        cout<<T->data<<" "<<endl;
        preOrderTraverse(T->rchild);
    }
}
void postOrderTraverse(BiTree T){
    if(T == NULL){
        return;
    }else{
        preOrderTraverse(T->lchild);
        preOrderTraverse(T->rchild);
        cout<<T->data<<" "<<endl;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    BiTree T;
//    cout<< "input the number in order, -1 means the leaves" << endl;
//    CreateBiTree(T);
//    cout<<"preOrder: "<< endl;
//    preOrderTraverse(T);
//    cout<<"midOrder: "<<endl;
//    midOrderTraverse(T);
//    cout<<"postOrder: "<<endl;
//    postOrderTraverse(T);
    return 0;
}
