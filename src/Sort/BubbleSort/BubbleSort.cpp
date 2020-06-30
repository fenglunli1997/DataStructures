#include "BubbleSort.h"
#include "../../Common/Commons.h"

BubbleSort::BubbleSort(int array[], int length) : Sort(array, length) {
    //先调用父类的构造函数，设置length和order
    sort(array);    //报错无视
}

void BubbleSort::sort(int array[]){
    for(int i=getLength(); i>0; i--){
        for (int j=1; j<i; j++){
            if(array[j-1] > array[j]){      //保持右边的元素比左边的都大
                swap(array[j], array[j-1]);
            }
        }
    }
    setResult(array);
}