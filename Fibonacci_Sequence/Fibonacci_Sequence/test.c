#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//쳲��������еĵݹ��󷨣��˷�������һ�����⣺�ݹ��ظ������������ʱ��Ͼã�

//int fib(int x)
//{
//	if (x > 2)
//		return fib(x - 1) + fib(x - 2);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		ret = fib(n);
//		printf("쳲��������е� %d ������ %d \n", n,ret);
//	}


//�ǵݹ��㷨��

int fib(int x)
{
	if (x == 1 || x == 2)
		return 1;
	int a = 1;
	int b = 1;
	int c = 0;
	for (int i = 3; i <= x; i++)
	{
		c = a +b;
		a = b;
		b = c;
	}
	return c;
}
int main()
{
	int ret = 0;
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		ret = fib(n);
		printf("쳲��������е� %d ������ %d \n", n, ret);
	}
	system("pause");
	return 0;
}