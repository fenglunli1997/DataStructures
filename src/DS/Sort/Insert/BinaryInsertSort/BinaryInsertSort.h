//
// Created by fll on 2020/7/2.
//

#ifndef DATASTRUCTURES_BINARYINSERTSORT_H
#define DATASTRUCTURES_BINARYINSERTSORT_H

#include "../../Sort.h"

class BinaryInsertSort: public Sort {
private:

    void binaryCompare(int* array, int length, int start, int end, int val);

public:

    void sort(int array[]) override;

    BinaryInsertSort(int array[], int length);

};


#endif //DATASTRUCTURES_BINARYINSERTSORT_H
