#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int i = 0;
	int sum = 0;
	int add = 0;
	scanf("%d", &a);
	for (i = 1; i <= 5; i++)
	{
		add = add * 10 + a;
		sum = add + sum;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}