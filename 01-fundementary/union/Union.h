//
// Created by alice on 2022/5/26.
//

#ifndef CLION_UNION_H
#define CLION_UNION_H

#endif //CLION_UNION_H

typedef union {
    int i;
    char ch[sizeof(int)];
} CHI;


void filesDemo();