//
// Created by alice on 2022/6/5.
//

#include "SortsAndSearch.h"
#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int len) {

    int cnt = 0;
    for (int j = len - 1; j >= 0; j--) {
        int flag = 0;
        for (int i = 0; i < len - 1; i++) {
            if(arr[i] > arr[i+1]) {
                swap(&arr[i], &arr[i+1]);
                cnt++;
                flag = 1 ;
            }
        }
        if (flag == 0) {
            break;
        }
    }
    printf("测试交换 %d\n", cnt);
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
    int cnt = 0;
    for (int i = 1; i <= len-1; i++) {
        int temp;
        temp = arr[i];
        for (int j = i; j > 0 && arr[i-1] > temp; i--) {
            arr[i] = arr[i-1];
            arr[i-1] = temp;
            cnt++;
        }
    }
    printf("测试交换 %d\n", cnt);
    for (int k = 0; k <= len - 1; k++) {
        printf("%d\n", arr[k]);
    }
}

void shell_sort(int arr[], int len) {
    for (int d = len/2; d > 0 ; d/=2) {
        for (int i = d; i < len; i++) {
            int temp = arr[i];
            for (int j = i; j >= d && arr[i-d] > temp; j-=d) {
                arr[i] = arr[i-d];
                arr[i] = temp;
            }
        }
    }
}

void sel_sort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        //从i-len - 1找最小元，再将其位置赋给minPosition

        //将未排序部分放到有序部分的最后位
    }
}

//void heap_sort(int arr[], int len) {
//    for(int i = len/2; i >= 0; i--) {
//
//    }
//
//    for (int j = len - 1; j > 0 ; j--) {
//
//    }
//}

void merge_sort(int arr[], int len) {
    int *tempArr;
    tempArr = malloc(len * sizeof(int ));
    if (tempArr != NULL) {
        mSort(arr, tempArr, 0, len-1);
        //malloc 释放！！！
        free(tempArr);
    }
    //else Error()
};

/**
 * 归并排序
 * @param arr
 * @param arrTemp
 * @param liftIndex
 * @param rightIndex
 */
//void mSort(int arr[], int arrTemp[], int leftIndex, int rightIndex) {
//    //记录中间位置
//    int center;
//    if() {
//
//    }
//
//}