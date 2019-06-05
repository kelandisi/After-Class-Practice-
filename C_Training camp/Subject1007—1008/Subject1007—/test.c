#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	/*int x = 0;
	int y = 0;
	scanf("%d", &x);
	if (x < 1)
	{
		y = x;
	}
	else if (x >= 1 && x < 10)
	{
		y = 2*x - 1;
	}
	else if (x >= 10)
	{
		y = 3*x - 11;
	}
	printf("%d\n", y);*/





	int grade = 0;
	scanf("%d", &grade);
	switch (grade/10)
	{
	case 10:
	case 9:
		putchar('A');
		break;
	case 8:
		putchar('B');
		break;
	case 7:
		putchar('C');
		break;
	case 6:
		putchar('D');
		break;
	default:
		putchar('E');
		break;
	}






	system("pause");
	return 0;
}
