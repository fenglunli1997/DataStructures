//
// Created by fll on 2020/6/1.
//

#ifndef DATASTRUCTURES_COMMONS_H
#define DATASTRUCTURES_COMMONS_H
#define ElemType int

void swap(int& a, int& b);

//int min(const int* array, int length);
//
//int max(const int* array, int length);

int getMin(int a, int b);

bool isMin(int& a, int& b);

int getMax(int a, int b);

void descSort(ElemType* result, int length);

void printSort(int* result, bool isDesc, int length);

void printArray(ElemType* arr, int length);

#endif //DATASTRUCTURES_COMMONS_H
