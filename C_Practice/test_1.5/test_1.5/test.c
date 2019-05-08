#define _CRT_SECURE_NO_WARNINGS 1
//从键盘输入一个年号，判断该年号是否为闰年，并输出结果
#include<stdio.h>
#include<stdlib.h>
int JudgeLeap(int x)
{
	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
		return 1;
	else
	{
		return 0;
	}
	
}
int main()
{
	int year = 0;
	int ret = 0;
	printf("请输入一个年份:");
	while (scanf("%d", &year) != EOF)
	{
		ret = JudgeLeap(year);
		if (ret == 1)
		{
			printf("%d是闰年！\n", year);
		}
		else
		{
			printf("%d不是闰年！\n", year);
		}
	}
	
	system("pause");
	return 0;
}