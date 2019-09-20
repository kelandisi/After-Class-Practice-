#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Feibo(int n)
{
	int a = 1;
	int b = 1;
	int i = 0;
	int result = 0;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		for (i = 3; i <= n; i++)
		{
			result = a + b;
			a = b;	
			b = result;
		}
	}
	return result;
}
int main()
{
	//int a[2][2] = { {1,2},{3,4} };
	//printf("%d ", sizeof(char));
	//const char *p = "Hello!";
	//printf("%c\n", *p);


	//int a = 10;
	//int b = a += a *= a -= a / 3;
	//printf("%d",a );


	//int i = 0;
	//while (i<10)
	//{
	//	if (i < 1)
	//		continue;
	//	if (i == 5)
	//		break;
	//	i++;
	//}


	/*int a = 5;
	if (a = 0)
	{
		printf("%d", a - 10);
	}
	else
	{
		printf("%d", a++);
	}*/


	//double *a;
	//printf("%d", sizeof(a));//8


	/*int x = 0;
	int y = 0;
	int z = 0;
	x = z = 2, y = 3;
	if (x > y)
		z = 1;
	else if (x == y)
		z = 0;
	else
		z = -1;
	printf("%d", z);*/

	//char acHello[] = "hello\0world";
	//char acNew[] = "ab\n\012222" ;
	////strcpy(acNew, acHello);
	//int a = strlen(acNew);
	////int b = sizeof(acHello);
	//printf("%d ", a);


	//非递归求解斐波那切数列
	int n = 0;
	scanf("%d", &n);
	int ret = Feibo(n);
	printf("%d", ret);
	system("pause");
	return 0;
}