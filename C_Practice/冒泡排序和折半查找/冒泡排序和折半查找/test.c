#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//折半查找
	/*int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 17;
	int left = 0;
	int right = sizeof(a) / sizeof(a[0])-1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (k > a[mid])
		{
			left = mid + 1;
		}
		else if (k < a[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了下标是%d", mid);
			break;
		}
	}
	if (left = right)
	{
		printf("找不到！\n");
	}*/





	//冒泡排序
	int a[] = { 5,1,4,6,3,9,8,7,2 };
	int i = 0;
	int j = 0;
	int sz = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int tmp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}