#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
struct Seqlist
{
	int*  array;
	int	  capacity;
	int   size;
};
typedef struct Seqlist Seqlist;

void InitSeqlist(Seqlist* seq);
void PrintSeqlist(Seqlist* seq);
void PushBackSeqlist(Seqlist* seq,int val);
void PushFrontSeqlist(Seqlist* seq, int val);
void InsertSeqlist(Seqlist* seq, int index, int val);
void PopFrontSeqlist(Seqlist* seq);
void PopBackSeqlist(Seqlist* seq);
void DeleteSeqlist(Seqlist* seq, int index);
void DestroySeqList(Seqlist* seq);
