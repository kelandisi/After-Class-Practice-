#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//�ǵݹ���n�Ľ׳�
//int fac(int n)
//{
//	int mul = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		 mul = i*mul;
//	}
//	return mul;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	fac(n);
//	printf("%d\n", fac(n));
//	system("pause");
//	return 0;
//}


//�ݹ����
int fac(int n)
{
	if (n == 1)
		return 1;
	else
		return n*fac(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	fac(n);
	printf("%d\n", fac(n));
	system("pause");
	return 0;
}
