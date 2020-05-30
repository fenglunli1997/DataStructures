#include <iostream>
#include "BubbleSort.h"
using std::cin;
using std::cout;
using std::endl;

void BubbleSort::swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

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
    for(int i=0; i<size/2; i++){
        swap(result[i], result[size-i-1]);
    }
    // isDesc = !isDesc;
}


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

//int main(){
//    // int a[5] = {2,3,1,4,9};
//    cout << "请输入待排序长度:";
//    int size;
//    cin >> size;
//    cout << "接下来请输入" << size << "个待排序元素:" << endl;
//    int array[size];
//    for(int i=0; i<size; i++){
//        cin >> array[i];
//    }
//    cout<<"输入排序方式，1代表从大到小:";
//    int choice;
//    cin>>choice;
//    BubbleSort b(array, size, choice==1);
//    b.print();
//    return 0;
//}