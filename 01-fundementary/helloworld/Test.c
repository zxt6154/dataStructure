//
// Created by alice on 2022/5/16.
//
#include <stdio.h>
int main() {
//    printf("hello world!\n");
//    printf("12+34=%d", 12+34);
    int price = 0;

//    printf("请输入金额： ");
//    scanf("%d", &price);
//
//    int change = 100 - price;
//
//    printf("找零%d元\n", change);

    printf("------------------");
    printf("\n");
//
//    long x;
//    int n = 0;
//
//    scanf("%d", &x);
//    n++;
//    x /= 10;
//    while (x > 0) {
//        n++;
//        x /= 10;
//    }
//    printf("%d\n", n);



/**
 * 素数
 */
    int x;
    scanf("%d", &x);
    int i;
    int isPrime = 1;
    for (i = 2; i < x; i++) {
        if(x%i == 0) {
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 1) {
        printf("是素数");
    } else {
        printf("不是素数");
    }

    return 0;
}