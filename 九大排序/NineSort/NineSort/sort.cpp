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
void Swap(int &x,int &y)
{
	int tmp = x;
	x = y;
	y = tmp;
}
void BubbleSort(int* array, int size)	//√∞≈›≈≈–Ú
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

void InsertSortGap(int* array, int size, int gap)   //÷±Ω”≤Â»Î≈≈–Ú
{
	for (int i = 0; i < size; i++)
	{
		int k = array[i];
		int j;
		for (j = i - gap; j >= 0 && array[j]>k; j-=gap)
		{
			array[j + gap] = array[j];
		}
		array[j + gap] = k;
	}
}


void ShellSort(int* array, int size)				//œ£∂˚≈≈–Ú
{
	int gap = size;
	while (1)
	{
		gap = gap / 2;//gap = gap/ 3 + 1
		InsertSortGap(array, size, gap);
		if (gap == 1)
		{
			break;
		}	
	}
}

	
void SelectSort(int* a, int size)					//÷±Ω”—°‘Ò≈≈–Ú
{
	for (int i = 0; i < size; i++)
	{
		int max = 0;
		for (int j = 1; j < size - i; j++)
		{
			if (a[j] > a[max])
			{
				max=j;
			}
		}
		Swap(a[max], a[size - i - 1]);
	}
}



