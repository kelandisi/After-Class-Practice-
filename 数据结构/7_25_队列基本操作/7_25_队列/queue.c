#define _CRT_SECURE_NO_WARNINGS 1
#include"queue.h"
void Print(Queue* q)
{
	Node* cur = q->front;
	if (cur==NULL)
	{
		printf("����Ϊ��");
		return;
	}
	printf("NULL->");
	while (1)
	{
		printf("%d-->", cur->val);
		if (cur == q->rear)
			break;
		cur = cur->Next;
	}
	printf("NULL\n");
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
void QueuePop(Queue* q)
{
	assert(q->front != NULL);

	Node* second = q->front->Next;
	free(q->front);
	q->front = second;
}
int QueueFront(Queue* q)
{
	return q->front->val;
}
int QueueBack(Queue* q)
{
	return q->rear->val;
}
int QueueSize(Queue* q)
{
	Node* cur = q->front;
	int count = 0;
	if (cur == NULL)
		return 0;
	else
	{
		while (1)
		{
			count++;
			if (cur == q->rear)
				break;
			cur = cur->Next;	
		}	
	}
	return count;
}
int QueueEmpty(Queue* q)
{
	if (q->front == q->rear)
		return -1;
	else
		return 0;
}
void QueueDestroy(Queue* q)
{
	if (q->front != NULL)
	{
		q->rear = q->front->Next;
		free(q->front);
		q->front = q->rear; //�ͷ�һ���ڴ�Ҫ�����㣺1.�ͷ�ָ������ָ�롣2.����ָ��ָ���
	}
}