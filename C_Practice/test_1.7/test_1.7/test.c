#define _CRT_SECURE_NO_WARNINGS 1
//��x>10ʱ��y = 2 * x + 1; ��1<x <= 10ʱ��y = 5 * (x + 1)*(x - 2)
//��x <= 1ʱ��y = 1 - 2 * x
//�Ӽ�������x��ֵ������y��ֵ��
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x = 0;
	int y = 0;
	printf("����һ����:");
	scanf("%d", &x);
	if (x > 10)
	{
		y = 2 * x + 1;
	}
	if (x <= 10 && x > 1)
	{
		y = 5 * (x + 1)*(x - 2);
	}
	if (x <= 1)
	{
		y = 1 - 2 * x;
	}
	printf("%d\n", y);
	system("pause");
	return 0;
}