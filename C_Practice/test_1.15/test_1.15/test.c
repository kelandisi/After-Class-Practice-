#define _CRT_SECURE_NO_WARNINGS 1
//初始化一字符串（长度小于20个字符），取出第3个字符到第7个字符组成的子串，输出该子串
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[10] = "aiqichao";
	puts(a);
	int i = 0;
	for (i = 2; i < 7; i++)
	{
		printf("%c ", a[i]);
	}
	system("pause");
	return 0;
}




