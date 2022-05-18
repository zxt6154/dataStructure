//
// Created by alice on 2022/5/18.
//

#include "PointC.h"
#include <stdio.h>


int divide(int a, int b, int *result) {
    int ret = 1;
    if(b == 0) {ret = 0;}
    else { *result = a/b; }
    return ret;
}
void divideMain() {
    int a = 5;
    int b = 2;
    int c;
    if (divide(a, b, &c) == 1) {
        printf("%d/%d=%d\n", a, b, c);
    }
}




void minmax(int arr[], int len, int *min, int *max) {

    *min = *max = arr[0];
    for (int i = 0; i < len; ++i) {
        if( arr[i] < *min) {
            *min = arr[i];
        }
        if( arr[i] > *max) {
            *max = arr[i];
        }

    }
}
void minmaxMain() {
    int arr[] = {1,2,3,4,5,6,7,11,13,15,17,22,34};
    int min, max;
    minmax(arr, sizeof(arr)/ sizeof(arr[0]), &min, &max);
    printf("min=%d, max=%d\n", min, max);
   // return;
}


void f(int *p) {
    printf(" p = %p\n ", p);
    printf(" *p = %d\n ", *p);
    *p = 29;
}
void g(int k) {
    printf(" k = %d\n ", k);
}
