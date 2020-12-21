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
	
	void frontinsert(int data); //头插
	void backinsert(int data); //尾插
	void popfront();		//头删
	void popback();			//尾删
	void DeleteNode(int data);//删除指定结点
	void reverse();		//反转链表
	void frontinput();   //头插法输入
	void backinput();	//尾插法输入
	int GetSum();		//获取链表长度
	void BubbleSort();	//链表按照冒泡排序的方法进行排序

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