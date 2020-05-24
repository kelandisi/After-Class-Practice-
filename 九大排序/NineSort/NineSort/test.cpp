#define _CRT_SECURE_NO_WARNINGS 
#include"Main.h"
void Test()
{
	int array[5] = {3,1,4,2,5};
	int size = sizeof(array) / sizeof(int);
	//BubbleSort(array,size); 
	//InsertSort(array, size);
	//ShellSort(array, size);
	//SelectSort(array, size);
	//HeapSort(array, size);
	quickSort(array, size);
	Print(array, size);
}

int main()
{
	Test();
	system("pause");
	return 0;
}