#define _CRT_SECURE_NO_WARNINGS 1
#include"seqlist.h"
#define DEFAULT_CAPACITY 16
static void EnsureCapacity(Seqlist* seq)			//����
{
	if (seq->size < seq->array)
	{
		return;
	}
	else
	{
		int newcapacity = 2 * seq->capacity;
		int *newarray = (int *)malloc(sizeof(int) * newcapacity);
		for (int i = 0; i < seq->size; i++)
		{
			newarray[i] = seq->array[i];
		}
		free(seq->array);
		seq->array = newarray;
	}
}
void SeqlistRemove(Seqlist *seq, int val)
{
	int index = FindSeqlist(seq, val);
	if (index != -1)
	{
		DeleteSeqlist(seq, index);
	}
}	
void SeqlistRemoveAll(Seqlist *seq, int val)
{
	int *extra = (int *)malloc(sizeof(int)* seq->size);
	int j = 0;
	// ʱ�䣺O(n)
	for (int i = 0; i < seq->size; i++) {
		if (seq->array[i] != val) {
			extra[j++] = seq->array[i];
		}
	}

	// ɾ��֮��˳����л�ʣ���ٸ�����j ����
	free(seq->array);
	seq->array = extra;
	seq->size = j;
	/*int index;
	while ((index = FindSeqlist(seq, val)) != -1)
	{
		DeleteSeqlist(seq, index);
	}*/
}
void InitSeqlist(Seqlist* seq)                    //��ʼ��
{
	seq->array = (int*)malloc(sizeof(int)*DEFAULT_CAPACITY);
	seq->capacity = DEFAULT_CAPACITY;
	seq->size = 0;	
}

void PrintSeqlist(Seqlist* seq)                   //��ӡ  
{
	for (int i = 0; i < seq->size; i++)
	{
		printf("%d  ", seq->array[i]);
	}
	printf("\n");
}

void PushBackSeqlist(Seqlist* seq,int val)        //β��
{
#if 0
	seq->array[seq->size] = val;
	seq->size++;
#endif
	InsertSeqlist(seq, seq->size, val);
}


void PushFrontSeqlist(Seqlist* seq, int val)      //ͷ��
{
#if 0
	for (int i = seq->size-1; i >= 0; i--)
	{
		seq->array[i + 1] = seq->array[i];
	}
	seq->array[0] = val;
	seq->size++;
#endif
	InsertSeqlist(seq, 0, val);
}
void InsertSeqlist(Seqlist* seq, int index, int val)//�����±��
{
	if (index > seq->size || index < 0)
	{
		printf("�Ƿ���\n");
		return;
	}
	EnsureCapacity(seq);
	for (int i = seq->size - 1; i >=index ; i--)
	{
		seq->array[i + 1] = seq->array[i];
	}
	seq->array[index] = val;
	seq->size++;
}
void PopFrontSeqlist(Seqlist* seq)					//ͷɾ
{
	assert(seq->size > 0);
#if 0
	for (int i = 0; i < seq->size - 1; i++)
	{
		seq->array[i] = seq->array[i + 1];
	}
	seq->size--;
#endif
	DeleteSeqlist(seq, 0);
}
void PopBackSeqlist(Seqlist* seq)					//βɾ
{
	assert(seq->size > 0);
	//seq->size--;
	DeleteSeqlist(seq, seq->size);
}
void DeleteSeqlist(Seqlist* seq, int index)			//�����±�ɾ
{
	assert(seq->size > 0);
	for (int i = index; i < seq->size - 1; i++)
	{
		seq->array[i] = seq->array[i + 1];
	}
	seq->size--;
}
void DestroySeqList(Seqlist* seq)					//����
{
	free(seq->array);
	seq->capacity = 0;//�ɼӿɲ���
	seq->size = 0;    //�ɼӿɲ���
}
int FindSeqlist(Seqlist* seq, int val)  
{
	for ( int i = 0; seq->size; i++)
	{
		if (seq->array[i] == val)
			return i;
	}
	return -1;
}
