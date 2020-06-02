#ifndef BUBBLESORT_H
#define BUBBLESORT_H
//#define MAXSIZE 100
class BubbleSort {
private:
    int *result{};
    int size;
    bool order{};//排序方式:true:从大到小(默认false从小到大)

    void sort(int array[]);

    void setOrder(bool b);

public:

    explicit BubbleSort(int array[]);

    bool getOrder() const;

    int *getSort();

    void print();

    void desc();
};

int testBubbleSort();

#endif