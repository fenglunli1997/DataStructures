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

int min(int a, int b);

int max(int a, int b);

void insert(int* array, int length, int position, int val);

void desc(ElemType* result, int length);

void print(ElemType* arr, int length);

#endif //DATASTRUCTURES_COMMONS_H
