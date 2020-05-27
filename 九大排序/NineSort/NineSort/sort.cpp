#define _CRT_SECURE_NO_WARNINGS 1
#include"Main.h"
using namespace std;
void Print(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i]<<" " ;
	}
	cout << endl;
}
void Swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
}
void BubbleSort(int* array, int size)	//冒泡排序
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
				Swap(array[j], array[j + 1]);
		}
	}
}

void InsertSort(int* a, int size)   //直接插入排序
{
	for (int i = 0; i < size; ++i)
	{
		int k = a[i];
		int j = 0;
		for (j = i - 1; j >= 0 && a[j]>k; --j)
		{
			a[j + 1] = a[j];
		}
		a[j + 1] = k;
	}
}


void ShellSort(int* a, int size)				//希尔排序
{
	int gap = size;
	while (1)
	{
		gap = gap / 2;
		for (int i = 0; i < size; ++i)
		{
			int k = a[i];
			int j = 0;
			for (j = i - gap; j >= 0 && a[j]>k; j -= gap)
			{
				a[j + gap] = a[j];
			}
			a[j + gap] = k;
		}
		if (gap == 1)
			break;
	}
}

	
//void SelectSort(int* a, int size)		//直接选择排序-----选择无序区间最小的数字与无序区间第一个交换
//{
//	for (int i = 0; i < size; ++i)
//	{
//		int min = i;
//		for (int j = i + 1; j < size; ++j)
//		{
//			if (a[min] > a[j])
//				min = j;
//		}
//		swap(a[min], a[i]);
//	}
//}

//void SelectSort(int* a, int size)		//直接选择排序-----选择无序区间最大的数字与无序区间最后一个交换
//{
//	for (int i = 0; i < size; ++i)
//	{
//		int max = 0;
//		for (int j = 1; j < size - i; ++j)
//		{
//			if (a[max] < a[j])
//				max = j;
//		}
//		Swap(a[max], a[size - i-1]);
//	}
//}

void SelectSort(int* a, int size)     //选择排序优化
{
	int left = 0;
	int right = size - 1;
	while (left<right)
	{
		int max = left;
		int min = left;
		for (int i = left+1; i <= right; i++)
		{
			if (a[i] < a[min])
				min = i;
			if (a[i] > a[max])
				max = i;
		}
		Swap(a[min], a[left]);
		if (max == left)
			max=min;
		Swap(a[max],a[right]);
		left++;
		right--;
	}
}

void Heapify(int *a, int size, int index)
{
	int left = index * 2 + 1;
	int right = index * 2 + 2;
	if (left >= size)
		return;
	int max = left;
	if (right<size && a[right]>a[max])
	{
		max = right;
	}
	if (a[index] >= a[max])
		return;
	int temp = a[index];
	a[index] = a[max];
	a[max] = temp;

	Heapify(a, size, max);

}

void CretHeap(int *a, int size)
{
	for (int i = (size - 2) / 2; i>=0; i--)
	{
		Heapify(a, size, i);
	}
}

void HeapSort(int *a, int size)
{
	CretHeap(a, size);
	for (int i = 0; i < size; i++)
	{
		int temp = a[0];
		a[0] = a[size - 1 - i];
		a[size - 1 - i] = temp;
		Heapify(a, size-1-i, 0);
	}
}

//快排  nlogn

int partition1(int *a, int left, int right)    //Hover法
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
		Swap(a[begin], a[end]);
	}
	Swap(a[begin], a[right]);
	return begin;
}

int partition2(int *a, int left, int right)   //挖坑法
{
	int begin = left;
	int end = right;
	int pivot = a[right];
	while (begin < end)
	{
		while (begin < end && a[begin] <= pivot)
			begin++;
		a[end] = a[begin];
		while (begin < end && a[end] >= pivot)
			end--;
		a[begin] = a[end];
	}
	a[begin] = pivot;
	return begin;
}



int partition3(int a[], int left, int right)    //双指针法
{
	int div = left;
	for (int i = left; i < right; i++)
	{
		if (a[i] < a[right])
		{
			Swap(a[i], a[div++]);
		}
	}
	Swap(a[div], a[right]);
	return div;
}


void _quickSort(int *a, int left, int right)
{
	if (left >= right) {
		return;
	}
	int pivotindex = partition3(a, left, right);

	_quickSort(a, left, pivotindex-1);
	_quickSort(a, pivotindex + 1, right);

}

void _quickSortNoR(int *a, int left, int right)   //非递归
{
	stack<int> st;
	st.push(left);
	st.push(right);
	while (!st.empty())
	{	
		int high = st.top(); st.pop();
		int low = st.top(); st.pop();
		if (low >= high)
			continue;
		int pivotindex = partition1(a, low, high);
		st.push(pivotindex + 1);
		st.push(high);
		st.push(low);
		st.push(pivotindex - 1);
	}
}
//计数排序


//基数排序

void quickSort(int *a, int size)
{
	//_quickSort(a, 0,size-1);
	_quickSortNoR(a, 0, size - 1);
}



