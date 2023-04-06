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

void StackPush(ST* ps, int x)
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

void Invert(ST* ps)
{
	int x = 0;
	printf("请输入一个十进制整数:");
	scanf("%d", &x);
	while (x != 1)
	{
		StackPush(&(*ps), x % 2);
		x = x / 2;
		if (x == 1)
		{
			StackPush(&(*ps), x);
		}
	}

}

void DestroyStack(ST* ps)
{
	free(ps->a);
	ps->capacity = ps->top = 0;
}

void PrintStack(ST* ps)
{
	assert(ps);
	printf("该十进制整数的二进制为:");
	while (ps->top)
	{
		printf("%d", ps->a[ps->top-1]);
		ps->top--;
	}
}

int main()
{
	ST ps;
	InitStack(&ps);
	Invert(&ps);
	PrintStack(&ps);
	DestroyStack(&ps);
	return 0;
}