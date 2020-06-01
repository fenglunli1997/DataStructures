#include <iostream>
#include "BubbleSort.h"
#include "../../Common/Commons.h"
using std::cin;
using std::cout;
using std::endl;

int * BubbleSort::sort(int array[]){
    for(int i=size; i>0; i--){
        for (int j=1; j<i; j++){
            if(array[j-1] > array[j]){      //保持右边的元素比左边的都大
                swap(array[j], array[j-1]);
            }
        }
    }
    result = array;
    if(isDesc){
        desc();
    }
    return result;
}

void BubbleSort::desc(){
    descSort(result);
}

BubbleSort::BubbleSort() {}

BubbleSort::BubbleSort(int array[]){
    BubbleSort(array, 0, false);
}
BubbleSort::BubbleSort(int array[], int size){
    BubbleSort(array, size, false);
};
BubbleSort::BubbleSort(int array[], int size, bool isDesc){
    this->size = size;
    this->isDesc = isDesc;
    sort(array);
};

int * BubbleSort::getSort(){
    return result;
}
void BubbleSort::print(){
    printSort(isDesc, size, result);
}

int testBubbleSort(){
    cout << "请输入待排序长度:";
    int size;
    cin >> size;
    if(size == 0){
        return 0;
    }
    cout << "接下来请输入" << size << "个待排序元素:" << endl;
    int array[size];
    for(int i=0; i<size; i++){
        cin >> array[i];
    }
    cout<<"输入排序方式，1代表从大到小:";
    int choice;
    cin>>choice;
    BubbleSort b(array, size, choice==1);
    b.print();
    return 0;
}