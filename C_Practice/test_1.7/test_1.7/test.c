#define _CRT_SECURE_NO_WARNINGS 1
//当x>10时，y = 2 * x + 1; 当1<x <= 10时，y = 5 * (x + 1)*(x - 2)
//当x <= 1时，y = 1 - 2 * x
//从键盘输入x的值，计算y的值。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x = 0;
	int y = 0;
	printf("输入一个数:");
	scanf("%d", &x);
	if (x > 10)
	{
		y = 2 * x + 1;
	}
	if (x <= 10 && x > 1)
	{
		y = 5 * (x + 1)*(x - 2);
	}
	if (x <= 1)
	{
		y = 1 - 2 * x;
	}
	printf("%d\n", y);
	system("pause");
	return 0;
}