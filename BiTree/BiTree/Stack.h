//
//  Stack.h
//  BiTree
//
//  Created by 肖业凡 on 2019/8/28.
//  Copyright © 2019 肖业凡. All rights reserved.
//

#ifndef Stack_h
#define Stack_h
typedef struct{
    int *base;
    int *top;
    int size;
} Sqstack;
//栈的初始化
void InitStack(Sqstack &S){
    S.base = (int*)malloc(100*sizeof(int));
    if(!S.base){
        //cout<<"wrong space offer"<<endl;
        exit(0);
    }
    S.top = S.base;
    S.size = 100;
    //cout << "successfull build" << endl;
}

void GetTop(Sqstack S, int &e){
    if(S.top == S.base){
        //cout << "empty stack without any element" << endl;
    }else{
        e = *(S.top - 1);
        //cout << e << "is the top of the stack" << endl;
    }
}

void Push(Sqstack &S, int e){
    if(S.top - S.base >= S.size){
        S.base = (int *)realloc(S.base, (S.size + 10) * sizeof(int));
        if(!S.base){
            exit(0);
            //cout<<"wrong space offer"<<endl;
        }
        S.top = S.base + S.size;
        S.size += 10;
    }
    *S.top++ = e;
}

void Pop(Sqstack &S, int &e){
    if(S.top == S.base){
        //cout << "empty stack without any element" << endl;
    }else{
        e = *--S.top;
    }
}

#endif /* Stack_h */
