#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 13; i+=2)
	{
		for (j = 1; j <=i; j += 1)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 11; i >= 1; i -= 2)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
