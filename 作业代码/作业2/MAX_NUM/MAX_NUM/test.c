#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10] = { 1,2,332,4,55,6,7,8,9,10 };
	int MAX = arr[0];
	int i = 0;
	int tmp = 0;
	for (i = arr[0]; i <= 10; i++)
	{
		if (arr[i] > arr[MAX])
		{
			tmp = arr[MAX];
			arr[MAX] = arr[i];
			arr[i] = tmp;
		}
	}
	printf("%d\n", arr[MAX]);
	system("pause");
	return 0;
}