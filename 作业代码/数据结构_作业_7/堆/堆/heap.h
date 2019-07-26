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

//��ӡ��
void Print(Heap* heap);
// ������ 
void CreatHeap(Heap* hp, int* array, int size);

// ����в���ֵΪdata��Ԫ�� 
void InsertHeap(Heap* hp, DataType data);

// ɾ���Ѷ�Ԫ�� 
void EraseHeap(Heap* hp);

// ��ȡ������ЧԪ�ظ��� 
int SizeHeap(Heap* hp);

// �����Ƿ�Ϊ�� 
int EmptyHeap(Heap* hp);

// ��ȡ�Ѷ�Ԫ�� 
DataType TopHeap(Heap* hp);

// ���ٶ� 
void DestroyHeap(Heap* hp);