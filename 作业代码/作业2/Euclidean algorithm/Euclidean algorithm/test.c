#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		c = a % b;
			while (1)
			{
				if (c != 0)
				{
					a = b;
					b = c;
					c = a%b;
				}
				if (c == 0)
				{
					break;
				}
			}
			printf("%d\n", b);
	}
	system("pause");
	return 0;
}