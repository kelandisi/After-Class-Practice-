#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void reverse(char *str)
{
	if (*str == '\0')
		return str;
	reverse(str + 1);
		printf("%c", *str);
}
int main()
{
	char *arr = "abcdeeop";
	reverse(arr);
	system("pause");
	return 0;
}