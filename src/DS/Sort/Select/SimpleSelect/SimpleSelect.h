//
// Created by fll on 2020/5/30.
//

#ifndef DATASTRUCTURES_SIMPLESELECT_H
#define DATASTRUCTURES_SIMPLESELECT_H


#include "../../Sort.h"

class SimpleSelect: public Sort{
public:

    void sort(int array[]) override;

    SimpleSelect(int array[], int length);
};


#endif //DATASTRUCTURES_SIMPLESELECT_H
