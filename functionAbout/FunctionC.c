#include <stdio.h>
#include <math.h>

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

    int arr[] = {1, 23, 9, 8, 3, 12, 11, 19, 4, 17,};

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

int isPrime(int x) {

    int ret = 1;
    if(x == 1 || (x %2 == 0 && x != 2)) {
        ret = 0;
    }
    //for(int i = 3; i < x; i+=2) {
    for(int i = 3; i < sqrt(x); i+=2) {
        if(x%i == 0) {
            ret = 0;
            break;
        }
    }

    return ret;
}

int primeIs(int x, int knownPrimes[], int numberOfknownPrimes) {
    int ret = 1;
    for (int i = 0; i < numberOfknownPrimes;i++) {
        if(i%knownPrimes[i]) {
            ret = 0;
            break;
        }
    }
    return 0;
}
int primeMain() {
    const int number = 100;
    int primeNum[number] = {2};
    int count = 1;
    int i = 3;
    while (count < number) {
        if(primeIs(i, primeNum, count)) {
            primeNum[count++] = i;
        }
        i++;
    }

    for (i = 0; i < number; i++) {
        printf("%d", primeNum[i]);
        if((i+1)%5) printf("\t");
        else printf("\n");
    }
    return 0;
}