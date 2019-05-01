#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch;
	printf("ÇëÊäÈëÒ»¸ö×ÖÄ¸£º");
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a'&&ch <= 'z')
		{
			printf("%c\n", ch - 32);
		}
		else if (ch >= 'A'&&ch <= 'Z')
		{
			printf("%c\n", ch + 32);
		}
		else
		{
			;
		}
				
	}
	system("pause");
	return 0;

}