#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
#define DEFAULT_CAPACITY 16
void SeqlistInit(Seqlist *seq)
{
	seq->arrry = (int*)malloc(sizeof(int)*DEFAULT_CAPACITY);
	seq->capacity = DEFAULT_CAPACITY;
	seq->size = 0;
}
void SeqlistInsert(Seqlist *seq,int index, int val)//�����±��
{
	if (index<0 || index>seq->size)
	{
		printf("�±�Ƿ���\n");
		return;
	}
	else
	{
		for (int i = seq->size-1; i >= index; i--)
		{
			seq->arrry[i + 1] = seq->arrry[i];
		}
		seq->arrry[index] = val;
		seq->size++;
	}
}
void PushbackSeqlist(Seqlist *seq,int val)  //β��
{
	/*seq->arrry[seq->size] = val;
	seq->size++;*/
	SeqlistInsert(seq,0,val);
}
void PushfrontSeqlist(Seqlist *seq, int val)//ͷ��
{
	/*for (int i = seq->size-1; i >= 0; i--)
	{
		seq->arrry[i + 1] = seq->arrry[i];
	}
	seq->arrry[0] = val;
	seq->size++;*/
	SeqlistInsert(seq, seq->size, val);

}


void SeqlistPrint(Seqlist *seq)     //��ӡ
{
	for (int i = 0; i < seq->size; i++)
	{
		printf("%d  ", seq->arrry[i]);
	}
	printf("\n");
}

void PopfrontSeqlist(Seqlist *seq)  //ͷɾ
{
	assert(seq->size > 0);
	for (int i = 0; i <=seq->size-1; i++)
	{
		seq->arrry[i] = seq->arrry[i + 1];
	}
	seq->size--;
}
void PopbackSeqlist(Seqlist *seq)   //βɾ
{
	assert(seq->size > 0);
	seq->size--;
}
void EraseSealist(Seqlist *seq, int index) //�����±�ɾ
{
	assert(seq->size > 0);
	for (int i = index; i <= seq->size - 1; i++)
	{
		seq->arrry[i] = seq->arrry[i + 1];
	}
	seq->size--;
}