#define _CRT_SECURE_NO_WARNINGS 1
//编程计算一个a[3][4]数组的最小值所在位置，输出该位置以及a[3][4]矩阵。要求初始化矩阵
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int i = 0; 
	int j = 0;
	int min = a[0][0];
	int mini = 0;
	int minj = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (a[i][j] < min)
			{
				min = a[i][j];
				mini = i;
				minj = j;
			}
		}
	}
	printf("数组的最小值为%d，位于第%d行，第%d列\n", min, mini, minj);
	system("pause");
	return 0;
}




