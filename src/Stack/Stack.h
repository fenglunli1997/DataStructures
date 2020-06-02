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
    stack s{};

    void init();
public:
    Stack();

    explicit Stack(ElemType* arr);

    void quickInit(ElemType* arr);

    bool isEmpty() const;

    int getSum() const;

    ElemType pop(ElemType& e);

    void push(ElemType e);

    ElemType* popAll();

    void print();
};

void descArray(ElemType *result);

void testStack();

#endif //DATASTRUCTURES_STACK_H
