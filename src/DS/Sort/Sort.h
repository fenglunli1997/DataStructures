//
// Created by fll on 2020/6/30.
//

#ifndef DATASTRUCTURES_SORT_H
#define DATASTRUCTURES_SORT_H

#include <iostream>
using std::ostream;

class Sort {
private:
    int *result;
    int length;
    bool order;//排序方式:true:从大到小(默认false从小到大)

public:

    Sort(int array[], int length);

    virtual void sort(int array[]);

    void print();

    void desc();

    void setResult(int* r);

    int *getResult();

    void setLength(int l);

    int getLength() const ;

    void setOrder(bool b);

    bool getOrder() const;

    friend ostream &operator<<(ostream &output, Sort &s);

};


#endif //DATASTRUCTURES_SORT_H
