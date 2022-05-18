#include <stdio.h>

int staticNum() {

    const int number = 10;

    int x;
    scanf("%d", &x);
    int count[number];
    for (int i = 0; i < number; i++) {
        count[i] = 0;
    }

    while (x != -1) {
        if(x >= 0 && x <= 9) {
            count[x]++;
        }
        scanf("%d", &x);
    }

    for (int j = 0; j < number; j++) {
        printf("%d:%d\n", j, count[j] );
    }
}