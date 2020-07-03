//
// Created by fll on 2020/7/2.
//

#include "BinaryInsertSort.h"
#include "../../../../Common/Commons.h"

void BinaryInsertSort::sort(int *array) {
    int l = getLength();
    for (int i = 1; i < l; ++i) {//未排序序列，依次插入到前面,array[i]是当前比较的数
        binaryCompare(array, i, 0, i, array[i]);
    }
    setResult(array);
}

BinaryInsertSort::BinaryInsertSort(int *array, int length) : Sort(array, length) {
    sort(array);
}

//先找到插入的位置，再插入
void BinaryInsertSort::binaryCompare(int *array, int length, int start, int end, int val) {
    int mid = (start + end) / 2;
    if (mid == start) {
        insert(array, length, end, val);
        return;
    }
    if (array[mid] < val){
        binaryCompare(array, length, mid, end, val);
    } else if (array[mid] > val){
        binaryCompare(array, length, start, mid, val);
    } else{
        insert(array, length, mid, val);
        return;
    }
}
