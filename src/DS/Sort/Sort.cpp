//
// Created by fll on 2020/6/30.
//

#include "Sort.h"
#include "../../Common/Commons.h"
using std::cout;

Sort::Sort(int array[], int length){
    setLength(length);
    setOrder(false);
}

void Sort::sort(int array[]){
    //待继承
}

void Sort::print() {
    cout << (getOrder() ? "从大到小" : "从小到大") << "的排列是:{";
    int l = getLength();
    int *r = getResult();
    for(int i=0; i<l; i++){
        cout<<r[i];
        if(i!=l-1){
            cout<<",";
        }else{
            cout<<"}";
            return ;
        }
    }
}

void Sort::desc(){
    setOrder(!getOrder());
    ::desc(getResult(), getLength());
}

void Sort::setResult(int* r){
    this->result = r;
}

int * Sort::getResult(){
    return result;
}

void Sort::setLength(int l){
    this->length = l;
}

int Sort::getLength() const {
    return length;
}

void Sort::setOrder(bool b){
    this->order = b;
}

bool Sort::getOrder() const{
    return this->order;
}

ostream &operator<<(ostream &output, Sort &s){
//    cout << (s.getOrder() ? "从大到小" : "从小到大") << "的排列是:{";
//    int length = s.getLength();
//    int *result = s.getResult();
//    for(int i=0; i<length; i++){
//        cout<<result[i];
//        if(i!=length-1){
//            cout<<",";
//        }else{
//            cout<<"}";
//            return output;
//        }
//    }
//    return output;
    s.print();
    return output;
}
