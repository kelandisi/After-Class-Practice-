#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


int partition(int *arr, int low, int high)
{
	int pivot = arr[low];
	while (low < high)
	{
		while (low < high && arr[high] <= pivot)
			high--;
		arr[low] = arr[high];
		while (low < high && arr[low] >= pivot)
			low++;
		arr[high] = arr[low];
	}
	arr[low] = pivot;
	return low;
}
void Qsort(int *arr, int low, int high)
{
	if (low < high)
	{
		int pivot = partition(arr, low, high);
		Qsort(arr, low, pivot - 1);
		Qsort(arr, pivot +1, high);
	}
	
}
int main()
{
	int arr[] = { 1,4,2,5,7,2,9 };
	int sz = sizeof(arr) / sizeof(int);
	Qsort(arr, 0,sz-1);
	for (int i = 0; i < sz; i++)
	{
		cout << arr[i] << " " ;
	}
	system("pause");
	return 0;
}