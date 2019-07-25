#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"
#define DAFAULT_CAPACITY 16
void Print(Stack* ps)
{
	for (int i = 0; i < ps->top; i++)
	{
		printf("%d ", ps->array[i]);
	}
	printf("\n");
}
void StackInit(Stack* ps)
{
	ps->array = (int*)malloc(sizeof(int)*DAFAULT_CAPACITY);
	ps->capacity = DAFAULT_CAPACITY;
	ps->top = 0;
}
void StackPush(Stack* ps, int data)
{
	ps->array[ps->top++] = data;
}
void StackPop(Stack* ps)
{
	assert(ps->top > 0);
	ps->array[--ps->top];
}
int StackTop(Stack* ps)
{
	assert(ps->top > 0);
	return ps->array[ps->top-1];
}
int StackSize(Stack* ps)
{
	return ps->top;
}
int StackEmpty(Stack* ps)
{
	if (ps->top == 0)
		return -1;
	else
		return 0;
}
void StackDestroy(Stack* ps)
{
	free(ps->array);
	ps->capacity = 0;
	ps->top = 0;
}