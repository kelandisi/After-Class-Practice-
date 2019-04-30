#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	double sum1 = 0;
	int i = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum1 += 1.0 / i*flag;
		flag = -flag;
	}
	//´úÂëÈßÓà
	/*double sum2 = 0;
	double sum = 0;
	int i = 0;
	for (i = 1; i <=100; i+=2)
	{
		sum1 += 1.0 / i;
	}
	for (i = 2; i <= 100; i += 2)
	{
		sum2 += 1.0 / i;
	}
	sum = sum1 - sum2;*/


	printf("%f", sum1);
	system("pause");
	return 0;
}