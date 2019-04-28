#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//第一种方法：创建临时变量tmp
//int main()
//{
//	int tmp = 0;
//	int num1 = 0;
//	int num2 = 0;
//	while (scanf("%d %d", &num1, &num2) != EOF)
//	{
//		tmp = num1;
//		num1 = num2;
//		num2 = tmp;
//	printf("%d %d\n", num1, num2);
//	}



//第二种方法：位运算(不创建临时变量)
//int main()
//{
//	int a=5;
//	int b=4;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d\n%d\n", a, b);



//第三种方法：加减运算
int main()
{
	int a = 0;
	int b = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		a = a - b;
		b = a + b;
		a = b - a;
		printf("%d %d\n", a, b);
	}
	system("pause");
	return 0;
}