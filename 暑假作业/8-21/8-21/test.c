#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int p = 1;
void test()
{
	int p = 2;
	p += 1;
}
void func(char str_age[2])
{
	int m = sizeof(str_age);
	int n = strlen(str_age);
	printf("m=%d\n", m);
	printf("n=%d\n", n);
}
int fun(int a, int b)
{
	if (a > b)
		return (a + b);
	else
		return (a - b);
}
int main()
{
    //int x = 3, y = 8, z = 6, r;
	//r = fun(fun(x, y), 2 * z);
	//int a = 4;
	//int m, n;
	//int b = ++(a++);
	//printf("%d", b);
	//for (m = 0, n = -1; n = 0; m++, n++)
	//	n++;
	test();
	int i = 0;
	int j = 0;
	if ((++i > 0) || (++j > 0))
	{
		printf("i=%d j=%d\n", i, j);
	}
	int x;
	int y;
	y = 10;
	x = y++;
	char str[] = "Hello";
	func(str);
	//printf("สýื้=%d", sizeof(str));
	printf("x=%d y=%d\n", x, y);
	printf("%d\n", p);
	//printf("%d\n", r);
	system("pause");
	return 0;
}