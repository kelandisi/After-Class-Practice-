#define _CRT_SECURE_NO_WARNINGS 1
#include"main.h"
using namespace std;
void ensure(Seqlist *seq)
{
	if ((seq->size) > (seq->capacity))
	{
		int newcapacity = 2 * seq->capacity;
		int *newarray = (int*)malloc(sizeof(int)*newcapacity);
		for (int i = 0; i = seq->size; i++)
		{
			newarray[i] = seq->array[i];
		}
		free(seq->array);
		seq->array = newarray;
	}
	else
	{
		return;
	}
}
void Printseq(Seqlist *seq)
{
	for (int i = 0; i < seq->size; i++)
	{
		cout << seq->array[i] << " ";
	}
	cout << endl;
}
void Print(int a[],int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void Swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void BubbleSort(int* a, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j + 1])
				Swap(a[j], a[j + 1]);
		}
	}
}

int BinarySearch(int *a, int size,int key)
{
	int left = 0;
	int right = size - 1;
	while (left < right)
	{
		int mid = (right - left) / 2 + left;
		if (a[mid] < key)
			left = mid;
		if (a[mid]> key)
			right = mid;
		if (a[mid]==key)
			return mid;
	}
	return -1;
}

void Initseq(Seqlist *seq)
{
	seq->array = (int*)malloc(sizeof(int) * 16);
	seq->size = 0;
	seq->capacity = 16;
}

void Frontpush(Seqlist *seq, int val)
{
#if 0
	for (int i = seq->size - 1; i >= 0; i--)
	{
		seq->array[i + 1] = seq->array[i];
	}
	seq->array[0] = val;
	seq->size++;
#endif
	Insert(seq, val,0);
}

void Bcakpush(Seqlist *seq, int val)
{
#if 0
	seq->array[seq->size] = val;
	seq->size++;
#endif
	Insert(seq, val, seq->size);
}

void Frontpop(Seqlist *seq)
{
#if 0
	for (int i = 0; i < seq->size; i++)
	{
		seq->array[i] = seq->array[i + 1];
	}
	seq->size--;
#endif
	Delete(seq, 0);
}

void Backpop(Seqlist *seq)
{
	//seq->size--;
	Delete(seq, seq->size);
}

void Insert(Seqlist *seq, int val, int index)
{
	if (index<0 || index>seq->size)
	{
		cout << "下标不合法！" << endl;
		return;
	}
	ensure(seq);
	for (int i = seq->size-1; i >= index; i--)
	{
		seq->array[i + 1] = seq->array[i];
	}
	seq->array[index] = val;
	seq->size++;
}

void Delete(Seqlist *seq, int index)
{
	for (int i = index; i <= seq->size-2; i++)
	{
		seq->array[i] = seq->array[i + 1];
	}
	seq->size--;
}

void Deleteoneval(Seqlist *seq, int val)
{
	for (int i = 0; i < seq->size; i++)
	{
		if (seq->array[i] == val)
		{
			Delete(seq, i);
			break;
		}
	}
}

void DeleteAllval(Seqlist *seq, int val)			//开辟额外空间存放
{
	int *exter = (int*)malloc(sizeof(int)*seq->size);
	int j = 0;
	for (int i = 0; i <= seq->size; i++)
	{
		if (seq->array[i] != val)
			exter[j++] = seq->array[i];
	}
	free(seq->array);
	seq->array = exter;
	seq->size = j;
}
void Distroy(Seqlist *seq)
{
	free(seq->array);
	seq->size = 0;
	seq->capacity = 0;
}
int Find(Seqlist *seq, int val)
{
	for (int i = 0; i < seq->size; i++)
	{
		if (seq->array[i] == val)
			return i;
	}
	return -1;
}