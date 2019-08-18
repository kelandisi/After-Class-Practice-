#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//#define F(x,y) ((x)+(y))
int fun(int x, int y)
{
	static int m = 0;
	static int i = 2;
	i += m + 1;
	m = i + x + y;
	return m;
}
SUM1(unsigned int a)
{
	int count = 0;
	while (a)
	{
		if (a % 2 == 1)
		{
			count++;
		}
		a = a / 2;
	}
	return count;
}
int main()
{
	/*char a[20]="aiqichao";
	char *p1 = (char *)a;
	char *p2 = (char *)(a + 5);
	int n = p2 - p1;
	printf("%d", n);*/

	/*int a = 3, b = 4;
	printf("%d", F(a++, b++));*/


	/*int i = 1;
	int sum = 0;
	while (i < 10)
	{
		sum = sum + 1;
		i++;
	}
	printf("%d %d", i, sum);*/


	/*unsigned int a = 15;
	SUM1(a);
	printf("%d", SUM1(a));*/

	/*struct a1
	{
		short a;
		char b;
		long c;
		long d;
	};
	struct a2
	{
		long c;
		short a;
		char b;
		long d;
	};
	struct a3
	{
		short a;
		long c;
		char b;
		long d;
	};
	struct a1 str1;
	struct a2 str2;
	struct a3 str3;

	printf("%d %d  %d", sizeof(str1), sizeof(str2),sizeof(str3));*/


	int j = 4;
	int m = 1;
	int k;
	k = fun(j, m);
	printf("%d  ", k);
	k = fun(j, m);
	printf("%d/n", k);
	system("pause");
	return 0;
}