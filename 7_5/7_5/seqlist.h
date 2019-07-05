#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
struct Seqlist
{
	int* arrary;
	int capacity;
	int size;
};
typedef struct Seqlist Seqlist;
void InitSeqlist(Seqlist *p);
void Pushfront(Seqlist *p, int val);
void PrintSeqlist(Seqlist *p);
void Pushback(Seqlist *p, int val);
void Insert(Seqlist *p, int index, int val);
void Popfront(Seqlist *p);
void Popback(Seqlist *p);
void EraseSeqlist(Seqlist *p, int index);

