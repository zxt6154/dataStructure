//
// Created by alice on 2022/5/26.
//

#include <printf.h>
#include "Union.h"

int main(int argc, char const *argv[]){
    CHI chi;
    chi.i = 1234;
    for (int j = 0; j < sizeof(int); j++) {
        printf("%02hhX", chi.ch[j]);
        printf("\n");
    }
    printf("\n");

    return 0;
}