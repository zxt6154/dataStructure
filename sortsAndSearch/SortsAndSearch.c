//
// Created by alice on 2022/6/5.
//

#include "SortsAndSearch.h"
#include <stdio.h>

void bubble_sort(int arr[], int len) {

    for (int j = len - 1; j >= 0; j--) {
        int flag = 0;
        for (int i = 0; i < len - 1; i++) {
            if(arr[i] > arr[i+1]) {
                swap(&arr[i], &arr[i+1]);
                flag = 1 ;
            }
        }
        if (flag == 0) {
            break;
        }
    }
    for (int i = 0; i <= len - 1; i++) {
        printf("%d\n", arr[i]);
    }
}

void swap(int *a1, int *a2) {
    int temp;
    temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}

void insertion_sort(int arr[], int len) {
    for (int i = 1; i <= len-1; i++) {
        int temp;
        temp = arr[i];
        for (int j = i; j > 0 && arr[i-1] > temp; i--) {
            arr[i] = arr[i-1];
            arr[i-1] = temp;
        }
    }

    for (int k = 0; k <= len - 1; k++) {
        printf("%d\n", arr[k]);
    }
}