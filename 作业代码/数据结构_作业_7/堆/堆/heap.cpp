#define _CRT_SECURE_NO_WARNINGS 1
#include"heap.h"
void Print(Heap* heap)						//打印堆
{
	for (int i = 0; i < heap->_size; i++)
	{
		printf("%d ", heap->_array[i]);
	}
	printf("\n");
}
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void heapify(int *a,int index,int size)
{
	int left = index * 2 + 1;
	int right = index * 2 + 2;
	if (left >= size)				//如果是叶子结点，就直接返回
		return;
	int min = left;
	if (a[min] > a[index])
		return;
	if (right < size && a[right] < a[min])
		min = right;
	swap(a + index, a + min);
	heapify(a, min,size);
}
void adjustUp(int *a, int index)
{
	while (index > 0)
	{
		if (index == 0)
			return;
		int parent = (index - 1) / 2;
		if (a[index] >= a[parent])
			return;
		swap(a + index, a + parent);
		index = parent;
	}
}
void CreatHeap(Heap* hp, int* array, int size)
{
	hp->_array = (int*)malloc(sizeof(int)*size);
	memcpy(hp->_array, array, sizeof(int)*size);
	hp->_size = size;
	hp->_capacity = size;
	for (int i = ((size - 2) / 2); i >= 0; i--)
	{
		heapify(hp->_array,i,hp->_size);
	}
}
void InsertHeap(Heap* hp, DataType data)
{
	if (hp->_size >= hp->_capacity)
	{
		int newcapacity = hp->_capacity * 2;
		hp->_array = (int*)realloc(hp->_array, sizeof(int)*newcapacity);
	}
	hp->_array[hp->_size++] = data;
	adjustUp(hp->_array, hp->_size-1);
}
void EraseHeap(Heap* hp)	//先把堆顶元素和最后一个元素互换，然后删除最后一个元素，在进行向下调整
{
	assert(hp != NULL);
	swap(&hp->_array[0], &hp->_array[hp->_size - 1]);
	hp->_size--;
	heapify(hp->_array, 0, hp->_size);
}
int SizeHeap(Heap* hp)
{
	return hp->_size;
}
int EmptyHeap(Heap* hp)
{
	if (hp->_size == 0)
		return 1;
	else
		return -1;
}
DataType TopHeap(Heap* hp)
{
	return hp->_array[0];
}
void DestroyHeap(Heap* hp)
{
	free(hp->_array);
	hp->_size = 0;
	hp->_capacity = 0;
}