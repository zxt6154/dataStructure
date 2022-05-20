//
// Created by alice on 2022/5/19.
//

#include "StrC.h"
#include <stdio.h>
#include <string.h>


void getputchar() {
//    int ch;
//    while ((ch = getchar()) != EOF) {
//        putchar(ch);
//    }

    char s1[] = "abc";
    char s2[] = "Abc1qweq";//Abc1qweq
    printf("%d", mycmp(s1, s2));
}

int mycmp(const char* s1, const char* s2) {
    while (*s1 == *s2 && *s1 != '\0') {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}