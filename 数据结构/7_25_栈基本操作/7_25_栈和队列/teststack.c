#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"
void test()
{
	Stack stack;
	// 初始化栈 
	StackInit(&stack);

	// 入栈 
	StackPush(&stack, 5);
	StackPush(&stack, 4);
	StackPush(&stack, 3);
	Print(&stack);
	// 出栈 
	StackPop(&stack);
	StackPop(&stack);
	// 获取栈顶元素 
	printf("栈顶元素为 %d\n",StackTop(&stack));

	// 获取栈中有效元素个数 
	printf("栈中有效元素个数为 %d\n",StackSize(&stack));

	// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
	if ((StackEmpty(&stack)) != 0)
	{
		printf("栈为空\n");
	}
	else
	{
		printf("栈不为空\n");

	}

	// 销毁栈 
	StackDestroy(&stack);

}
int main()
{
	test();
	system("pause");
	return 0;
}