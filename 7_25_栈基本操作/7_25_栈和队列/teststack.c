#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"
void test()
{
	Stack stack;
	// ��ʼ��ջ 
	StackInit(&stack);

	// ��ջ 
	StackPush(&stack, 5);
	StackPush(&stack, 4);
	StackPush(&stack, 3);
	Print(&stack);
	// ��ջ 
	StackPop(&stack);
	StackPop(&stack);
	Print(&stack);
	// ��ȡջ��Ԫ�� 
	printf("ջ��Ԫ��Ϊ %d\n",StackTop(&stack));

	// ��ȡջ����ЧԪ�ظ��� 
	printf("ջ����ЧԪ�ظ���Ϊ %d\n",StackSize(&stack));

	// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
	if ((StackEmpty(&stack)) != 0)
	{
		printf("ջΪ��\n");
	}
	else
	{
		printf("ջ��Ϊ��\n");

	}

	// ����ջ 
	StackDestroy(&stack);
}
int main()
{
	test();
	system("pause");
	return 0;
}