#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
// 链式结构：表示队列 
typedef struct Node
{
	struct Node* Next;
	int val;
}Node;

// 队列的结构 
typedef struct Queue
{
	Node* front;
	Node* rear;
}Queue;
// 初始化队列 
void QueueInit(Queue* q);

// 队尾入队列 
void QueuePush(Queue* q, int val);

// 队头出队列 
void QueuePop(Queue* q);

// 获取队列头部元素 
int QueueFront(Queue* q);

// 获取队列队尾元素 
int QueueBack(Queue* q);

// 获取队列中有效元素个数 
int QueueSize(Queue* q);

// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
int QueueEmpty(Queue* q);

// 销毁队列 
void QueueDestroy(Queue* q);