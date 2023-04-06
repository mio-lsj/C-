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
		printf("ջΪ��\n");
	}
	else
	{
		printf("ջ��Ϊ��\n");
	}
}

void StackFull(ST ps)
{
	if (ps.top == ps.top)
	{
		printf("ջ��\n");
	}
	else
	{
		printf("ջ����\n");
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
	printf("ջ��Ԫ��Ϊ%d\n", ps->a[ps->top - 1]);
}

int main()
{
	ST ps;
	//��ʼ��
	InitStack(&ps);
	//ѹջ
	StackPush(&ps, 1);
	StackPush(&ps, 2);
	StackPush(&ps, 3);
	StackPush(&ps, 4);
	//��ӡ����
	printf("ջ������Ϊ:");
	PrintStack(ps);
	//�ж��Ƿ�Ϊ��
	StackEmpty(ps);
	//�ж�ջ�Ƿ���
	StackFull(ps);
	//��ջ
	printf("��ջ��,ջ������Ϊ:");
	StackPop(&ps);
	PrintStack(ps);
	//ȡջ��Ԫ��
	GetTop(&ps);
	//����
	DestroyStack(&ps);
	return 0;
}