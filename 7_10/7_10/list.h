#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct Node
{
	int val;
	struct Node* next;
}Node;
Node * ListPushFront(Node *head, int val);
Node * ListPushBack(Node *head, int val);