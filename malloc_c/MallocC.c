//
// Created by alice on 2022/5/19.
//

#include "MallocC.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void malloctest() {
    int number;
    int *numai; 
    printf("输入数量： ");
    scanf("%d",&number);
    int ai[number];
    numai = (int*)malloc(number* sizeof(int ));

    for (int i = 0; i < number; i++) {
        scanf("%d", &numai[i]);
    }

    for (int j = number-1; j >= 0; j--) {
        printf("%d\n", numai[j]);
    }
    int *temp = numai++;
    free(temp);

}
