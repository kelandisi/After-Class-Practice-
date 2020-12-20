#define _CRT_SECURE_NO_WARNINGS 1
#include"Seqlist.h"
int main()
{
	vector<int> arr;
	SeqList L1(arr);
	SeqList L2(arr);
	cout << L1 << endl << L2 << endl;
	hebing(L1, L2);
	cout <<L1<< endl;
	L1.SeqListQsort();
	cout << L1 << endl;

	system("pause");
	return 0;
}