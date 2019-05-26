#define _CRT_SECURE_NO_WARNINGS 1
//计算一个3 * 3矩阵的所有元素之和以及所有元素中的最大元素的值。
//要求初始化矩阵，输出计算结果并输出该矩阵
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int sum = 0;
	int max = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum = a[i][j] + sum;
			if (max < a[i][j])
			{
				max = a[i][j];
			}
		}
	}
	printf("%d %d", sum,max);
	system("pause");
	return 0;
}
