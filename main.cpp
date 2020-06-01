#include <iostream>
#include "src/Sort/BubbleSort/BubbleSort.h"
#include "src/Stack/Stack.h"
using std::cin;
using std::cout;
using std::endl;

int main() {
    int choice;
    cout<<"请选择要测试的数据结构：1.栈；2.冒泡排序：";
    cin>>choice;
    switch (choice) {
    case 1:
        testStack();
        break;
    case 2:
        testBubbleSort();
        break;
    default:
        break;
    }
    return 0;
}