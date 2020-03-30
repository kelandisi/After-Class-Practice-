#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct Node
{
	int val;			//链表中有两个重要的信息，一个是val，另一个是保存的下一个结点的线索
	struct Node *next;	//就是保存的下一个结点的线索
}Node;
void Print(Node* head);
Node* FrontPush(Node* head, int val);
Node* BackPush(Node* head, int val);
Node* FrontPop(Node* head);
Node* BackPop(Node* head);
Node* reverseList(Node* head);
Node* rmoveElevents(Node* head, int val);
Node* Getlast(Node* head);

