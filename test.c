# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#define m 5
#define n 5

typedef struct SqList
{
	int* a;
	int size;
	int capacity;
}SL;

void InitList(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void PrintList(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void InsertData(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		int* tmp = (int*)realloc(ps->a, newcapacity * sizeof(int));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	printf("前m个数据为：");
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &ps->a[i]);
		ps->size++;
	}
}

void InsertData1(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		int* tmp = (int*)realloc(ps->a, newcapacity * sizeof(int));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	printf("后n个数据为：");
	int j = ps->size;
	for (int i = ps->size; i < n+j; i++)
	{
		scanf("%d", &ps->a[i]);
		ps->size++;
	}
}

void adList(SL* ps)
{
	int i = ps->a[0];
	for (int j = 0; j < m; j++)
	{
		ps->a[j] = ps->a[j + m];
		ps->a[j + m] = i;
		i = ps->a[j + 1];
	}
}

int main()
{
	SL sl;
	InitList(&sl);

	InsertData(&sl);
	InsertData1(&sl);

	adList(&sl);
	PrintList(&sl);

	return 0;
}