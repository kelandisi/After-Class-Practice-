#define _CRT_SECURE_NO_WARNINGS 1
/*�Ӽ�������һ����λ����������a, ����ת���γ�һ������b�����b
ת���ķ�ʽ��:��a�нϴ��������Ϊb��ʮλ
ʣ���������Ϊb�ĸ�λ������, ������a = 49, ����b = 94��*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	int x = 0;
	int a = 0;
	int b = 0;
	printf("������һ����λ����������:");
	scanf("%d", &n);
	if (n > 0 && n < 99)
	{
		a = n / 10;
		b = n % 10;
		if (a >= b)
		{
			x = n;
		}
		else
		{
			x = b * 10 + a;
		}
		printf("%d", x);
	}
	else
	{
		printf("����������������룡");
	}
	system("pause");
	return 0;
}