#ifndef BUBBLESORT_H
#define BUBBLESORT_H
class BubbleSort {
private:
    int *result;
    int size;
    bool isDesc;//排序方式:true:从大到小(默认false从小到大)

    int *sort(int array[]);

    void desc();

public:
    BubbleSort();

    BubbleSort(int array[]);

    BubbleSort(int array[], int size);

    BubbleSort(int array[], int size, bool isDesc);

    int *getSort();

    void print();

//    int test();
};

int testBubbleSort();

#endif