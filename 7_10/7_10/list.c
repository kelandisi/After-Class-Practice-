#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
Node * ListPushBack(Node *head, int val)				//尾插
{
	Node * node = (Node*)malloc(sizeof(Node));
	node->val = val;
	node->next = NULL;
	if (head == NULL)			//链表中没有结点
	{
		return node;			//直接返回node
	}
	else
	{
		Node* last = head;
		while (last->next!=NULL)
		{
			last = last->next;
		}
		last->next = node;
		return head;
	}
}
Node * ListPushFront(Node *head, int val)				//头插
{
	Node * node = (Node*)malloc(sizeof(Node));			//建立结点
	node->val = val;									//装入结点
	node->next = head;
	return node;
}
void PrintList(Node* head)								//打印链表				
{
	for (Node* cur = head; cur != NULL; cur = cur->next)//用cur来遍历
	{
		printf("%d-->", cur->val);
	}
	printf("NILL\n");
}

struct Node* reverseList(struct Node* head)				//逆置链表
{
	struct Node* rHead = NULL;
	struct Node* cur = head;
	while (cur!=NULL)
	{
		Node*next = cur->next;
		cur->next = rHead;
		rHead = cur;
		cur = next;
	}
	return rHead;
}




