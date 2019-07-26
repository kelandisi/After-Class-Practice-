#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<iostream>
using namespace std;
typedef int DataType;
typedef struct Heap
{
	DataType* _array;
	int _capacity;
	int _size;
}Heap;

//打印堆
void Print(Heap* heap);
// 创建堆 
void CreatHeap(Heap* hp, int* array, int size);

// 向堆中插入值为data的元素 
void InsertHeap(Heap* hp, DataType data);

// 删除堆顶元素 
void EraseHeap(Heap* hp);

// 获取堆中有效元素个数 
int SizeHeap(Heap* hp);

// 检测堆是否为空 
int EmptyHeap(Heap* hp);

// 获取堆顶元素 
DataType TopHeap(Heap* hp);

// 销毁堆 
void DestroyHeap(Heap* hp);