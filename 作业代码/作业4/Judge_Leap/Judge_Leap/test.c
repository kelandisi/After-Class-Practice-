#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int JudgeLeap(int x)
{
	/*if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
		return 1;
	else
		return 0;*/
	//��Ϊ���߼����㣬�����������߼٣�1��0����ֱ�ӷ��ؾͿ��ԡ�
	return (x % 4 == 0 && x % 100 != 0 || x % 400 == 0);
}
int main()
{
	int year = 0;
	int ret = 0;
	scanf("%d", &year);
	ret = JudgeLeap(year);
	if (ret == 1)
	{
		printf("%d��������\n", year);
	}
	else
	{
		printf("%d�겻������\n", year);
	}
	system("pause");
	return 0;
}