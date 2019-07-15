#define _CRT_SECURE_NO_WARNINGS 1
#include"Seqlist.h"
#define CAPACITY_DEFAULT 16
static void Expension(Seqlist* seq)
{
	if (seq->size < seq->capacity) 
	{
		return;
	}
	int newcapacity = seq->capacity * 2;					//���·���					
	int*  newarray = (int*)malloc(sizeof(int)*newcapacity);	//Ϊ�·��ӿ��ٿռ�
	for (int i = 0; i < seq->size; i++)
	{
		newarray[i] = seq->array[i];						//���
	}
	free(seq->array);										//�˵��Ϸ���
	seq->array = newarray;								//���·���������
}
void PrintSeqlist(Seqlist* seq)
{
	for (int i = 0; i < seq->size; i++)
	{
		printf("%d  ", seq->array[i]);
	}
	printf("\n");
}
void InitSeqlist(Seqlist* seq)
{
	seq->array = (int*)malloc(sizeof(int)*CAPACITY_DEFAULT);
	seq->capacity = CAPACITY_DEFAULT;
	seq->size = 0;
}
void FrontPush(Seqlist* seq, int val)
{	
#if 0
	for (int i = seq->size-1; i >= 0; i--)
	{
		seq->array[i + 1] = seq->array[i];
	}
	seq->array[0] = val;
	seq->size++;
#endif
	Insert(seq, 0,val);
}
void BackPush(Seqlist* seq, int val)
{
#if 0
	seq->array[seq->size] = val;
	seq->size++;
#endif
	Insert(seq, seq->size, val);
}
void FrontPop(Seqlist* seq)
{
#if 0
	assert(seq->size > 0);
	for (int i = 0; i < seq->size - 1; i++)
	{
		seq->array[i] = seq->array[i + 1];
	}
	seq->size--;
#endif
	Delete(seq, 0);
}
void BackPop(Seqlist* seq)
{
#if 0
	assert(seq->size > 0);
	seq->size--;
#endif
	Delete(seq, seq->size);
}
void Insert(Seqlist* seq, int index, int val)
{
	if (index > seq->size || index < 0)
	{
		printf("�Ƿ���\n");
		return;
	}
	Expension(seq);
	{
		for (int i = seq->size; i >= index; i--)
		{
			seq->array[i + 1] = seq->array[i];
		}
		seq->array[index] = val;
		seq->size++;
	}
}
void Delete(Seqlist* seq, int index)
{
	assert(seq->size > 0);
	for (int i = index; i < seq->size; i++)
	{
		seq->array[i] = seq->array[i + 1];
	}
	seq->size--;
}
void Destroy(Seqlist* seq)
{
	free(seq->array);
}
int Find(Seqlist* seq, int val)
{
	for (int i = 0; i < seq->size; i++)
	{
		if (seq->array[i] == val)
		{
			return i;
		}
	}
	return -1;
}
void DelOneval(Seqlist* seq, int val)
{
	int index = Find(seq, val);
	if (index != -1)
	{
		Delete(seq, index);
	}
}
void DelAllval(Seqlist* seq, int val)
{
#if 0 //ʱ�临�ӶȽϸ�
	int index;
	while ((index = Find(seq,val))!=-1)
	{
		Delete(seq, index);
	}
#endif
	//���ٶ���ռ�
	int *extra = (int*)malloc(sizeof(int)*seq->size);
	int j = 0;
	for (int i = 0; i < seq->size; i++)
	{
		if (seq->array[i] != val)
		{
			extra[j++] = seq->array[i];
		}
	}
	free(seq->array);			//��seq->array�ͷŵ�
	seq->array = extra;			//��extra����Ϊseq->array
	seq->size = j;				//ɾ���˳����л��� j ��size
}