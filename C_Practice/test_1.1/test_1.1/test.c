#define _CRT_SECURE_NO_WARNINGS 1
//Ҫ����������a��b����a*a + b*b����100�������a*a + b*b��λ���ϵ����֣������������֮��a + b
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	int t = 0;
	printf("������������:");
	scanf("%d %d", &a, &b);
	t = a*a + b*b;
	if (t > 100)
	{
		printf("%d\n", t / 100);
	}
	else
	{
		printf("%d\n", a + b);
	}
	system("pause");
	return 0;
}