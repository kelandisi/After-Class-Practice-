#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", &password);
		if (0 == strcmp(password, "147258"))
		{
			printf("������ȷ��");
			break;
		}
		else
		{
			printf("���������������!\n");
		}
	}
	if (i == 3)
	{
		printf("3�����������1Сʱ�����룡\n");
	}
	system("pause");
	return 0;
}