#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct Seqlist
{
	int* array;
	int capacity;
	int size;
}Seqlist;
void PrintSeqlist(Seqlist* seq);
void InitSeqlist(Seqlist* seq);
void FrontPush(Seqlist* seq, int val);
void BackPush(Seqlist* seq, int val);
void FrontPop(Seqlist* seq);
void BackPop(Seqlist* seq);
void Insert(Seqlist* seq, int inedx, int val);
void Delete(Seqlist* seq, int index);