#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//方法一
//int count_one_bits(unsigned int n)//对于负数在计算机里储存是补码的形式，所以要用无符号整型来定义
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)//15
//		{			   //000000000000000000001111
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//方法二
//int count_one_bits(unsigned int n)
//{
//	int count = 0;
//	while (n)
//		{
//			n = n&(n-1);
//			count++;
//		}
//		return count;
//}

//方法三
int count_one_bits(unsigned int n)
{

	int count = 0;
	int i = 0;
	for(i=32; i>0; i--)		//从左到右   for(i=0; i<32 ;i++)  从右到左
	{
		if(((n>>i)&1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = count_one_bits(n);
	printf("%d", ret);
	system("pause");
	return 0;
}