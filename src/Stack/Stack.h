//
// Created by fll on 2020/6/1.
//

#ifndef DATASTRUCTURES_STACK_H
#define DATASTRUCTURES_STACK_H

#define MAXlength 10
#define ElemType int

typedef struct {
    ElemType array[MAXlength];
    int top;
} stack;

class Stack{
private:
    stack s{};

    void init();
public:
    Stack();

    Stack(ElemType* arr, int length);

    void quickInit(ElemType* arr, int length);

    bool isEmpty() const;

    int getSum() const;

    ElemType pop(ElemType& e);

    void push(ElemType e);

    ElemType* popAll();

    void print();
};

void descArray(ElemType *result, int length);

void testStack();

#endif //DATASTRUCTURES_STACK_H
