#define _CRT_SECURE_NO_WARNINGS 1
//计算一个4 * 4矩阵的主对角线的元素之和以及最大元素的值。要求初始化矩阵, 输出计算结果并输出该矩阵
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	int i = 0;
	int j = 0;
	int max = 0;
	int sum = 0;
	for (i = 0; i < 4; i++)
	{
		sum = arr[i][i] + sum;
		max = arr[0][0];
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (arr[i][j]>max)
			{
				max = arr[i][j];
			}
		}
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%-3d", arr[i][j]);
		}
		printf("\n");
	}
	printf("sum=%d max=%d",sum,max);
	system("pause");
	return 0;
}