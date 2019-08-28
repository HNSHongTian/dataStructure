//
//  Queue.h
//  BiTree
//
//  Created by 肖业凡 on 2019/8/28.
//  Copyright © 2019 肖业凡. All rights reserved.
//

#ifndef Queue_h
#define Queue_h
typedef struct QNode{
    int data;
    struct QNode *next;
}QNode, *QueuePtr;

typedef struct {
    QueuePtr front;
    QueuePtr rear;
}LinkQueue;

void initQueue(LinkQueue &Q){
    Q.front = (QNode*)malloc(sizeof(QNode));
    if(!Q.front){
        exit(0);
    }
    Q.rear = Q.front;
    Q.front->next = NULL;
}

void destroyQueue(LinkQueue &Q){
    while(Q.front){
        Q.rear = Q.front->next;
        free(Q.front);
        Q.front = Q.rear;
    }
}

void enQueue(LinkQueue &Q, int e){
    QNode *node=(QNode*)malloc(sizeof(QNode));
    if(!node){
        exit(0);
    }else{
        node->next = NULL;
        node->data = e;
        Q.rear->next = node;
        Q.rear = node;
    }
}

void deQueue(LinkQueue &Q, int &e){
    if(Q.front == Q.rear){
        exit(0);
    }else{
        QNode *p = Q.front->next;
        e = p->data;
        if(Q.rear == p){
            Q.rear = Q.front;
        }else{
            Q.front->next = p->next;
        }
        free(p);
    }
}

#endif /* Queue_h */
