#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef struct Seqlist
{
	int* array;
	int size;
	int capacity;
}Seqlist;
void InitSeqlist(Seqlist* seq);
void Print(Seqlist* seq);
void FrontPushSeqlist(Seqlist* seq,int val);
void BackPushSeqlist(Seqlist* seq,int val);
void InsertSeqlist(Seqlist* seq, int index, int val);
void FrontPopSeqlist(Seqlist* seq);
void BackPopSeqlist(Seqlist* seq);
void DeleteSeqlist(Seqlist* seq, int index);
int SeqListFind(Seqlist* seq, int val);
void SeqListRemove(Seqlist* seq, int val);
void SeqListRemoveAll(Seqlist* seq, int val);
int SeqListSize(Seqlist*seq);
int SeqListCapacity(Seqlist* seq);
bool SeqListEmpty(Seqlist* seq);
int SeqListFront(Seqlist* seq);
int SeqListBack(Seqlist* seq);

