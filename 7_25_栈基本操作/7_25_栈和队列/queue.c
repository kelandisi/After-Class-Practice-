#define _CRT_SECURE_NO_WARNINGS 1
#include"queue.h"
void Print(Queue* q)
{
	Node* cur = q->front;
	while (cur!=NULL)
	{
		printf("%d-->", cur->val);
		cur = cur->Next;
	}
}
void QueueInit(Queue* q)
{
	q->front = q->rear = NULL;
}
void QueuePush(Queue* q, int val)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->val = val;
	if (q->front == NULL)
	{
		q->front = node;
	}
	else
	{
		q->rear->Next = node;
	}
	q->rear = node;
}