#pragma once
#include<iostream>
#include<vector>
using namespace std;

struct node
{
	int val;
	struct node* next;
};
class ListNode
{
public:
	ListNode()
		:head(new node)
	{
		head->next = NULL;
	}
	
	void frontinsert(int data); //ͷ��
	void backinsert(int data); //β��
	void popfront();		//ͷɾ
	void popback();			//βɾ
	void DeleteNode(int data);//ɾ��ָ�����
	void reverse();		//��ת����
	void frontinput();   //ͷ�巨����
	void backinput();	//β�巨����
	int GetSum();		//��ȡ������
	void BubbleSort();	//������ð������ķ�����������

	friend istream& operator>>(istream& _cin, ListNode& list)
	{
		list.backinput();
		return _cin;
	}
	friend ostream& operator<<(ostream& _cout,ListNode& list)
	{
		node* cur = list.head->next;
		while (cur != NULL)
		{
			cout << cur->val << "->";
			cur = cur->next;
		}
		cout << "NULL"<<endl;
		return _cout;
	}
	friend ostream& operator<<(ostream& _cout, ListNode* list)
	{
		node* cur = list->head->next;
		while (cur != NULL)
		{
			cout << cur->val << "->";
			cur = cur->next;
		}
		cout << "NULL" << endl;
		return _cout;
	}

	node* head;
};


ListNode* merge(ListNode* l1, ListNode* l2);