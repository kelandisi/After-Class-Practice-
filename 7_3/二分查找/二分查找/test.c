#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int BinarySearch(int arr[], int size,int k)
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int mid = (left+right)/2;//��ֹ�������
		if (k > arr[mid])
		{
			left = mid + 1;
		}
		if (k < arr[mid])
		{
			right = mid - 1;
		}
		if (k == arr[mid])
		{
			return mid;
		}	
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int value = 5;
	int size = sizeof(arr) / sizeof(int);
	int ret=BinarySearch(arr, size,value);
	if (ret == -1)
	{
		printf("�Ҳ���value\n");
		
	}
	else
	{
		printf("value���±���%d\n", ret);
	}
	system("pause");
	return 0;
}