#define _CRT_SECURE_NO_WARNINGS 1
//根据以下函数关系：当x <= 0，y = 0；当0<x <= 10，y = x；当10<x <= 20，y = 10；当x>20，y = sin(x)；
//输入一个x值，计算出相应的y值并输出。（提示：sin(x)属于math.h）
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//代码冗余
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入一个数:");
//	scanf("%d", &x);
//	if (x <= 0)
//	{
//		printf("y=%d\n", y);
//	}
//	else if (x > 0 && x <= 10)
//	{
//		printf("y=%d\n", y = x);
//	}
//	else if (x > 10 && x <= 20)
//	{
//		printf("y=10\n");
//	}
//	else
//	{
//		printf("y=%f\n", sin(x));
//	}
//	system("pause");
//	return 0;
//}

//精简后代码
int main()
{
	int x = 0;
	float y = 0;
	printf("请输入一个数:");
	scanf("%d", &x);
	if (x <= 0)
	{
		y = 0;
	}
	else if (x > 0 && x <= 10)
	{
		y = x;
	}
	else if (x > 10 && x <= 20)
	{
		y = 10;
	}
	else
	{
		y = sin(x);
	}
	printf("y = %f", y);
	system("pause");
	return 0;
}