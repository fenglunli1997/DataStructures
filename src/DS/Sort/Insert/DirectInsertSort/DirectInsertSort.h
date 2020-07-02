//
// Created by fll on 2020/7/2.
//

#ifndef DATASTRUCTURES_DIRECTINSERTSORT_H
#define DATASTRUCTURES_DIRECTINSERTSORT_H

#include "../../Sort.h"

class DirectInsertSort: public Sort {
public:
    void sort(int array[]) override;

    DirectInsertSort(int array[], int length);
};


#endif //DATASTRUCTURES_DIRECTINSERTSORT_H
