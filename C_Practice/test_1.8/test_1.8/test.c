#define _CRT_SECURE_NO_WARNINGS 1
//����3�����������ж��ܷ���������Σ�����ܹ���������Σ�����������ε�����������������
//�����������ʽ��area = sqrt(s(s - a)(s - b)(s - c))������s = 1 / 2(a + b + c)
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int AreaRequirement(float a, float b, float c)
{
	float area = 0;
	float s = 0;
	s = (a + b + c)/2;
	if (a+b<=c || a+c<=b || b+c<=a)
	{
		return 0;
	}
	else
	{
		return area = sqrt(s*(s - a)*(s - b)*(s - c));
	}
}
int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	float ret = 0;
	printf("����������������");
	scanf("%f %f %f", &a, &b, &c);
	ret = AreaRequirement(a, b, c);
	if (ret == 0)
	{
		printf("��������������߳������������Σ�\n");
	}
	else
	{
		printf("%f", ret);
	}
	system("pause");
	return 0;
}