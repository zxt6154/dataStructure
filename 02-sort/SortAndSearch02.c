//
// Created by alice on 2022/7/4.
//

#include "SortAndSearch02.h"
#include "sortsAndSearch/SortsAndSearch.h"

//pivot = 从intArr[]中选一个主元;
//将S = {intArr[] \ pivot } 分成2个独立子集;
//intArr1 intArr2 ...
void Quicksort(int intArr[], int n) {}



int median3(int intArr[], int left, int right) {

    int center = (left + right) / 2;
    if(intArr[left] > intArr[center])       swap(&intArr[left], &intArr[center]);
    if(intArr[left] > intArr[right])        swap(&intArr[left], &intArr[right]);
    if(intArr[center] > intArr[right])      swap(&intArr[center], &intArr[right]);

    return 0;
}