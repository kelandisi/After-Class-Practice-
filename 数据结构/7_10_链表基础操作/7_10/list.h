#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct Node
{
	int val;			//��������������Ҫ����Ϣ��һ����val����һ���Ǳ������һ����������
	struct Node *next;	//���Ǳ������һ����������
}Node;
void Print(Node* head);
Node* FrontPush(Node* head, int val);
Node* BackPush(Node* head, int val);
Node* FrontPop(Node* head);
Node* BackPop(Node* head);
Node* reverseList(Node* head);
Node* rmoveElevents(Node* head, int val);
Node* Getlast(Node* head);

