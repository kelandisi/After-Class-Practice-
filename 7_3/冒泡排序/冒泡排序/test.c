#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void Print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}
#if 1
void swap(int arr[], int x, int y)
{
	int tmp = arr[x];
	arr[x] = arr[y];
	arr[y] = tmp;
}
#endif
void BubbleSort(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr, j, j + 1);
			/*	int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;*/
			}
		}
	}
}
int main()
{
	int arr[] = { 5,9,4,1,5,6,3,2,11,12 };
	int size = sizeof(arr) / sizeof(int);
	BubbleSort(arr,size);
	Print(arr, size);
	system("pause");
	return 0;
}