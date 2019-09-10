#define _CRT_SECURE_NO_WARNINGS 1
#include"main.h"
int main()
{
	int a[] = { 5,2,1,3,4,6,9,7,8 };
	int size = sizeof(a) / sizeof(int);
	bubblesort(a, size);
	int ret = binarysearch(a, size,5);
	print(a, size);
	cout << "5在下标为"<<ret<<"的位置" << endl;
	Seqlist seqlist;
	seqinit(&seqlist);
	pushhead(&seqlist, 3);
	pushhead(&seqlist, 2);
	pushhead(&seqlist, 1);
	printseq(&seqlist);
	pushback(&seqlist, 4);
	pushback(&seqlist, 5);
	pushback(&seqlist, 6);
	printseq(&seqlist);
	insert(&seqlist, 6, 7);
	printseq(&seqlist);
	pophead(&seqlist);
	printseq(&seqlist);
	popback(&seqlist);
	printseq(&seqlist);
	deleteseq(&seqlist,2);
	printseq(&seqlist);

	system("pause");
	return 0;
}