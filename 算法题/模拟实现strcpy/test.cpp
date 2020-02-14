#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char *Test_strcpy(char *dest, const char *src)
{
	//char *tmp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return dest;
}
int main()
{
	char src[5] = "abcd";
	char dest[20] = {0};
	printf("%s\n", Test_strcpy(dest, src));
	system("pause");
	return 0;
}