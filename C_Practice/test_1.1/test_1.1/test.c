#define _CRT_SECURE_NO_WARNINGS 1
//要求输入整数a和b，若a*a + b*b大于100，则输出a*a + b*b百位以上的数字，否则输出两数之和a + b
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	int t = 0;
	printf("请输入两个数:");
	scanf("%d %d", &a, &b);
	t = a*a + b*b;
	if (t > 100)
	{
		printf("%d\n", t / 100);
	}
	else
	{
		printf("%d\n", a + b);
	}
	system("pause");
	return 0;
}