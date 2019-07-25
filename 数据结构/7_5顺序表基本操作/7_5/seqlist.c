#define _CRT_SECURE_NO_WARNINGS 1
#include"seqlist.h"
#define DEFAULT_CAPACITY 16
void InitSeqlist(Seqlist *p)
{
	p->arrary = (int*)malloc(sizeof(int)*DEFAULT_CAPACITY);
	p->capacity = DEFAULT_CAPACITY;
	p->size = 0;
}
void Insert(Seqlist *p, int index, int val)
{
	if (index > p->size || index < 0)
	{
		printf("ÊäÈë·Ç·¨£¡\n");
	}
	else
	{
		for (int i = p->size-1; i>=index; i--)
		{
			p->arrary[i+1] = p->arrary[i];
		}
		p->arrary[index] = val;
		p->size++;
	}
}
void Pushfront(Seqlist *p, int val)
{
#if 0
	for (int i = p->size - 1; i >= 0; i--)
	{
		p->arrary[i + 1] = p->arrary[i];
	}
	p->arrary[0] = val;
	p->size++;
#endif
	Insert(p, 0, val);
}
void PrintSeqlist(Seqlist *p)
{
	for (int i = 0; i < p->size; i++)
	{
		printf("%d  ", p->arrary[i]);
	}
	printf("\n");
}
void Pushback(Seqlist *p, int val)
{
#if 0
	p->arrary[p->size] = val;
	p->size++;
#endif
	Insert(p,p->size,val);

}
void Popfront(Seqlist *p)
{
	for (int i = 0; i < p->size - 1; i++)
	{
		p->arrary[i] = p->arrary[i + 1];
	}
	p->size--;
}
void Popback(Seqlist *p)
{
	p->size--;
}
void EraseSeqlist(Seqlist *p, int index)
{
	assert(p->size > 0);
	{
		for (int i = index; i <= p->size - 2; i++)
			p->arrary[i] = p->arrary[i + 1];
		p->size--;
	}
}
