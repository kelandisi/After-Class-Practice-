#define _CRT_SECURE_NO_WARNINGS 1
//����һ��3 * 3���������Ԫ��֮���Լ�����Ԫ���е����Ԫ�ص�ֵ��
//Ҫ���ʼ���������������������þ���
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int sum = 0;
	int max = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum = a[i][j] + sum;
			if (max < a[i][j])
			{
				max = a[i][j];
			}
		}
	}
	printf("%d %d", sum,max);
	system("pause");
	return 0;
}
