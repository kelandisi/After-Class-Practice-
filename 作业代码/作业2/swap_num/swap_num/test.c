#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//��һ�ַ�����������ʱ����tmp
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



//�ڶ��ַ�����λ����(��������ʱ����)
//int main()
//{
//	int a=5;
//	int b=4;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d\n%d\n", a, b);



//�����ַ������Ӽ�����
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