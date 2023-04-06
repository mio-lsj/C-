#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct Stack
{
	int* a;
	int top;
	int capacity;
}ST;

void InitStack(ST* ps)
{
	ps->top = ps->capacity = 0;
	ps->a = NULL;
}

void StackPush(ST* ps,int x)
{
	if (ps->top == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		int* tmp = realloc(ps->a, sizeof(ST) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->capacity = newcapacity;
		ps->a = tmp;
	}
	ps->a[ps->top] = x;
	ps->top++;
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

void DestroyStack(ST* ps)
{
	free(ps->a);
	ps->capacity = ps->top = 0;
}

void StackEmpty(ST ps)
{
	if (ps.top == 0)
	{
		printf("栈为空\n");
	}
	else
	{
		printf("栈不为空\n");
	}
}

void StackFull(ST ps)
{
	if (ps.top == ps.top)
	{
		printf("栈满\n");
	}
	else
	{
		printf("栈不满\n");
	}
}

void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}

void GetTop(ST* ps)
{
	assert(ps);
	printf("栈顶元素为%d\n", ps->a[ps->top - 1]);
}

int main()
{
	ST ps;
	//初始化
	InitStack(&ps);
	//压栈
	StackPush(&ps, 1);
	StackPush(&ps, 2);
	StackPush(&ps, 3);
	StackPush(&ps, 4);
	//打印数据
	printf("栈的数据为:");
	PrintStack(ps);
	//判断是否为空
	StackEmpty(ps);
	//判断栈是否满
	StackFull(ps);
	//出栈
	printf("出栈后,栈的数据为:");
	StackPop(&ps);
	PrintStack(ps);
	//取栈顶元素
	GetTop(&ps);
	//销毁
	DestroyStack(&ps);
	return 0;
}