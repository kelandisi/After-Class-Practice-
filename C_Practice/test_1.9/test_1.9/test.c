#define _CRT_SECURE_NO_WARNINGS 1
//�ж��û�����һ��������999���������Ƿ�Ϊһ������������������ָ�����ͷ�������ͬ
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	printf("������һ��������999����:");
	scanf("%d", &n);
	if (n > 0 && n < 999)
	{
		a = n / 100;
		b = (n - 100 * a) / 10;
		c = n % 10;
		if (a == 0)
		{
			if (b == c)
			{
				printf("Yes��");
			}
			else
			{
				printf("No");
			}
		}
		else
		{
			if (a == c)
			{
				printf("Yes");
			}
			else
			{
				printf("No");
			}
		}
	}
	else
	{
		printf("�����������0~999֮������!");
	}
	system("pause");
	return 0;
}