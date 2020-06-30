//
// Created by fll on 2020/6/30.
//

#include "Sort.h"
#include "../Common/Commons.h"

Sort::Sort(int array[], int length){
    setLength(length);
    setOrder(false);
}

void Sort::sort(int array[]){
    //待继承
}

void Sort::print() {
    printSort(getResult(), getOrder(), getLength());
}

void Sort::desc(){
    setOrder(true);
    descSort(getResult(), getLength());
}

void Sort::setResult(int* r){
    this->result = r;
}

int * Sort::getResult(){
    return result;
}

void Sort::setLength(int l){
    this->length = l;
}

int Sort::getLength() const {
    return length;
}

void Sort::setOrder(bool b){
    this->order = b;
}

bool Sort::getOrder() const{
    return this->order;
}
