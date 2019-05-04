#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void printarr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void init(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 9;
	}
}


void EmptyArry(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}


void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz-1;
	while (left < right)
	{
		int tmp = 0;
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
//��������
	reverse(arr, sz);
//��ӡ���ú�����飨����ߵĺ����ұߵĽ�����ֱ��left=right��
	printarr(arr, sz);
	printf("\n");
//��ʼ�����飨9��
	init(arr,sz);
//��ӡ��ʼ���������	
	printarr(arr, sz);
	printf("\n");
//������飨Ԫ��ȫΪ0��	
	EmptyArry(arr, sz);
//��ӡ��պ������
	printarr(arr, sz);
	system("pause");
	return 0;
}