#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void PrintArr(int sz,int arr[])
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void BubbleSort(int sz, int arr[])
{
	int tmp = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
	BubbleSort(sz, arr);
	PrintArr(sz,arr);
	system("pause");
	return 0;
}