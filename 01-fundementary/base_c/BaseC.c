//
// Created by alice on 2022/5/16.
//

#include "BaseC.h"
#include <stdio.h>


void cheer(int a, int b) {
    int swap = a;
    a = b;
    b = swap;

    printf("%d %d", a, b);
}
int main () {
//    int sum = sushuSum();
//    printf("%d", sum);
//    int a = 2;
//    int b = 3;
//    cheer(a, b);

    arrtest();
}



int sushuSum()  {
    int m, n, i;
    int cnt = 0;
    int sum = 0;

    scanf("%d %d", &m, &n);
    for(i = m; i < n; i++) {
        sum += isSushu(i, cnt);
    }
    printf("素数个数: %d\n", cnt);
    return sum;
}

int isSushu(int num, int cnt) {
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
        //printf("是素数");
        cnt++;
        return num;
    } else {
        //printf("不是素数");
        return 0;
    }
}

int arrtest() {

    int arrs[4];

    int x = 0;
    int cnt = 0;
    int sum = 0;

//    scanf("%d", &x);
    while (cnt < 4) {
        scanf("%d", &x);
        arrs[cnt] = x;
        cnt++;
        sum += x;

        printf("----%d-----\n", cnt);
        printf("%d\n", arrs[cnt-1]);
        printf("测试%d\n", sum);
    }
    printf("final%d\n", sum);

}

