#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void printarr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void init(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 9;
	}
}


void EmptyArry(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}


void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz-1;
	while (left < right)
	{
		int tmp = 0;
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
//逆置数组
	reverse(arr, sz);
//打印逆置后的数组（最左边的和最右边的交换，直到left=right）
	printarr(arr, sz);
	printf("\n");
//初始化数组（9）
	init(arr,sz);
//打印初始化后的数组	
	printarr(arr, sz);
	printf("\n");
//清空数组（元素全为0）	
	EmptyArry(arr, sz);
//打印清空后的数组
	printarr(arr, sz);
	system("pause");
	return 0;
}