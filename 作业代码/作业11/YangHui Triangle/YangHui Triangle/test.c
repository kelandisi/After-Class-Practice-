#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[100][100] = { 1 };
	int i = 0;
	int j = 0;
	int n = 0;
	printf("请输入你要打印行数>:");
	scanf("%d", &n);
	for (i = 1; i < n; i++)
	{
		arr[i][0] = 1;
		for (j = 1; j <= i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%2d", arr[i][j]);	
		}
		printf("\n");
	}
	system("pause");
	return 0;
}