#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
using namespace std;
void bubblesort(int *a , int size);
void print(int *a, int size);
int binarysearch(int *a, int size, int val);
struct Seqlist
{
	int *array;
	int size;
	int capcity;
};
void seqinit(Seqlist *seq);
void pushhead(Seqlist *seq, int val);
void printseq(Seqlist *seq);
void pushback(Seqlist *seq, int val);
void insert(Seqlist *seq, int index, int val);
void pophead(Seqlist *seq);
void popback(Seqlist *seq);
void deleteseq(Seqlist *seq,int index);