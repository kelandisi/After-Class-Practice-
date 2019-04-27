#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int pow(int x, int y)
{
	if (y == 1)
		return x;
	if (y == 0)
		return 1;
	if (y > 1)
		return x*pow(x, y - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	int ret = pow(n, k);
	printf("%d", ret);
	system("pause");
	return 0;
}