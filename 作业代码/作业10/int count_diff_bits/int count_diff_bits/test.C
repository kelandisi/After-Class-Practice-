#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int count_one_bits(int a)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((a >> i) & 1 == 1)
		{
			count++;
		}
	}
	return count;
}
int count_diff_bits(int a, int b)
{
	return count_one_bits(a^b);
}
int main()
{
	int a = 0;
	int b = 0;
	int ret = 0;
	scanf("%d %d", &a, &b);
	ret = count_diff_bits(a, b);
	printf("%d", ret);
	system("pause");
	return 0;
}