/**
 * Created by alice on 2022/5/16.
 * 求符合给定条件的整数集
 * 给定不超过6的正整数A，考虑从A开始的连续4个数字，请输出所有由它们组成的无重复数字的三位数
 */
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int i, j, k;
    int cnt = 0;

    i = a;
    while (i <= a+3) {
        j = a;
        while (j <= a+3) {
            k = a;
            while (k <= a+3) {
                if(i != j) {
                    if(i != k) {
                        if(j != k) {
                            cnt++;
                            printf("%d%d%d",i,j,k);
                            if(cnt == 6){
                                printf("\n");
                                cnt = 0;
                            } else {
                                printf(" ");
                            }
                        }
                    }
                }
                k++;
            }
            j++;
        }
        i++;
    }

    return 0;
}
