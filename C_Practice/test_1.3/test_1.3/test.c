#define _CRT_SECURE_NO_WARNINGS 1
//根据以下函数关系：当0<x <= 1，y = x；当1<x <= 2，y = sqrt(x)；当x>2，y = sin(x)；
//输入一个x值，计算出相应的y值并输出
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float x = 0;
	float y = 0;
	printf("请输入一个数 x = ");
	scanf("%f", &x);
		if (x > 0 && x <= 1)
		{
			y = x;		
		}
		else if (x > 1 && x <= 2)
		{
			y = sqrt(x);	
		}
		else if (x > 2)
		{
			y = sin(x);			
		}	
		printf("y = %f\n", y);
	system("pause");
	return 0;
}