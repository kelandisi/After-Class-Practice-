#define _CRT_SECURE_NO_WARNINGS 
#include"Main.h"
void Test()
{
	int array[10] = { 9,8,5,1,4,6,3,7,8,0 };
	int size = sizeof(array) / sizeof(int);
	//BubbleSort(array,size); 
	//InsertSort(array, size);
	//ShellSort(array, size);
	SelectSort(array, size);
	Print(array, size);
}
int main()
{
	Test();
	system("pause");
	return 0;
}