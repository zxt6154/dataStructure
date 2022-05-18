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

    return 0;
}

int search(int key, int a[], int length) {
    int ret = -1;

    for (int i = 0; i < length; i++) {
        if(a[i] == key) {
            ret = i;
            break;
        }
    }
    return ret;
}

int arrCalculate() {

    int arr[] = {1, 23, 9, 8, 3, 12, 11, 19, 4, 17};

    int x;

    printf("请输入一个数字\n");
    scanf("%d", &x);
    int loc = search(x, arr, sizeof(arr)/sizeof(arr[0]));

    if (loc != -1){
        printf("存在 -> %d", loc);
    } else {
        printf("不存在");
    }

    return 0;
}