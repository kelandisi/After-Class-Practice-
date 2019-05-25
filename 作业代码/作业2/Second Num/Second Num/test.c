#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int arr[10] = { 5,8,9,2,3,15,6,11,16,44 };
	int max = 0;
	int second = 0;
	arr[0] > arr[1] ? (max = arr[0], second = arr[1]) :( max = arr[1], second = arr[0]);
	for (i = 2; i < 10; i++)
	{
		if (arr[i] > max)
		{
			second = max;
			max = arr[i];
		}
		else if (second < arr[i])
		{
			second = arr[i];
		}
	}
	printf("%d ", second);
	system("pause");
	return 0;
}
