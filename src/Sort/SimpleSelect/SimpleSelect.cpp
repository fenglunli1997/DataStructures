//
// Created by fll on 2020/5/30.
//

#include "SimpleSelect.h"
#include "../../Common/Commons.h"

void SimpleSelect::sort(int *array) {
    //第i趟通过n-i次比较，在n-i+1个元素中选取最小的元素，并与第i个交换
    int min = array[0];
    int location = 0;
    int length = getLength();
    for (int i = 0; i < length; ++i) {
        min = array[i];
        location = i;
        for (int j = i+1; j < length; ++j) {
            if (min > array[j]) {
                min = array[i];
                location = i;
            }
        }
        if (min < array[i]){
            swap(array[location], array[i]);
        }
    }
    setResult(array);
}

SimpleSelect::SimpleSelect(int *array, int length) : Sort(array, length) {
    sort(array);
}
