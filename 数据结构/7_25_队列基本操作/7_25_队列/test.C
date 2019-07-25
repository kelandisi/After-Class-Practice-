#define _CRT_SECURE_NO_WARNINGS 1
#include"queue.h"
void test()
{
	Queue queue;
	QueueInit(&queue);
	QueuePush(&queue, 1);
	QueuePush(&queue, 2);
	QueuePush(&queue, 3);
	Print(&queue);
	QueuePop(&queue);
	Print(&queue);
	printf("队头元素为 %d \n",QueueFront(&queue));
	printf("队尾元素为 %d \n", QueueBack(&queue));
	printf("队列有效元素为 %d \n", QueueSize(&queue));
	if ((QueueEmpty(&queue)) == 0)
	{
		printf("队列不为空\n");
	}
	else
		printf("队列为空\n");
	QueueDestroy(&queue);
	Print(&queue);

}
int main()
{
	test();
	system("pause");
	return 0;
}