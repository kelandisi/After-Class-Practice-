#define _CRT_SECURE_NO_WARNINGS 1
//判定用户输入一个不大于999的正整数是否为一个回文数。回文数是指正读和反读都相同
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入一个不大于999的数:");
	scanf("%d", &n);
	if (n > 0 && n < 999)
	{
		a = n / 100;
		b = (n - 100 * a) / 10;
		c = n % 10;
		if (a == 0)
		{
			if (b == c)
			{
				printf("Yes！");
			}
			else
			{
				printf("No");
			}
		}
		else
		{
			if (a == c)
			{
				printf("Yes");
			}
			else
			{
				printf("No");
			}
		}
	}
	else
	{
		printf("输入错误，请在0~999之间输入!");
	}
	system("pause");
	return 0;
}