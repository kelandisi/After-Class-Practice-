#define _CRT_SECURE_NO_WARNINGS 1
#include"heap.h"

void test()
{
	Heap heap;
	int a[] = { 9,8,1,6,2,7,3 };
	int size = sizeof(a) / sizeof(int);
	CreatHeap(&heap, a, size);
	Print(&heap);
	InsertHeap(&heap, 2);
	Print(&heap);
	EraseHeap(&heap);
	Print(&heap);
	cout << SizeHeap(&heap)<<endl ;
	if ((EmptyHeap(&heap)) == 1)
	{
		cout << "¶ÑÎª¿Õ" << endl;
	}
	else
	{
		cout << "¶Ñ²»Îª¿Õ" << endl;
	}
	cout << TopHeap(&heap) << endl;
	DestroyHeap(&heap);
	Print(&heap);
}
int main()
{
	test();
	system("pause");
	return 0;
}