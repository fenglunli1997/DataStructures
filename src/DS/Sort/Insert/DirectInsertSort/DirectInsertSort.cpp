//
// Created by fll on 2020/7/2.
//

#include "DirectInsertSort.h"

void DirectInsertSort::sort(int *array) {
    int l = getLength();
    for (int i = 1; i < l; ++i) {//未排序序列，依次插入到前面,array[i]是当前比较的数
        int temp = array[i];
        for (int j = i; j > 0; --j) {//有序序列，依次被插入
            //排序
            array[j] = array[j-1];//后移一位
            if (temp > array[j]) {
                array[j] = temp;
                break;
            }
            if (j == 1) {
                array[0] = temp;
                break;
            }
        }
    }
    setResult(array);
}

DirectInsertSort::DirectInsertSort(int *array, int length) : Sort(array, length) {
    sort(array);
}
