#define _CRT_SECURE_NO_WARNINGS 1
//�������º�����ϵ����x <= 0��y = 0����0<x <= 10��y = x����10<x <= 20��y = 10����x>20��y = sin(x)��
//����һ��xֵ���������Ӧ��yֵ�����������ʾ��sin(x)����math.h��
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//��������
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("������һ����:");
//	scanf("%d", &x);
//	if (x <= 0)
//	{
//		printf("y=%d\n", y);
//	}
//	else if (x > 0 && x <= 10)
//	{
//		printf("y=%d\n", y = x);
//	}
//	else if (x > 10 && x <= 20)
//	{
//		printf("y=10\n");
//	}
//	else
//	{
//		printf("y=%f\n", sin(x));
//	}
//	system("pause");
//	return 0;
//}

//��������
int main()
{
	int x = 0;
	float y = 0;
	printf("������һ����:");
	scanf("%d", &x);
	if (x <= 0)
	{
		y = 0;
	}
	else if (x > 0 && x <= 10)
	{
		y = x;
	}
	else if (x > 10 && x <= 20)
	{
		y = 10;
	}
	else
	{
		y = sin(x);
	}
	printf("y = %f", y);
	system("pause");
	return 0;
}