#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void Print_Every_Sum(int n)
{
	if (n != 0)
	{
		Print_Every_Sum(n / 10);
		printf("%d ", n % 10);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Print_Every_Sum(n);
	system("pause");
	return 0;
}