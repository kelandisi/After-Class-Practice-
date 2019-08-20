#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int change(int *px)
{
	int y = 8;
	y = y - *px;
	px = &y;
	return 0;
}
int fun(char *s)
{
	char *p = s;
	while (*p != '\0')
	{
		p++;
	}
	return (p - s);
}
int main()
{
	int a[] = { 1,2,3,4 };
	int xx = 3;
	int *py = &xx;
	change(py);
	char arr[2][4];
	strcpy((char*)arr, "you");
	strcpy(arr[1], "me");
	arr[0][3] = '&';
	char s[] = "\\123456\123456\t"; 
	printf("%d\n", strlen(s));
	printf("%s\n", arr);
	printf("%d\n", *py);
	printf("%d\n", sizeof(a));
	printf("%d\n", fun("goodbye!"));

	system("pause");
	return 0;
}