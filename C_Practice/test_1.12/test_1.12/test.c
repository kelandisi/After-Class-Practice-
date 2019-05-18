#define _CRT_SECURE_NO_WARNINGS 1
//初始化一字符串（字符串中的每个字符各不同），要求从键盘输入一个字符，
//删除字符串中和输入字符相同的字符，输出处理后的字符串
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char arr[6] = { "lower" };
	char arr1[6];
	int i = 0;
	int j = 0;
	int k = 0;
	printf("请输入要删除的字符:");
	gets(arr1);
	for (i = 0; i < 6; i++)
	{
		if (arr[i] == arr1[0])
		{
			for (j = i; j < 4; j++)
			{
				arr[j] = arr[j + 1];
			}
			for (k = 0; k < 4; k++)
			{
				printf("%c", arr[k]);
			}
			break;
		}
		else if (arr[i] == '\0')
		{
			printf("NO");
		}
	}
	system("pause");
	return 0;
}