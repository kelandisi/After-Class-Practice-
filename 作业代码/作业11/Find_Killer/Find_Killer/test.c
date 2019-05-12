#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int killer = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if (('a' != killer) + ('c' == killer) + ('d' == killer) + ('d' != killer) == 3)//判断条件（3真一假）
		{
			printf("killer=%c", killer);
		}
	}
	system("pause");
	return 0;
}