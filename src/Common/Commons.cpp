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

int getMin(int a, int b){
    return a<b ? a : b;
}

bool isMin(int& a, int& b){
    if (a > b) {
        swap(a, b);
        return false;
    } else
        return true;
}

int getMax(int a, int b){
    return a>b ? a : b;
}

void descSort(ElemType* arr, int length){
    descArray(arr, length);
}

void printSort(int* result, bool order, int length){
    cout << (order ? "从大到小" : "从小到大") << "的排列是:{";
    for(int i=0; i<length; i++){
        cout<<result[i];
        if(i!=length-1){
            cout<<",";
        }else{
            cout<<"}";
            return;
        }
    }
}

void printArray(ElemType* arr, int length){
    cout<<"{";
    for (int i = 0; i < length; i++){
        cout << arr[i];
        if(i!=length-1){
            cout<<",";
        }else{
            cout<<"}";
            return;
        }
    }
}