#include "BubbleSort.h"
#include "../../Common/Commons.h"

void BubbleSort::bubble_sort(int array[]){
    for(int i=getLength(); i>0; i--){
        for (int j=1; j<i; j++){
            if(array[j-1] > array[j]){      //保持右边的元素比左边的都大
                swap(array[j], array[j-1]);
            }
        }
    }
    result = array;
}

void BubbleSort::desc(){
    setOrder(true);
    descSort(result, getLength());
}

BubbleSort::BubbleSort(int array[], int length){
    this->length = length;
    setOrder(false);
    bubble_sort(array);
}

void BubbleSort::setOrder(bool b){
    this->order = b;
}

bool BubbleSort::getOrder() const{
    return this->order;
}

int BubbleSort::getLength() const {
    return length;
}

int * BubbleSort::getSort(){
    return result;
}

void BubbleSort::print(){
    printSort(result, getOrder(), getLength());
}