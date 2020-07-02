//
// Created by fll on 2020/6/1.
//
#include <iostream>
#include "Stack.h"
#include "../../Common/Commons.h"
using std::cin;
using std::cout;
using std::endl;

Stack::Stack() {
    init();
}

Stack::Stack(ElemType* arr, int length){
    init();
    quickInit(arr, length);
}

void Stack::init(){
    s.top = -1;
}

void Stack::quickInit(ElemType* arr, int length){
    for (int i = 0; i < length; ++i) {
        push(arr[i]);
    }
}

bool Stack::isEmpty() const{
    return s.top == -1;
}

int Stack::getSum() const{
    return s.top + 1;
}

ElemType Stack::pop(ElemType& e){
    e = s.array[s.top--];
    return e;
}

void Stack::push(ElemType e){
    s.array[++s.top] = e;
}

ElemType* Stack::popAll(){
    static ElemType* result;
    int i = 0;
    while (!isEmpty()){
        pop(result[i++]);
    }
    return result;
}

void Stack::print(){
    ::print(popAll(), getSum());
}
