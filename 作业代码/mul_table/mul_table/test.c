#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int k = 0;
	for (i = 1; i <= 9; i++)
	{
		for (k = 1; k <= i; k++)
		{
			printf("%d*%d=%-2d ", k, i, i*k);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}