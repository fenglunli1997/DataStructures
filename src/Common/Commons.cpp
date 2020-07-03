//
// Created by fll on 2020/6/1.
//
#include <iostream>
#include "Commons.h"
#include "../DS/Stack/Stack.h"
using std::cin;
using std::cout;

void swap(int& a, int& b){
    int temp = b;
    b = a;
    a = temp;
}

int min(int a, int b){
    return a<b ? a : b;
}

int max(int a, int b){
    return a>b ? a : b;
}

void insert(int* array, int length, int position, int val){
    for (int i = length; i > position; --i) {
        array[i] = array[i-1];
    }
    array[position] = val;
}

void desc(ElemType* arr, int length){
    Stack s(arr, length);
    int i = 0;
    while (!s.isEmpty()){
        s.pop(arr[i++]);
    }
}

void print(ElemType* arr, int length){
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