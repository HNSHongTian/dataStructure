//
//  main.cpp
//  Stack
//
//  Created by 肖业凡 on 2019/8/27.
//  Copyright © 2019 肖业凡. All rights reserved.
//

#include <iostream>

using namespace std;
//栈的结构
typedef struct{
    int *base;
    int *top;
    int size;
} Sqstack;
//栈的初始化
bool InitStack(Sqstack &S){
    S.base = (int*)malloc(100*sizeof(int));
    if(!S.base){
        cout<<"wrong space offer"<<endl;
        exit(0);
    }
    S.top = S.base;
    S.size = 100;
    cout << "successfull build" << endl;
    return true;
}
//bool Init(Sqstack &S){
//    S.base = (int *)malloc(100*sizeof(int));
//    if(!S.base){
//        exit(0);
//    }
//    S.top = S.base;
//    S.size = 100;
//    cout<<"successful build"<<endl;
//    return true;
//}
//取top
bool GetTop(Sqstack S, int &e){
    if(S.top == S.base){
        cout << "empty stack without any element" << endl;
    }else{
        e = *(S.top - 1);
        cout << e << "is the top of the stack" << endl;
    }
    return true;
}
//bool getTop(Sqstack S, int &e){
//    if(S.top == S.base){
//        cout << "empty with no top" << endl;
//    }else{
//        e = *(S.top - 1);
//        cout << "top : " << e << endl;
//    }
//    return true;
//}
//入栈
bool Push(Sqstack &S, int e){
    if(S.top - S.base >= S.size){
        S.base = (int *)realloc(S.base, (S.size + 10) * sizeof(int));
        if(!S.base){
            exit(0);
            cout<<"wrong space offer"<<endl;
        }
        S.top = S.base + S.size;
        S.size += 10;
    }
    *S.top++ = e;
    return true;
}
//bool push(Sqstack &S, int e){
//    if(S.top - S.base == S.size){
//        S.base = (int *)realloc(S.base, (S.size + 10)*sizeof(int));
//        if(!S.base){
//            exit(0);
//        }
//        S.top = S.base + S.size;
//        S.size += 10;
//    }
//    *S.top++ = e;
//    return true;
//}
//出栈
bool Pop(Sqstack &S, int &e){
    if(S.top == S.base){
        cout << "empty stack without any element" << endl;
    }else{
        e = *--S.top;
    }
    return true;
}
//bool pop1(Sqstack &S, int &e){
//    if(S.top == S.base){
//        exit(0);
//    }
//    e = *--S.top;
//    return true;
//}


int main(int argc, const char * argv[]) {
    // insert code here...
//    Sqstack S;
//    bool build = Init(S);
//    for (int i = 0; i < 10; i++){
//        cout << "input push number"<<endl;
//        int num;
//        cin >> num;
//        bool pu = push(S, num);
//    }
//    int top;
//    bool gettop = getTop(S, top);
//    bool pop = pop1(S, top);
//    gettop = getTop(S, top);
//    pop = pop1(S, top);
//    gettop = getTop(S, top);
//    pop = pop1(S, top);
//    gettop = getTop(S, top);
//    pop = pop1(S, top);
//    gettop = getTop(S, top);
//    pop = pop1(S, top);
    return 0;
}
