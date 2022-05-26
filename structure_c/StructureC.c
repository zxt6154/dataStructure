//
// Created by alice on 2022/5/20.
//c语言中枚举定义符号量
//

#include "StructureC.h"
#include <stdio.h>


void initDate(struct date *today) {
    //1.
    // *today = (struct date){20, 5, 2022};
    //2.
    //struct date thisMonth = {.month = 05, .day = 2022};


    printf("指针测试  \n %i-%i-%i \n", today->year, today->month, today->day);

    (*today).day = 31;
    today->month = 5;
    today->year = 2022;

}















void demo01() {
    //const int red = 0;
    //const int yellow = 1;
    //const int green = 2;
    enum COLOR {RED, YELLO, GREEN};
    enum COLOR color = -1;
    char *colorName = NULL;
    printf("输入你喜欢的颜色的代码: ");

    scanf("%d", &color);
    switch (color) {
        case RED: colorName = "red";
            break;
        case YELLO: colorName = "yellow";
            break;
        case GREEN: colorName = "green";
            break;
        default: colorName = "unknown";
            break;
    }

    printf("你喜欢的颜色是%s\n", colorName);

}