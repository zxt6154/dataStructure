//
// Created by alice on 2022/5/15.
//

#ifndef SQLIST_H
#define SQLIST_H

#include <stdio.h>
#include <stdlib.h>     //提供malloc, free, exit原型
#include "Status.h"

/* 宏定义 */
#define LIST_INIT_SIZE 100  //顺序表存储空间的初始分配值
#define LISTINCRMENT 10     //顺序表存储空间的分配增量

/* 顺序表元素类型定义 */
typedef  int ElemType;


