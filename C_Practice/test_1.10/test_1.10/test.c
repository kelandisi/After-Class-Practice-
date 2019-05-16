#define _CRT_SECURE_NO_WARNINGS 1
/*从键盘输入一个两位数的正整数a, 将其转换形成一个整数b并输出b
转换的方式是:将a中较大的数码作为b的十位
剩余的数码作为b的个位。例如, 当输入a = 49, 则结果b = 94。*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	int x = 0;
	int a = 0;
	int b = 0;
	printf("请输入一个两位数的正整数:");
	scanf("%d", &n);
	if (n > 0 && n < 99)
	{
		a = n / 10;
		b = n % 10;
		if (a >= b)
		{
			x = n;
		}
		else
		{
			x = b * 10 + a;
		}
		printf("%d", x);
	}
	else
	{
		printf("输入错误，请重新输入！");
	}
	system("pause");
	return 0;
}