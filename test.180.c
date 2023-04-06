#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct Queue
{
	int* data;
	int front;//队首指针
	int rear;//队尾指针
	int capacity;
}ST;

void InitQueue(ST* ps)
{
	ps->front = ps->rear = ps->capacity = 0;
	ps->data = NULL;
}

void QueuePush(ST* ps, int x)
{
	if (ps->rear == ps->capacity || ps->rear == 0)
	{
		ps->rear = ps->capacity;
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		int* tmp = (int*)realloc(ps->data, sizeof(ST) * newcapacity);
		if (tmp==NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->capacity = newcapacity;
		ps->data = tmp;
	}
	ps->data[ps->rear] = x;
	ps->rear = (ps->rear + 1) % ps->capacity;
}

void DestroyQueue(ST* ps)
{
	free(ps->data);
	ps->capacity = ps->front = ps->rear = 0;
}

void QueueEmpty(ST ps)
{
	if (ps.rear == ps.front)
	{
		printf("该队列为空\n");
	}
	else
	{
		printf("该队列不为空\n");
	}
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
		printf("%d ", ps.data[ps.front]);
		ps.front++;
	}
	printf("\n");
}

void DeQueue(ST* ps)
{
	assert(ps);
	ps->front = (ps->front + 1) % ps->capacity;
}

void GetHead(ST ps)
{
	printf("队首元素为%d\n", ps.data[ps.front]);
}

void QueueFull(ST ps)
{
	if (ps.rear == ps.capacity)
	{
		printf("该队列已满\n");
	}
	else
	{
		printf("该队列未满\n");
	}
}

int main()
{
	ST ps;
	//初始化队列
	InitQueue(&ps);
	//入队
	QueuePush(&ps, 1);
	QueuePush(&ps, 2);
	QueuePush(&ps, 3);
	QueuePush(&ps, 4);
	QueuePush(&ps, 5);
	//遍历队列
	printf("该对列为:");
	PrintQueue(ps);
	//出队
	printf("出队后,该对列为:");
	DeQueue(&ps);
	PrintQueue(ps);
	//取队首元素
	GetHead(ps);
	//判断空
	QueueEmpty(ps);
	//判断满
	QueueFull(ps);
	//销毁队列
	DestroyQueue(&ps);
	return 0;
}