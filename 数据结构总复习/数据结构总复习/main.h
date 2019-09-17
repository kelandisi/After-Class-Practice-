#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
void BubbleSort(int* a, int size);
void Print(int a[], int size);
void Swap(int &a,int &b);
int BinarySearch(int *a, int size, int key);


struct Seqlist
{
	int *array;
	int size;
	int capacity;
};
void Initseq(Seqlist *seq);
void Frontpush(Seqlist *seq, int val);
void Bcakpush(Seqlist *seq, int val);
void Frontpop(Seqlist *seq);
void Backpop(Seqlist *seq);
void Insert(Seqlist *seq, int val, int index);
void Delete(Seqlist *seq, int index);
void Printseq(Seqlist *seq);
void Deleteoneval(Seqlist *seq, int val);
void Distroy(Seqlist *seq);
void DeleteAllval(Seqlist *seq, int val);
int Find(Seqlist *seq, int val);


