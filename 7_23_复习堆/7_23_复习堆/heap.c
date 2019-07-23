#define _CRT_SECURE_NO_WARNINGS 1
#include"heap.h"
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
void heapify(int *a, int size,int index)		//���µ���
{
	int left = index * 2 + 1;
	int right = index * 2 + 2;
	if (left >= size)
		return;
	int min = left;
	if (right < size && a[right] < a[left])
		min = right;
	if (a[index] < a[min])
		return;
	
	swap(a+index, a+min);
	heapify(a, size, min);
}
void adjustup(int *a, int index)
{
	while (index > 0)
	{
		if (index == 0)
			return;
		int parent = (index - 1) / 2;
		if (a[index] >= a[parent])
			return;
		swap(&a[index], &a[parent]);
		index = parent;
	}
}
void Createheap(Heap* heap, int *a, int size)		//��ʼ����
{
	heap->array = (int*)malloc(sizeof(int)*size);
	memcpy(heap->array, a, sizeof(int)*size);
	heap->size = size;
	heap->capacity = size;
	for (int i = (size - 1 - 1) / 2; i >= 0; i--)
	{
		heapify(heap->array, heap->size, i);
	}
}
void Pushheap(Heap* heap, int val)				//����
{
	if (heap == NULL)
	{
		return;
	}
	if (heap->size == heap->capacity)
	{
		int newcapacity = heap->capacity * 2;
		heap->array = (int*)realloc(heap->array, newcapacity*sizeof(int));
		//heap->capacity = newcapacity;
	}

	heap->array[heap->size++] = val;
	adjustup(heap->array, heap->size - 1);
}
void Delete(Heap* heap)						//ɾ���Ѷ�Ԫ��
{
	if (heap == NULL)
		return;
	swap(&heap->array[0], &heap->array[heap->size - 1]);
	heap->size--;
	heapify(heap->array, heap->size, 0);

}
int SizeHeap(Heap* heap)					// ��ȡ���е�Ԫ�صĸ���
{
	return heap->size;
}
int TopHeap(Heap* heap)						//��ȡ�Ѷ�Ԫ��
{
	return heap->array[0];
}
bool EmptyHeap(Heap* heap)					// �����Ƿ�Ϊ��
{
	if (heap->size == 0)
	{
		return true;
	}
	return false;
}
void Print(Heap* heap)						//��ӡ��
{
	for (int i = 0; i < heap->size; i++)
	{
		printf("%d ", heap->array[i]);
	}
	printf("\n");
}
void DestroyHeap(Heap* heap)				//���ٶ�
{
	free(heap->array);
	heap->capacity = 0;
	heap->size = 0;
}
void test()
{
	Heap heap;
	int a[] = { 9,8,4,5,7,6,1,5,3,2 };
	int size = sizeof(a) / sizeof(int);
	Createheap(&heap,a,size);
	Pushheap(&heap, 11);
	Print(&heap);
	Delete(&heap);
	Print(&heap);
	printf("����Ԫ�ظ���Ϊ %d \n",SizeHeap(&heap));
	printf("�Ѷ�Ԫ��Ϊ %d \n",TopHeap(&heap));
	if (EmptyHeap(&heap))
		printf("��Ϊ��\n");
	printf("�Ѳ�Ϊ��\n");
}