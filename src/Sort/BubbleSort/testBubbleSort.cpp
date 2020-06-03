//
// Created by fll on 2020/6/2.
//
#include <iostream>
#include "BubbleSort.h"
#include "../../Common/Commons.h"
using std::cin;
using std::cout;
using std::endl;

int testBubbleSort(){
    cout << "请输入待排序长度:";
    int length;
    cin >> length;
    if(length == 0){
        return 0;
    }
    cout << "接下来请输入" << length << "个待排序元素:" << endl;
    int array[length];
    for(int i=0; i<length; i++){
        cin >> array[i];
    }
    printArray(array, length);
    std::string str = "输入排序方式，1代表从大到小，0为退出:";
    cout<<str;
    int choice;
    while(cin>>choice && choice!=0){
        BubbleSort b(array, length);
        if (choice==1)
            b.desc();
        b.print();
        cout<<endl<<str;
    }
    return 0;
}
