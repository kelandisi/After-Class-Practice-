#define _CRT_SECURE_NO_WARNINGS 1
//��ʼ��һ�ַ���������С��20���ַ�����ȡ����3���ַ�����7���ַ���ɵ��Ӵ���������Ӵ�
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[10] = "aiqichao";
	puts(a);
	int i = 0;
	for (i = 2; i < 7; i++)
	{
		printf("%c ", a[i]);
	}
	system("pause");
	return 0;
}




