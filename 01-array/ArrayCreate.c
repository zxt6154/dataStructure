//
// Created by alice on 2022/5/27.
//

#include <stdlib.h>
#include "ArrayCreate.h"

Array array_create(int init_size) {
    Array array;
    array.size = init_size;
    array.array = (int*)malloc(sizeof(int)*array.size);
    return array;
}

void array_free(Array *array) {
    free(array -> array);
    array -> array = NULL;
    array->size = 0;
}

int array_size(const Array *array) {
    return array -> size;
}

int* array_at(Array *array, int index) {
    return &(array -> array[index]);
}

//可变增长
void array_inflate(Array *array, int more_size) {
    //int newSize = array->size + more_size;
    array->size += more_size;

    int *p = (int*) malloc(sizeof(int)*(array->size + more_size));

}