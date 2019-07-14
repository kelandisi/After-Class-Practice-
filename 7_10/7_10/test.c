#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
void test()
{
	Node* head = NULL;
	head = ListPushFront(head, 3);
	PrintList(head);
	head = ListPushFront(head, 2);
	PrintList(head);
	head = ListPushFront(head, 1);
	PrintList(head);
	head = ListPushBack(head,  4);
	head = ListPushBack(head,  5);
	head = ListPushBack(head,  6);
	PrintList(head);
	head = reverseList(head);			
	PrintList(head);

}
int main()
{
	test();
	system("pause");
	return 0;
}
