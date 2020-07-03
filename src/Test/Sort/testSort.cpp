//
// Created by fll on 2020/6/2.
//
#include <iostream>
#include "../../DS/Sort/Sort.h"
#include "../../DS/Sort/Swap/BubbleSort/BubbleSort.h"
#include "../../DS/Sort/Select/SimpleSelect/SimpleSelect.h"
#include "../../DS/Sort/Insert/DirectInsertSort/DirectInsertSort.h"
#include "../../DS/Sort/Insert/BinaryInsertSort//BinaryInsertSort.h"
#include "../../Common/Commons.h"

using std::cin;
using std::cout;
using std::endl;

#define str_order_rule "输入排序方式，1代表从大到小，0为退出:"
#define str_sort_type "请输入排序类型：1.冒泡排序;2.简单插入排序;3.直接插入排序;4.折半插入排序"

void fun(Sort sort){
    int choice;
    while(cin>>choice && choice!=0){
        if ((choice==1 || sort.getOrder()) && !(choice==1 && sort.getOrder()))//true的情况：01\10
            sort.desc();
//        sort.print();
        cout<<sort;
        cout<<endl<<str_order_rule;
    }
}

int testSort(){
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
    print(array, length);
    cout << endl << str_sort_type;
    int sort_type;
    cin >> sort_type;
    cout << str_order_rule;
    switch (sort_type) {
        case 1:
            fun(BubbleSort(array, length));
            break;
        case 2:
            fun(SimpleSelect(array, length));
            break;
        case 3:
            fun(DirectInsertSort(array, length));
            break;
        case 4:
            fun(BinaryInsertSort(array, length));
            break;
        default:
            fun(Sort(array, length));
            break;
    }
    return 0;
}
