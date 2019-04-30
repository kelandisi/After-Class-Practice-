#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	for (i = 0; i <= 999; i++)
	{		
		if (i < 99)
			continue;
		c = i % 10;
		b = (i / 10) % 10;
		a = (i / 100) % 10;
		if (a*a*a+b*b*b+c*c*c == i)
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}