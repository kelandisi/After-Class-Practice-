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
	/*Node* node = (Node*)malloc(sizeof(Node));
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
	return head;*/
	Node* node = (Node*)malloc(sizeof(Node));
	node->val = val;
	node->next = NULL;
	if (head == NULL)
		return node;
	else
	{
		Node* cur = head;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = node;
		return head;
	}
}
Node* FrontPop(Node* head)						//头删
{
	/*assert(head != NULL);
	Node* next = head->next;
	free(head);
	return next;*/
	assert(head != NULL);
	Node* next = head->next;
	free(head);
	return next;
}
Node* BackPop(Node* head)						//尾删
{
	/*assert(head != NULL);
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
	return head;*/
	assert(head != NULL);
	if (head->next == NULL)
	{
		free(head);
		head = NULL;
	}
	else
	{
		Node* last = head;
		while (last->next->next!=NULL)
		{
			last = last->next;
		}
		free(last->next);
		last->next = NULL;
	}
	return head;
}
Node* reverseList(Node* head)
{
	/*Node* rHead = NULL;
	Node* cur = head;
	while (cur != NULL)
	{
		Node* next = cur->next;
		cur->next = rHead;
		rHead = cur;				
		cur = next;
	}
	return rHead;*/
	Node* rHead = NULL;
	Node* cur = head;
	while (cur!=NULL)
	{
		Node* next = cur->next;
		cur->next = rHead;
		rHead = cur;
		cur = next;
	}
	return rHead;
}

Node* rmoveElevents(Node* head,int val)
{
	//双指针法
	/*assert(head != NULL);
	Node* prve = head;
	Node* cur = head->next;
	while (cur!=NULL)
	{
		if (cur->val == val)
		{
			prve->next = cur->next;
		}
		else
			prve = cur;
		cur = cur->next;
		
	}
	if (head->val == val)
		head = head->next;
	return head;*/

	//准备一个空链表法
	Node* rHead = NULL;
	Node* cur = head;
	while (cur!=NULL)
	{
		Node* next = cur->next;
		if (cur->val != val)
		{
			//尾插
			if (rHead == NULL)
			{
				cur->next = rHead;
				rHead = cur;
			}
			else
			{
				cur->next = NULL;
				Node* last = Getlast(rHead);
				last->next = cur;
			}	
		}
		cur = next;
	}
	if (head->val == val)
		head = head->next;
	return rHead;
}
Node* Getlast(Node* head)
{
	Node* cur = head;
	while (cur->next!=NULL)
	{
		cur = cur->next;
	}
	return cur;
}