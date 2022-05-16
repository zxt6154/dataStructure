//
// Created by alice on 2022/5/16.
//
#include <stdio.h>
int main() {
//    printf("hello world!\n");
//    printf("12+34=%d", 12+34);
    int price = 0;

    printf("请输入金额： ");
    scanf("%d", &price);

    int change = 100 - price;

    printf("找零%d元\n", change);

    return 0;
}