#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
// ��ʽ�ṹ����ʾ���� 
typedef struct Node
{
	struct Node* Next;
	int val;
}Node;

// ���еĽṹ 
typedef struct Queue
{
	Node* front;
	Node* rear;
}Queue;
// ��ʼ������ 
void QueueInit(Queue* q);

// ��β����� 
void QueuePush(Queue* q, int val);

// ��ͷ������ 
void QueuePop(Queue* q);

// ��ȡ����ͷ��Ԫ�� 
int QueueFront(Queue* q);

// ��ȡ���ж�βԪ�� 
int QueueBack(Queue* q);

// ��ȡ��������ЧԪ�ظ��� 
int QueueSize(Queue* q);

// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
int QueueEmpty(Queue* q);

// ���ٶ��� 
void QueueDestroy(Queue* q);