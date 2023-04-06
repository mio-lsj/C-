#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct Queue
{
	int* data;
	int front;//����ָ��
	int rear;//��βָ��
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
		printf("�ö���Ϊ��\n");
	}
	else
	{
		printf("�ö��в�Ϊ��\n");
	}
}

void PrintQueue(ST ps)
{
	if (ps.front == ps.rear)
	{
		printf("����Ϊ��\n");
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
	printf("����Ԫ��Ϊ%d\n", ps.data[ps.front]);
}

void QueueFull(ST ps)
{
	if (ps.rear == ps.capacity)
	{
		printf("�ö�������\n");
	}
	else
	{
		printf("�ö���δ��\n");
	}
}

int main()
{
	ST ps;
	//��ʼ������
	InitQueue(&ps);
	//���
	QueuePush(&ps, 1);
	QueuePush(&ps, 2);
	QueuePush(&ps, 3);
	QueuePush(&ps, 4);
	QueuePush(&ps, 5);
	//��������
	printf("�ö���Ϊ:");
	PrintQueue(ps);
	//����
	printf("���Ӻ�,�ö���Ϊ:");
	DeQueue(&ps);
	PrintQueue(ps);
	//ȡ����Ԫ��
	GetHead(ps);
	//�жϿ�
	QueueEmpty(ps);
	//�ж���
	QueueFull(ps);
	//���ٶ���
	DestroyQueue(&ps);
	return 0;
}