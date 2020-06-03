#ifndef BUBBLESORT_H
#define BUBBLESORT_H
//#define MAXlength 100
class BubbleSort {
private:
    int *result{};
    int length;
    bool order{};//排序方式:true:从大到小(默认false从小到大)

    void bubble_sort(int array[]);

    void setOrder(bool b);

public:

    BubbleSort(int array[], int length);

    bool getOrder() const;

    int getLength() const ;

    int *getSort();

    void print();

    void desc();
};

int testBubbleSort();

#endif