#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct Stack
{
	char* data;
	int top;
	int capacity;
}SqT;

typedef struct Queue
{
	char* data;
	int front;
	int rear;
	int capacity;
}ST;

void InitStack(SqT* ps)
{
	ps->data = NULL;
	ps->capacity = ps->top = 0;
}

void InitQueue(ST* pt)
{
	pt->data = NULL;
	pt->capacity = pt->front = pt->rear = 0;
}

void QueuePush(ST* pt,char x)
{
	if (pt->rear == pt->capacity || pt->rear == 0)
	{
		pt->rear = pt->capacity;
		int newcapacity = pt->capacity == 0 ? 4 : pt->capacity * 2;
		char* tmp = (char*)realloc(pt->data, sizeof(ST) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		pt->capacity = newcapacity;
		pt->data = tmp;
	}
	pt->data[pt->rear] = x;
	pt->rear = (pt->rear + 1) % pt->capacity;
}

void StackPush(SqT* ps,char x)
{
	if (ps->top == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		char* tmp = realloc(ps->data, sizeof(SqT) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->capacity = newcapacity;
		ps->data = tmp;
	}
	ps->data[ps->top++] = x;
}

void PrintQueue(ST ps)
{
	if (ps.front == ps.rear)
	{
		printf("队列为空\n");
		exit(-1);
	}
	while (ps.rear != ps.front)
	{
		printf("%c ", ps.data[ps.front++]);
	}
	printf("\n");
}

void PrintStack(SqT ps)
{
	while (ps.top)
	{
		printf("%c ", ps.data[ps.top-- - 1]);
	}
	printf("\n");
}

void huiwen(SqT ps, ST pt)
{
	for (int i = 0; i < ps.top; i++)
	{
		if (ps.data[ps.top-- - 1] != pt.data[pt.front++])
		{
			printf("该字符不回文!\n");
			exit(-1);
		}
	}
	printf("该字符串回文!\n");
}

void clear()
{
	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF)
	{
		;
	}
}

int main()
{
	SqT ps;
	ST pt;
	InitStack(&ps);
	InitQueue(&pt);
	printf("请输入5个字符:\n");
	char a = getchar();
	clear();
	char b = getchar();
	clear();
	char c = getchar();
	clear();
	char d = getchar();
	clear();
	char e = getchar();
	StackPush(&ps, a);
	StackPush(&ps, b);
	StackPush(&ps, c);
	StackPush(&ps, d);
	StackPush(&ps, e);

	QueuePush(&pt, a);
	QueuePush(&pt, b);
	QueuePush(&pt, c);
	QueuePush(&pt, d);
	QueuePush(&pt, e);
	printf("栈的数据为:");
	PrintStack(ps);
	printf("队列的数据为:");
	PrintQueue(pt);
	huiwen(ps, pt);
	return 0;
}