#include <iostream>
#include "src/Test/Sort/testSort.h"
#include "src/Test/Stack/testStack.h"
using std::cin;
using std::cout;
using std::endl;

int main() {
    int choice;
    cout<<"请选择要测试的数据结构：1.栈；2.排序：";
    cin>>choice;
    switch (choice) {
    case 1:
        testStack();
        break;
    case 2:
        testSort();
        break;
    default:
        break;
    }
    return 0;
}