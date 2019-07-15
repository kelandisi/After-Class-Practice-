#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
void test()
{
	Node* head = NULL;
	head = FrontPush(head, 3);
	head = FrontPush(head, 2);
	head = FrontPush(head, 1);
	Print(head);
	head = BackPush(head, 4);
	head = BackPush(head, 5);
	head = BackPush(head, 6);
	Print(head);
	head = FrontPop(head);
	Print(head);
	head = BackPop(head);
	Print(head);
	head = reverseList(head);
	Print(head);
}
int main()
{
	test();
	system("pause");
	return 0;
}