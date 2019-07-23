#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h> 
typedef struct Heap
{
	int *array;
	int size;
	int capacity;
}Heap;