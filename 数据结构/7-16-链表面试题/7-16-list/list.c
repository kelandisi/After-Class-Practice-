#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
void Print(Node* head)
{
	Node* cur = head;
	while (cur != NULL)
	{
		printf("%d-->", cur->val);
		cur = cur->next;
	}
	printf("NULL\n");
}
Node* FrontPush(Node* head, int val)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->val = val;
	node->next = head;
	head = node;
	return head;
}
Node* BackPush(Node* head, int val)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->val = val;
	if (head == NULL)
	{
		return head;
	}
	else
	{
		Node* last = head;
		while (last->next!=NULL)
		{
			last = last->next;
		}
		last->next = node;
		node->next = NULL;
	}
	return head;
}
Node* FrontPop(Node* head)
{
	assert(head != NULL);
	Node* next = head->next;
	free(head);
	return next;
}
Node* BackPop(Node* head)
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
Node* reverselist(Node* head)
{
	Node* rHead = NULL;
	Node* cur = head;
	while (cur != NULL)
	{
		struct Node* next = cur->next;
		cur->next = rHead;
		rHead = cur;
		cur = next;
	}
	return rHead;
}
