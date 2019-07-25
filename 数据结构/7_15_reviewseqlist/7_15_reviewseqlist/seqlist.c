#define _CRT_SECURE_NO_WARNINGS 1
#include"seqlist.h"
#define DEFAULT_CAPACITY 16
static void Ensure(Seqlist* seq)
{
	if (seq->size < seq->capacity)
	{
		return;
	}
	else
	{
		int newcapacity = seq->capacity * 2;
		int *newarray = (int*)malloc(sizeof(int)* newcapacity);
		for (int i = 0; i < seq->size; i++)
		{
			newarray[i] = seq->array[i];
		}
		free(seq->array);
		seq->array = newarray;
	}
}
void Print(Seqlist* seq)
{
	for (int i = 0; i < seq->size; i++)
	{
		printf("%d  ", seq->array[i]);
	}
	printf("\n");
}
void InitSeqlist(Seqlist* seq)
{
	seq->array = (int*)malloc(sizeof(int)*DEFAULT_CAPACITY);
	seq->capacity = DEFAULT_CAPACITY;
	seq->size = 0;
}
void FrontPush(Seqlist* seq,int val)
{
	for (int i = seq->size-1; i >= 0; i--)
	{
		seq->array[i + 1] = seq->array[i];
	}
	seq->array[0] = val;
	seq->size++;
}
void BackPush(Seqlist* seq, int val)
{
	seq->array[seq->size] = val;
	seq->size++;
}
void FrontPop(Seqlist* seq)
{
	assert(seq->size > 0);
	for (int i = 0; i < seq->size - 1; i++)
	{
		seq->array[i] = seq->array[i + 1];
	}
	seq->size--;
}
void BackPop(Seqlist* seq)
{
	assert(seq->size > 0);
	seq->size--;
}
void Insert(Seqlist* seq, int index, int val)
{
	if (index > seq->size || index < 0)
	{
		printf("非法!\n");
		return;
	}
	Ensure(seq);
	for (int i = seq->size-1; i >= index; i--)
	{
		seq->array[i+1] = seq->array[i];
	}
	seq->array[index] = val;
	seq->size++;
}
void Delete(Seqlist* seq, int index)
{
	assert(seq->size > 0);
	for (int i = index; i < seq->size - 1; i++)
	{
		seq->array[i] = seq->array[i + 1];
	}
	seq->size--;
}
void Destroy(Seqlist* seq)
{
	free(seq->array);
}
int Find(Seqlist *seq, int val)
{
	for (int i = 0; i < seq->size; i++)
	{
		if (seq->array[i] == val)
			return i;
	}
	return - 1;
}
void DelOneVal(Seqlist* seq, int val)
{
	int index = Find(seq, val);
	Delete(seq, index);
}
void DelAllVal(Seqlist* seq, int val)
{
	//方法一：(时间复杂度较高：o（n2））
#if 0
	int index;
	while ((index=Find(seq,val))!=-1)
	{
		Delete(seq, index);
	}
#endif
	//方法二：（开辟新空间：降低时间复杂度，用空间换时间）
	int *extra = (int*)malloc(sizeof(int)*seq->size);
	int j = 0;
	for (int i = 0; i < seq->size; i++)
	{
		if (seq->array[i] != val)
		{
			extra[j++] = seq->array[i];
		}
	}
	free(seq->array);
	seq->array = extra;
	seq->size = j;
}
