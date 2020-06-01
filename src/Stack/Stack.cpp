//
// Created by fll on 2020/6/1.
//
#include <iostream>
#include "Stack.h"
#include "../Common/Commons.h"
using std::cin;
using std::cout;
using std::endl;

Stack::Stack() {
    this->s = init();
}

Stack::Stack(ElemType* arr){
    Stack();
    int length = getArrayLength(arr);
    for (int i = 0; i < length; ++i) {
        push(arr[i]);
    }
}

stack Stack::init(){
//    stack s = (stack)malloc(MAXSIZE * sizeof(ElemType));
    stack s;
    s.top = -1;
    return s;
}

bool Stack::isEmpty(){
    return s.top == -1;
}

int Stack::getSum(){
    return s.top + 1;
}

ElemType Stack::pop(ElemType& e){
    e = s.array[s.top--];
    return e;
}

void Stack::push(ElemType e){
    s.array[++s.top] = e;
}

ElemType* Stack::popAll(){
    static ElemType* result;
    int i = 0;
    while (!isEmpty()){
        pop(result[i++]);
    }
    return result;
}

void Stack::print(){
    printArray(popAll());
}

ElemType* Stack::desc() {
    static ElemType *result;
    int i = 0;
    while (!isEmpty()){
        pop(result[i++]);
    }
    return result;
}

void testStack(){
    std::string str = "请输入选择："
                  "1->入栈；"
                  "2->出栈；"
                  "3->全部出栈；"
                  "4->全部逆序出栈；"
                  "5->当前是否为空；"
                  "6->当前元素个数；"
                  "7->清空：";
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
            printArray(s.desc());
            return;
        } else if (choice == 5){
            cout<<(s.isEmpty() ? "已空" : "非空")<<endl;
        } else if (choice == 6){
            cout<< s.getSum() <<endl;
        } else if (choice == 7){
            s.clear();
        }
        cout << str;
    }
}
