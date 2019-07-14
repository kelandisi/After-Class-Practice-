#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
Node * ListPushBack(Node *head, int val)				//β��
{
	Node * node = (Node*)malloc(sizeof(Node));
	node->val = val;
	node->next = NULL;
	if (head == NULL)			//������û�н��
	{
		return node;			//ֱ�ӷ���node
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
Node * ListPushFront(Node *head, int val)				//ͷ��
{
	Node * node = (Node*)malloc(sizeof(Node));			//�������
	node->val = val;									//װ����
	node->next = head;
	return node;
}
void PrintList(Node* head)								//��ӡ����				
{
	for (Node* cur = head; cur != NULL; cur = cur->next)//��cur������
	{
		printf("%d-->", cur->val);
	}
	printf("NILL\n");
}

struct Node* reverseList(struct Node* head)				//��������
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




