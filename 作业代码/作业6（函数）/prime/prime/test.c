#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int is_prime(int x)
{
	int j = 0;
	for (j = 2; j < x; j++)
	{
		if (x%j == 0)
		{
			return 0;
		}	
	}
		return 1;
}
int main()
{
	int i = 0;
	
	while (scanf("%d", &i) != EOF)
	{	
		int ret=is_prime(i);
		if (ret == 1)
		{
			printf("%d这个数是素数\n", i);
		}
		else
		{
			printf("%d这个数不是素数\n", i);
		}
			
	}
	system("pause");
	return 0;
}