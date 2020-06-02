//
// Created by fll on 2020/6/1.
//

#ifndef DATASTRUCTURES_COMMONS_H
#define DATASTRUCTURES_COMMONS_H
#define ElemType int

void swap(int& a, int& b);

void descSort(ElemType* result);

void printSort(int* result, bool isDesc);

//int getArrayLength(int* arr);
template<class T>
int getArrayLength(const T &arr);

void printArray(ElemType* arr);

#endif //DATASTRUCTURES_COMMONS_H
