#define _CRT_SECURE_NO_WARNINGS 1
//�������º�����ϵ����0<x <= 1��y = x����1<x <= 2��y = sqrt(x)����x>2��y = sin(x)��
//����һ��xֵ���������Ӧ��yֵ�����
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float x = 0;
	float y = 0;
	printf("������һ���� x = ");
	scanf("%f", &x);
		if (x > 0 && x <= 1)
		{
			y = x;		
		}
		else if (x > 1 && x <= 2)
		{
			y = sqrt(x);	
		}
		else if (x > 2)
		{
			y = sin(x);			
		}	
		printf("y = %f\n", y);
	system("pause");
	return 0;
}