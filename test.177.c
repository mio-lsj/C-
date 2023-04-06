#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

void StackInit(ST* ps)
{
	ps->a = NULL;
	ps->top = ps->capacity = 0;
	//初始化时，top给的是0，意味着top指向栈顶数据的下一个
}

void StackPush(ST* ps,STDataType x)
{
	if (ps->top == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = realloc(ps->a, sizeof(STDataType) * newcapacity);
		if(tmp==NULL)
		{
			printf("realloc fail\n");
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	ps->a[ps->top] = x;
	ps->top++;
}

void StackDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}

void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}

void StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top >= 0);
	printf("%d\n", ps->a[ps->top - 1]);
}

void StackSize(ST* ps)
{
	assert(ps);
	printf("栈的长度为:%d\n", ps->top);
}

void PrintStack(ST ps)
{
	while (ps.top)
	{
		printf("%d ", ps.a[ps.top-1]);
		ps.top--;
	}
	printf("\n");
}

int main()
{
	ST ps;
	StackInit(&ps);

	//插入数据
	StackPush(&ps, 1);
	StackPush(&ps, 2);
	StackPush(&ps, 3);
	StackPush(&ps, 4);
	PrintStack(ps);

	//删除数据
	StackPop(&ps);
	PrintStack(ps);

	//取栈顶元素
	StackTop(&ps);

	//栈的长度
	StackSize(&ps);

	StackDestroy(&ps);
	return 0;
}