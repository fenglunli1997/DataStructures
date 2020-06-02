#include "BubbleSort.h"
#include "../../Common/Commons.h"

void BubbleSort::sort(int array[]){
    for(int i=size; i>0; i--){
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
    descSort(result);
}

BubbleSort::BubbleSort(int array[]){
    this->size = getArrayLength(array);
    setOrder(false);
    sort(array);
}

void BubbleSort::setOrder(bool b){
    this->order = b;
}

bool BubbleSort::getOrder() const{
    return this->order;
}

int * BubbleSort::getSort(){
    return result;
}
void BubbleSort::print(){
    printSort(result, getOrder());
}