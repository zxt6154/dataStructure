//
// Created by alice on 2022/5/16.
//

#include "BaseC.h"
#include <stdio.h>

int sushuSum();
int isSushu(int i);

int main () {
    int sum = sushuSum();
    printf("%d", sum);
}



int sushuSum() {
    int m, n, i;
    int cnt = 0;
    int sum = 0;

    scanf("%d %d", &m, &n);
    for(i = m; i < n; i++) {
        sum += isSushu(i);
    }
    return sum;
}

int isSushu(int num) {
/**
 * 素数
 */
    //   scanf("%d", &num);
    int i;
    int isPrime = 1;
    for (i = 2; i < num; i++) {
        if(num%i == 0) {
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 1) {
        printf("是素数");
        return num;
    } else {
        printf("不是素数");
        return 0;
    }
}
