//
// Created by fll on 2020/6/2.
//
#include <iostream>
#include "BubbleSort.h"
using std::cin;
using std::cout;
using std::endl;

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
    std::string str = "输入排序方式，1代表从大到小:";
    cout<<str;
    int choice;
    while(cin>>choice && choice!=0){
        BubbleSort b(array);
        if (choice==1)
            b.desc();
        b.print();
        cout<<endl<<str;
    }
    return 0;
}
