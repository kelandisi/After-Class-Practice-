#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int digitsum(int x)
{
	if (x >0)
	{
		return x % 10 + digitsum(x / 10);
	}
	return 0;
}
int main()
{
	int n = 0;
	printf("请输入一个非负数:");
	while(scanf("%d", &n)!=EOF)
	{
		printf("%d\n", digitsum(n));
	}
	system("pause");
	return 0;
}