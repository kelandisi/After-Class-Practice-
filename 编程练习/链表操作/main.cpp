#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"
int main()
{
	ListNode l1;
	ListNode l2;
	ListNode* l;

	cin >> l1;
	cin >> l2;
	//l.BubbleSort();
	//cout<<l.GetSum()<<endl;
	//l.popfront();
	//l.popback();
	//l.reverse();
	//l1.DeleteNode(3);
	cout << l1 << endl;
	cout << l2 << endl;
	l = merge(&l1, &l2);
	cout << l;
	//cout << l1 << endl;
	//cout << l2 << endl;
	
	system("pause");
	return 0;
}