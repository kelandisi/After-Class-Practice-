#define _CRT_SECURE_NO_WARNINGS 1
#include"Seqlist.h"
int main()
{
	vector<int> arr;
	SeqList L1(arr);
	SeqList L2(arr);
	cout << L1 << endl << L2;
	
	cout << hebing(L1, L2) << endl;
	system("pause");
	return 0;
}