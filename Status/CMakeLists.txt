# 生成一个静态库，因为所有其他数据结构都会引用这个库
add_library(Scanf_lib Status.c Status.h ../01-fundementary/pointer_c/CPointer.c ../01-fundementary/pointer_c/CPointer.h)