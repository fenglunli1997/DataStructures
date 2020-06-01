//
// Created by fll on 2020/6/1.
//

#include <iostream>
#include "Commons.h"
#include "../Stack/Stack.h"
using std::cin;
using std::cout;

void swap(int& a, int& b){
    int temp = b;
    b = a;
    a = temp;
}

void descSort(ElemType* result){  //改用栈实现
//    for(int i=0; i<size/2; i++){
//        swap(result[i], result[size-i-1]);
//    }
    Stack s(result);
    s.desc();
}

void printSort(bool isDesc, int size, int* result){
    cout << (isDesc ? "从大到小" : "从小到大") << "的排列是:{";
    for(int i=0; i<size; i++){
        cout<<result[i];
        if(i!=size-1){
            cout<<",";
        }else{
            cout<<"}";
            return;
        }
    }
}

int getArrayLength(ElemType* arr){
    return sizeof(arr)/sizeof(arr[0]);
}

void printArray(ElemType* arr){
    int length = getArrayLength(arr);
    for (int i = 0; i < length; i++){
        cout << arr[i] << ',';
    }
}