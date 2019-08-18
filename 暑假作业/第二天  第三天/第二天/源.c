#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void tihuanchar(char *src)
{
	int OldLen = 0;                  //原字符串长度
	int NewLen = 0;                  //新字符串长度
	int BlackNum = 0;                //空格数量
	int NewBack = 0;                 //新字符串尾部
	int OldBack = 0;                 //原字符串尾部
	while (src[OldLen] != '\0')
	{
		if (src[OldLen] == ' ')
		{
			BlackNum++;
		}
		OldLen++;
	}
	NewLen = OldLen + BlackNum * 2;
	OldBack = OldLen - 1;
	NewBack = NewLen - 1;
	while (OldBack != 0)
	{
		if (src[OldBack] == ' ')
		{
			src[NewBack--] = '0';
			src[NewBack--] = '2';
			src[NewBack] = '%';
		}
		else
		{
			src[NewBack] = src[OldBack];
		}
		OldBack--;
		NewBack--;
	}
}
int Feibo(int n)//非递归求解斐波那切数列
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
int Feibo1(int n)//递归求解斐波那切数列
{
	if (n < 0)
	{
		printf("输入错误！\n");
	}
	else if (n == 1 || n == 2)
		return 1;
	else
		return Feibo1(n - 2) + Feibo1(n - 1);
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

	//int n = 0;
	char str[60] = "abc defgx yz";
	//scanf("%d", &n);
	//int ret = Feibo(n);
	//int ret = Feibo1(n);
	//printf("%d", ret);
	tihuanchar(str);
	printf("%s", str);
	system("pause");
	return 0;
}