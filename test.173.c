# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef struct SqList
{
	int* a;
	int size;
	int capacity;
}SL;

void InitList(SL* ps)
{
	ps->a = (int*)malloc(sizeof(int));
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

void InsertData(SL* ps, int x)
{
	if (ps->size == ps->capacity)
	{
		if (ps->capacity == 0)
		{
			ps->capacity = 4;
		}
		else
		{
			ps->capacity = ps->capacity * 2;
		}
	}
	ps->a[ps->size] = x;
	ps->size++;
}

void adList(SL* ps)
{
	int i = ps->a[0];
	ps->a[0] = ps->a[5];
	ps->a[5] = i;
	i = ps->a[1];
	ps->a[1] = ps->a[6];
	ps->a[6] = i;
	i = ps->a[2];
	ps->a[2] = ps->a[7];
	ps->a[7] = i;
	i = ps->a[3];
	ps->a[3] = ps->a[8];
	ps->a[8] = i;
	i = ps->a[4];
	ps->a[4] = ps->a[9];
	ps->a[9] = i;
}

int main()
{
	SL sl;
	InitList(&sl);

	InsertData(&sl, 6);
	InsertData(&sl, 7);
	InsertData(&sl, 8);
	InsertData(&sl, 9);
	InsertData(&sl, 10);
	InsertData(&sl, 1);
	InsertData(&sl, 2);
	InsertData(&sl, 3);
	InsertData(&sl, 4);
	InsertData(&sl, 5);
	PrintList(&sl);

	adList(&sl);
	PrintList(&sl);

	return 0;
}