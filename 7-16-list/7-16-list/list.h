#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct Node
{
	int val;
	struct Node* next;
}Node;
Node* FrontPush(Node* head, int val);
void Print(Node* head);
Node* BackPush(Node* head, int val);
Node* FrontPop(Node* head);
Node* BackPop(Node* head);
Node* reverselist(Node* head);

