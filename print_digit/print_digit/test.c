#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void print_digit(int x)
{
	if (x < 10)
	{
		printf("%d ", x);
	}
		
	if (x >= 10)
	{
		print_digit(x / 10);
	printf("%d ",x % 10);
	}
}
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		print_digit(n);
		printf("\n");
	}
	
	system("pause");
	return 0;
}