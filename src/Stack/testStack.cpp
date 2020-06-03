//
// Created by fll on 2020/6/2.
//
#include <iostream>
#include "Stack.h"
#include "../Common/Commons.h"
using std::cin;
using std::cout;
using std::endl;

void testStack(){
    std::string str = "请输入选择："
                      "1->入栈；"
                      "2->出栈；"
                      "3->全部出栈；"
                      "4->全部逆序出栈；"
                      "5->当前是否为空；"
                      "6->当前元素个数"
                      "7->连续入栈：";
    Stack s;
    cout << str;
    int choice;
    ElemType e;
    while (cin>>choice){
        if (choice == 1){
            cout<<"请输入入栈元素：";
            cin>>e;
            s.push(e);
        } else if (choice == 2){
            s.pop(e);
            cout<<"出栈元素为："<<e<<endl;
        } else if (choice == 3){
            s.print();
            return;
        } else if (choice == 4){
//            descArray(s);
//            printArray(s.desc());
            return;
        } else if (choice == 5){
            cout<<(s.isEmpty() ? "已空" : "非空")<<endl;
        } else if (choice == 6){
            cout<< s.getSum() <<endl;
        } else if (choice == 7){
            ElemType arr[MAXlength];
            int e, i = 0;
            while (cin>>e && e!=0){
                arr[i++] = e;
            }
            s.quickInit(arr, i);
        }
        cout << str;
    }
}
