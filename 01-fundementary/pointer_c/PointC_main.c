//
// Created by alice on 2022/5/18.
//

#include <printf.h>
#include "PointC.h"
#include "CPointer.h"

void main() {
    int i = point1();


}


void test2(){
    int i = 6;

//    int *p;
    int *p = (int*)0x16b16b31c;
    *p = 11;
    printf("p  %d", *p);

    printf(" p = %p\n ", &i); //取地址 0x16b16b31c

    //test1();
//    f(&i);//参数 -> 0x16b16b31c
//    g(i);
    //minmaxMain();


}