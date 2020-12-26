#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"


void ListNode::frontinsert(int data)  //ͷ��
{
	node* res = new node;
	res->val = data;

	res->next = head->next;
	head->next = res;
}

void ListNode::backinsert(int data)  //β��
{
	node* res = new node;
	node* cur = head;
	res->val = data;
	res->next = NULL;
	if (head->next == NULL)
		head->next = res;
	else
	{
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = res;
	}
}

void ListNode::popfront()			//ͷɾ
{
	if (GetSum() == 0)
		return;
	node* cur = head->next;
	head->next = cur->next;
	free(cur);
}
void ListNode::popback()			//βɾ
{
	if (GetSum() == 0)
		return;
	node* cur = head;
	while (cur->next->next)
	{
		cur = cur->next;
	}
	cur->next = NULL;
	free(cur->next);
}

void ListNode :: DeleteNode(int data)		//ָ��ɾ��һ��val�Ľ��
{
	//˫ָ�뷨
	/*node* prve = head;
	node* cur = head->next;
	while (cur!=NULL)
	{	
		if (cur->val == data)
		{
			prve->next = cur->next;
			
		}
		else
		{
			prve = prve->next;
		}
		cur = cur->next;
	}
	if (head->next->val == data)
	{
		head->next = cur->next;
	}
	else
		return;*/


	//��ָ��
	node* cur = head;
	while (cur->next != NULL && cur->next->val != data)
		cur = cur->next;
	if (cur->next != NULL)
	{
		cur->next = cur->next->next;
	}
}

void ListNode::reverse()		//��ת��������������
{
	node* res = new node;
	res->next = NULL;
	node* cur = head->next;
	while (cur)
	{
		node* next = cur->next;
		cur->next = res->next;
		res->next = cur;
		cur = next;
	}
	head = res;
}

void ListNode::frontinput()		//ͷ�巨����
{
	int a = 0;
	while (cin >> a)
	{
		frontinsert(a);
		if (cin.get() == '\n')
			break;
	}
}
void ListNode::backinput()		//β�巨����
{
	int a = 0;
	while (cin >> a)
	{
		backinsert(a);
		if (cin.get() == '\n')
			break;
	}
}

int ListNode::GetSum()			//��ȡ������
{
	node* cur = head;
	int count = 0;
	while (cur->next != NULL)
	{
		cur = cur->next;
		count++;
	}
	return count;
}

void swap(int &a, int &b)		//����
{
	int tmp = a;
	a = b;
	b = tmp;
}

void ListNode::BubbleSort()			//�����ð������
{
	node* p;
	node* p1;
	node* cur = head;
	int sz = GetSum();
	if (sz == 0)
		return;
	for (int i = 0; i < sz - 1; i++)
	{
		cur = head->next;
		for (int j = 0; j < sz - i - 1; j++)
		{
			p = cur;
			p1 = cur->next;
			if (p->val > p1->val)
			{
				swap(p->val, p1->val);
			}
			cur = cur->next;
		}
	}
}

ListNode* merge(ListNode* l1, ListNode* l2)
{
	node* cur = l1->head;
	while (cur->next)
	{
		cur = cur->next;
	}
	cur->next = l2->head->next;
	return l1;
}