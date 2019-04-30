#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//自定义范围找9
	int n = 0;
	int m = 0;
	int i = 0;
	int count = 0;
	scanf("%d %d", &n, &m);
	for (i = n; i <= m; i++)
	{
		int tmp = i;
		while (tmp)
		{
			if (tmp % 10 == 9)
				{
					count++;
				}
			tmp /= 10;
		}
	}
	printf("%d", count);



	//1——100的数字找9
	/*int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("%d", count);*/
	system("pause");
	return 0;
}