#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void Print(int array[],int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
}
Swap(int *a, int *b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
冒泡排序：
	(1).时间复杂度：  最好O(n)：      最坏：O(n^2)      平均：O(n^2)
	(2).空间复杂度：  O(1)
	(3).稳定性：稳定
*/
void BubbleSort(int array[],int size)
{
	int i = 0;
	int j = 0;
	int flag = 1;
	for (i = 0; i < size; i++)
	{
		//无序区间：[0,size-i)    冒泡在无序区间中
		//有序区间：[size-i,size)	
		for (j = 0; j < size- i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				Swap(&array[j],&array[j + 1] );
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}

/*
	直接插入排序：
		(1).时间复杂度：  最好O(n)：      最坏：O(n^2)
		(2).空间复杂度：  O(1)
		(3).稳定性：稳定
*/
void InsertSort(int *a, int size)
{
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		//无序区间：[i,size)
		//有序区间：[0,i)
		int k = a[i];
		for (j = i - 1; j >= 0 && k < a[j]; j--)
		{
			a[j + 1] = a[j];
		}
		a[j + 1] = k;
	}
}
/*
	希尔排序：
		(1).时间复杂度：  最好O(n)：      最坏：O(n^2)
		(2).空间复杂度：  O(1)
		(3).稳定性：不稳定
*/
void ShellSort(int *a, int size)	
{
	int gap = size;
	while (1)
	{
		gap = gap / 2;		//也可以是gap=gap/3+1
		for (int i = 0; i < size; i++)
		{
			int k = a[i];
			int j = 0;
			for (j = i - gap; j >= 0 && k < a[j]; j-= gap)
			{
				a[j + gap] = a[j];
			}
			a[j + gap] = k;
		}
		if (gap == 1)
		{
			break;
		}
	}
}
/*
	选择排序：
		(1).时间复杂度：  O(n)
		(2).空间复杂度：  O(1)
		(3).稳定性：不稳定
*/
void SelectSort(int *a, int size)
{
	int left = 0;
	int right = size - 1;
	while (left < right)
	{
		int min = left;
		int max = left;
		for (int i = left + 1; i <= right; i++)
		{
			if (a[i] < a[min])
				min = i;
			if (a[i] > a[max])
				max = i;
		}
		Swap(a + min, a + left);
		if (max == left)
		{
			max = min;
		}
		Swap(a + max, a + right);
		left++;
		right--;
	}
}
/*
	堆排序(建大堆)：
		(1).时间复杂度： 建堆：O(n)   最后：O（n*log（n））
		(2).空间复杂度：  O（1）
		(3).稳定性：不稳定
*/
void heapify(int *a, int index, int size)
{
	int left = index * 2 + 1;
	int right = index * 2 + 2;
	if (left >= size)
		return;
	int max = left;
	if (right<size && a[right]>a[left])
	{
		max = right;
	}
	if (a[index] >= a[max])
		return;
	Swap(a + index, a + max);
	heapify(a, index, max);
}
void CreateHeap(int *a, int size)
{
	for (int i = (size - 2) / 2; i >= 0; i--)
	{
		heapify(a, i, size);
	}
}
void HeapSort(int *a, int size)
{
	CreateHeap(a, size);
	for (int i = 0; i < size; i++)
	{
		//无序区间：[0，size-i）
		Swap(&a[0], &a[size - i - 1]);//将堆顶的数字和无序区间最后一个数字进行交换
		//无序区间：[0，size-i-1）
		heapify(a, 0, size - i - 1);
	}
}
/*
	快速排序：
		(1).时间复杂度：
		(2).空间复杂度：
		(3).稳定性：不稳定
*/
#if 0
int partition1(int *a, int left, int right)		//Hover法
{
	int begin = left;
	int end = right;
	int pivot = a[right];
	while (begin < end)
	{
		while (begin < end && a[begin] <= pivot)
		{
			begin++;
		}
		while (begin < end && a[end] >= pivot)
		{
			end--;
		}
		Swap(a + begin, a + end);
	}
	Swap(a + begin, a + right);
	return begin;
}
#endif
int partition2(int *a, int left, int right)		//挖坑法
{
	int begin = left;
	int end = right;
	int pivot = a[right];
	while (begin < end)
	{
		while (begin < end && a[begin] <= pivot)
		{
			begin++;
		}
		a[end] = a[begin];
		while (begin < end && a[end] >= pivot)
		{
			end--;
		}
		a[begin] = a[end];	
	}
	a[begin] = pivot;
	return begin;
}
void _QuickSort(int *a, int left, int right)
{
	if (left >= right)
		return;
	int pivotIndex = partition2(a, left, right);
	_QuickSort(a, left, pivotIndex-1);
	_QuickSort(a, pivotIndex+1, right);
}
void QuickSort(int *a, int size)
{
	_QuickSort(a, 0, size - 1);
}

int main()
{
	int array[] = { 11,8,9,1,4,6,3,7,2,5 };
	int size = sizeof(array) / sizeof(array[0]);
	//BubbleSort(array,size);
	//InsertSort(array, size);
	//ShellSort(array, size);
	//SelectSort(array, size);
	//HeapSort(array, size);
	QuickSort(array,size);
	Print(array,size);
	system("pause");
	return 0;
}