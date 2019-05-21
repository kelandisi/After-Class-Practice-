#define _CRT_SECURE_NO_WARNINGS 1
//如果一个注释是这样子的：
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x = 0;
	x =/*/*/0 */**/1;
	if (x == 1)
	{
		printf("该编辑器允许嵌套注释！\n");
	}
	else
	{
		printf("该编辑器不允许嵌套注释！\n");
	}
	system("pause");
	return 0;

}
