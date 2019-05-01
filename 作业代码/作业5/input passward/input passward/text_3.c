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
		printf("请输入密码：");
		scanf("%s", &password);
		if (0 == strcmp(password, "147258"))
		{
			printf("密码正确！");
			break;
		}
		else
		{
			printf("输入错误，请重输入!\n");
		}
	}
	if (i == 3)
	{
		printf("3次输入错误，请1小时后输入！\n");
	}
	system("pause");
	return 0;
}