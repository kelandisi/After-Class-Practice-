#define _CRT_SECURE_NO_WARNINGS 1
//初始化数组a中包含10个不同的整数，要求从键盘输入一个整数，
//若这个整数在数组中则从数组中删除这个整数并输出删除后的数组，否则输出no
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10] = { 5,8,9,6,55,4,2,3,1,12 };
	int i = 0;
	int j = 0;
	int x = 0;
	int k = 0;
	printf("请输入你要删除的数:");
	scanf("%d", &x);
	for (i = 0; i < 10; i++)
	{
		if (arr[i] == x)
		{
			for (j = i; j < 10; j++)
			{
				arr[j] = arr[j + 1];
			}
			for (k = 0; k < 9; k++)
			{
				printf("%3d ", arr[k]);	
			}
			break;
		}
		else if (i == 9)
		{
			printf("NO");
		}
	}
	system("pause");
	return 0;
}
