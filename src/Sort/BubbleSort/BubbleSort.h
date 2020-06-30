#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "../Sort.h"

//#define MAXlength 100
class BubbleSort: public Sort {
public:

    BubbleSort(int array[], int length);

    void sort(int array[]) override;
};

int testBubbleSort();

#endif