#include <iostream>
#include "src/Sort/BubbleSort/BubbleSort.h"
using std::cin;
using std::cout;
using std::endl;

int main() {
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
