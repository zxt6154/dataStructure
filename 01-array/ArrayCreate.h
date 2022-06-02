//
// Created by alice on 2022/5/27.
//

#ifndef _ARRAY_H_
#define _ARRAY_H_

typedef struct {
    int *array;
    int size;
} Array;

Array array_create(int init_size);
void array_free(Array *array);
int array_size(const Array *array);
int* array_at(Array *array, int index);
void array_inflate(Array *array, int more_size);


#endif //_ARRAY_H_
