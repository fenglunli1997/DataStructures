#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "../../Sort.h"

class BubbleSort: public Sort {
public:

    BubbleSort(int array[], int length);

    void sort(int array[]) override;
};

#endif