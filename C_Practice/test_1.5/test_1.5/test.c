#define _CRT_SECURE_NO_WARNINGS 1
//�Ӽ�������һ����ţ��жϸ�����Ƿ�Ϊ���꣬��������
#include<stdio.h>
#include<stdlib.h>
int JudgeLeap(int x)
{
	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
		return 1;
	else
	{
		return 0;
	}
	
}
int main()
{
	int year = 0;
	int ret = 0;
	printf("������һ�����:");
	while (scanf("%d", &year) != EOF)
	{
		ret = JudgeLeap(year);
		if (ret == 1)
		{
			printf("%d�����꣡\n", year);
		}
		else
		{
			printf("%d�������꣡\n", year);
		}
	}
	
	system("pause");
	return 0;
}