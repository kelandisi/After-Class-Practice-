#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void fun(int a[], int b[],int sz)
{
	int i = 0;
	int tmp = 0;
	for (i = 0; i < sz; i++)
	{
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
}
void printArr(int a[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
int main()
{
	int a[] = { 1,2,3,4,5 };
	int b[] = { 10,11,12,13,14 };
	fun(a, b, 5);
	printArr(a,5);
	printArr(b, 5);
	system("pause");
	return 0;
}