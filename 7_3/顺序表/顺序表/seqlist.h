#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
struct Seqlist
{
	int*   arrry;   //��¼���ݴ�ŵĵ�ַ
	int    capacity;//��¼������
	int    size;    //��¼��ŵ���������
};
typedef struct Seqlist Seqlist;//��struct Seqlis������Seqlist	

void SeqlistInit(Seqlist *seq);
void PushbackSeqlist(Seqlist *seq,int val);
void SeqlistPrint(Seqlist *seq);
void PushfrontSeqlist(Seqlist *seq, int val);
void PopfrontSeqlist(Seqlist *seq);
void PopbackSeqlist(Seqlist *seq);
void EraseSealist(Seqlist *seq, int index);

