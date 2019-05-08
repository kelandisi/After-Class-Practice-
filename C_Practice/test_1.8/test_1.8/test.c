#define _CRT_SECURE_NO_WARNINGS 1
//输入3个正整数，判断能否组成三角形，如果能够组成三角形，则输出三角形的面积，否则输出错误。
//三角形面积公式：area = sqrt(s(s - a)(s - b)(s - c))，其中s = 1 / 2(a + b + c)
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int AreaRequirement(float a, float b, float c)
{
	float area = 0;
	float s = 0;
	s = (a + b + c)/2;
	if (a+b<=c || a+c<=b || b+c<=a)
	{
		return 0;
	}
	else
	{
		return area = sqrt(s*(s - a)*(s - b)*(s - c));
	}
}
int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	float ret = 0;
	printf("输入三个正整数：");
	scanf("%f %f %f", &a, &b, &c);
	ret = AreaRequirement(a, b, c);
	if (ret == 0)
	{
		printf("你所输入的三个边长构不成三角形！\n");
	}
	else
	{
		printf("%f", ret);
	}
	system("pause");
	return 0;
}