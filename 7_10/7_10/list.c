#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
void Print(Node* head)						//利用cur遍历链表
{
	Node* cur = head;
	while (cur != NULL)
	{
		printf("%d-->", cur->val);
		cur = cur->next;	
	}
	printf("NULL\n");
}
Node* FrontPush(Node* head, int val)		//头插 o（1）
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->val = val;
	node->next = head;
	return node;
}
Node* BackPush(Node* head, int val)			//尾插 o（1）
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->val = val;
	node->next = NULL;
	if (head == NULL)
	{
		head = node;
	}
	else
	{
		Node*last = head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = node;
	}
	return head;
}
Node* FrontPop(Node* head)						//头删
{
	assert(head != NULL);
	Node* next = head->next;
	free(head);
	return next;
}
Node* BackPop(Node* head)						//尾删
{
	assert(head != NULL);
	if (head->next == NULL)
	{
		free(head);
		head = NULL;
	}
	else
	{
		Node* cur = head;
		while (cur->next->next != NULL)
		{
			cur = cur->next;
		}
		free(cur->next);
		cur->next = NULL;
	}
	return head;
}
Node* reverseList(Node* head)
{
	Node* rHead = NULL;
	Node* cur = head;
	while (cur != NULL)
	{
		Node* next = cur->next;
		cur->next = rHead;
		rHead = cur;				
		cur = next;
	}
	return rHead;
}
