#define _CRT_SECURE_NO_WARNINGS 1
#include"seqlist.h"
#define CAPACITY_DEFLOUT 16
static void ensureCapacity(Seqlist *seq) {
	if (seq->size < seq->capacity) {
		// 容量够用
		return;
	}

	// 1. 找新房子
	// 通常来说，新申请的房子是原来的 1.5 或者 2 倍
	int newCapacity = 2 * seq->capacity;
	int *newArray = (int *)malloc(sizeof(int)* newCapacity);
	// 2. 全家老小搬家
	for (int i = 0; i < seq->size; i++) {
		newArray[i] = seq->array[i];
	}
	// 3. 退掉老房子
	free(seq->array);
	// 4. 发朋友圈
	seq->array = newArray;
}
void InitSeqlist(Seqlist* seq)
{
	seq->array = (int*)malloc(sizeof(int)*CAPACITY_DEFLOUT);
	seq->size = 0;
	seq->capacity = CAPACITY_DEFLOUT;
}
void Print(Seqlist* seq)
{
	for (int i = 0; i < seq->size; i++)
	{
		printf("%d ", seq->array[i]);
	}
	printf("\n");
}
void FrontPushSeqlist(Seqlist* seq,int val)
{
	for (int i = seq->size; i >= 0; i--)
		seq->array[i + 1] = seq->array[i];
	seq->array[0] = val;
	seq->size++;
}
void BackPushSeqlist(Seqlist* seq, int val)
{
	seq->array[seq->size++] = val;
}
void InsertSeqlist(Seqlist* seq, int index, int val)
{
	
	if (index > seq->size && index < 0)
	{
		printf("非法！\n");
	}
	ensureCapacity(seq);
	for (int i = seq->size; i>=index; i--)
	{
		seq->array[i + 1] = seq->array[i];
	}
	seq->array[index] = val;
	seq->size++;
}
void FrontPopSeqlist(Seqlist* seq)
{
	if (seq->size == NULL)
	{
		return;
	}
	for (int i = 0; i < seq->size; i++)
	{
		seq->array[i] = seq->array[i + 1];
	}
	seq->size--;
}
void BackPopSeqlist(Seqlist* seq)
{
	if (seq->size == NULL)
	{
		return;
	}
	seq->size--;
}
void DeleteSeqlist(Seqlist* seq, int index)
{
	if (seq->size == NULL)
	{
		return;
	}
	for (int i = index; i < seq->size; i++)
	{
		seq->array[i] = seq->array[i + 1];
	}
	seq->size--;
}
int SeqListFind(Seqlist* seq, int val)
{
	for (int i = 0; i < seq->size; i++)
	{
		if (seq->array[i] == val)
			return i;
	}
	return -1;
}
void SeqListRemove(Seqlist* seq, int val)
{
	int index = SeqListFind(seq, 2);
	if (index != -1)
	{
		DeleteSeqlist(seq, index);
	}
}
void SeqListRemoveAll(Seqlist* seq, int val)
{
	/*int index;
	while ((index = SeqListFind(seq, 2)) != -1)
	{
		DeleteSeqlist(seq, index);
	}*/


	//开辟额外空间
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
int SeqListSize(Seqlist*seq)
{
	return seq->size;
}
int SeqListCapacity(Seqlist* seq)
{
	return seq->capacity;
}
bool SeqListEmpty(Seqlist* seq)
{
	if (seq->size == 0)
	{
		return true;
	}
	return false;
}
int SeqListFront(Seqlist* seq)
{
	return seq->array[0];
}

int SeqListBack(Seqlist* seq)
{
	return seq->array[seq->size-1];
}