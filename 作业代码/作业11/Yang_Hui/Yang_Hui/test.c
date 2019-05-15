#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	/*int n = 0;
	int arr[100][100] = { 0 };
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0)
				arr[i][j] = 1;
			if (i == 0)
				arr[i][j] = 1;
			if (i > 1 && j > 0)
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];	
		}
	}*/
	int i = 0;
	int j = 0;
	int n = 0;
	int arr[100][100] = { 0 };
	scanf("%d", &n);
	for (i =1; i <= n; i++)
	{
		arr[i][0] = 1;
		for (j = 1; j <= i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i <=n; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}