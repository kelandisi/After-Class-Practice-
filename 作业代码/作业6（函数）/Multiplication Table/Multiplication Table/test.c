#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void mul(int x)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d*%d=%-3d ", i, j, i*j);
		printf("\n");
	}
}
int main()
{
	int k = 0;
	scanf("%d", &k);
	mul(k);
	system("pause");
	return 0;
}