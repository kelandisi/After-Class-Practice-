#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int my_strlen(char *str)
{
	int count = 0;
	while ('\0' != *str)
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	int ret = 0;
	ret = my_strlen("abc");
	printf("%d", ret);
	system("pause");
	return 0;
}




