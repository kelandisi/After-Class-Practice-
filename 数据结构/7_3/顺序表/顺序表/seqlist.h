#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
struct Seqlist
{
	int*   arrry;   //记录数据存放的地址
	int    capacity;//记录总容量
	int    size;    //记录存放的数据数量
};
typedef struct Seqlist Seqlist;//把struct Seqlis改名成Seqlist	

void SeqlistInit(Seqlist *seq);
void PushbackSeqlist(Seqlist *seq,int val);
void SeqlistPrint(Seqlist *seq);
void PushfrontSeqlist(Seqlist *seq, int val);
void PopfrontSeqlist(Seqlist *seq);
void PopbackSeqlist(Seqlist *seq);
void EraseSealist(Seqlist *seq, int index);

