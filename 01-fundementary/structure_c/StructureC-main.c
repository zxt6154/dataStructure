#include "StructureC.h"
#include <stdio.h>

//
// Created by alice on 2022/5/20.
//
int main(int argc, char const *argv[]){
    //demo01();
//    struct date today;
//    today.day = 20;
//    today.month = 5;
//    today.year = 2022;

    struct date today = {1, 1, 2022};
    initDate(&today);

    //printf("%i-%i-%i", today.year, today.month, today.day);
    printf("%i-%i-%i", today.year, today.month, today.day);
}