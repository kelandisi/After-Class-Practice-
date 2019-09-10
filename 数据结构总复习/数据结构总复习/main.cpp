#define _CRT_SECURE_NO_WARNINGS 1
#include"main.h"
void printseq(Seqlist *seq)
{
	for (int i = 0; i < seq->size; i++)
	{
		cout<<seq->array[i] << " ";
	}
	cout << endl;
}
void print(int *a, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void swap(int &i, int &j)
{
	int t = i;
	i = j;
	j = t;
}
void bubblesort(int *a, int size)
{
	for (int i = 0; i < size - i; i++)
	{
		int flag = 1;
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j+1]);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int binarysearch(int *a, int size, int val)
{
	int left = 0;
	int right = size-1;
	while (left < right)
	{
		int mid = (right+left)/2;
		if (val == a[mid])
			return mid;
		else if (val < a[mid])
			right = mid;
		else
			left = mid + 1;
	}
	return -1;
}

void seqinit(Seqlist *seq)
{
	seq->array = (int*)malloc(sizeof(int)*16);
	seq->capcity = 16;
	seq->size = 0;
}

void pushhead(Seqlist *seq, int val)
{
	for (int i = seq->size-1; i >= 0; i--)
	{
		seq->array[i + 1] = seq->array[i];
	}
	seq->array[0] = val;
	seq->size++;
}

void pushback(Seqlist *seq, int val)
{
	seq->array[seq->size] = val;
	seq->size++;
}

void insert(Seqlist *seq, int index, int val)
{
	if (index<0 || index>seq->size)
	{
		cout << "下标不合法！" << endl;
	}
	for (int i = seq->size-1; i >= index; i--)
	{
		seq->array[i + 1] = seq->array[i];
	}
	seq->array[index] = val;
	seq->size++;
}

void pophead(Seqlist *seq)
{
	for (int i = 0; i < seq->size-1; i++)
	{
		seq->array[i] = seq->array[i + 1];
	}
	seq->size--;
}

void popback(Seqlist *seq)
{
	seq->size--;
}

void deleteseq(Seqlist *seq,int index)
{
	for (int i = index; i < seq->size-1; i++)
	{
		seq->array[i] = seq->array[i + 1];
	}
	seq->size--;
}