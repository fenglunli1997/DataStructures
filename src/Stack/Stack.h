//
// Created by fll on 2020/6/1.
//

#ifndef DATASTRUCTURES_STACK_H
#define DATASTRUCTURES_STACK_H

#define MAXSIZE 10
#define ElemType int

typedef struct {
    ElemType array[MAXSIZE];
    int top;
} stack;

class Stack{
private:
    stack s;

    stack init();
public:
    Stack();

    Stack(ElemType* arr);

    bool isEmpty();

    int getSum();

    ElemType pop(ElemType& e);

    void push(ElemType e);

    ElemType* popAll();

    void print();

    ElemType* desc();
};

void testStack();

#endif //DATASTRUCTURES_STACK_H
