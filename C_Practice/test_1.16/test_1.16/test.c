#define _CRT_SECURE_NO_WARNINGS 1
//��̼���һ��a[3][4]�������Сֵ����λ�ã������λ���Լ�a[3][4]����Ҫ���ʼ������
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int i = 0; 
	int j = 0;
	int min = a[0][0];
	int mini = 0;
	int minj = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (a[i][j] < min)
			{
				min = a[i][j];
				mini = i;
				minj = j;
			}
		}
	}
	printf("�������СֵΪ%d��λ�ڵ�%d�У���%d��\n", min, mini, minj);
	system("pause");
	return 0;
}




