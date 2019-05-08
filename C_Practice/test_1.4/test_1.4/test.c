#define _CRT_SECURE_NO_WARNINGS 1
//输入三个正整数x, y, z，将这三个数由小到大输出。
#include<stdio.h>
#include<stdlib.h>

//数组存放数字形式,用冒泡排序法
//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0;
//	int j = 0; 
//	int tmp = 0;
//	printf("请输入3个数字:");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

//直接输入3个数，用交换的的方法排序
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int tmp = 0;
	printf("请输入三个数字:");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		a = a^b;
		b = a^b;
		a = a^b;
	}
	if (a > c)
	{
		a = a^c;
		c = a^c;
		a = a^c;
	}
	if (b > c)
	{
		b = b^c;
		c = b^c;
		b = b^c;
	}
	printf("%d %d %d", a, b, c);
	system("pause");
	return 0;
}
