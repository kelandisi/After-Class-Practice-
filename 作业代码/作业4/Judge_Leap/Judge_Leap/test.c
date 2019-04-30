#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int JudgeLeap(int x)
{
	/*if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
		return 1;
	else
		return 0;*/
	//因为是逻辑运算，结果就是真或者假（1或0），直接返回就可以。
	return (x % 4 == 0 && x % 100 != 0 || x % 400 == 0);
}
int main()
{
	int year = 0;
	int ret = 0;
	scanf("%d", &year);
	ret = JudgeLeap(year);
	if (ret == 1)
	{
		printf("%d年是闰年\n", year);
	}
	else
	{
		printf("%d年不是闰年\n", year);
	}
	system("pause");
	return 0;
}