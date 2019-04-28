#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int tmp = 0;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		if (a < b)
			{
				tmp = a;
				a = b;
				b = tmp;
			}
		if (a < c)
			{
				tmp = a;
				a = c;
				c = tmp;
			}
		if (b < c)
			{
				tmp = b;
				b = c;
				c = tmp;
			}
			printf("%d %d %d\n", a, b, c);
	}
	
	system("pause");
	return 0;
}