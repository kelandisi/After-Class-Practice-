#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	int i = 0;
	int j = 0;
	int max = 0;
	for (i = 0; i < 4; i++)
	{
		max = a[i][0];
		for (j = 0; j < 4; j++)
		{
			printf("%-3d", a[i][j]);
		}
		printf("\n");
		
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (max < a[i][j])
				max = a[i][j];
		}
	}
		printf("最大元素是%d", max);
	system("pause");
	return 0;
}




