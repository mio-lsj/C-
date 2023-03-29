# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

typedef struct SList1
{
	int* La;
	int size;
	int capacity;
}SL1;

typedef struct SList2
{
	int* Lb;
	int size;
	int capacity;
}SL2;

typedef struct SList3
{
	int* Lc;
	int size;
	int capacity;
}SL3;

void InitList(SL1* ps,SL2* p,SL3* C)
{
	ps->La = p->Lb = C->Lc = NULL;
	p->size = p->capacity = 0;
	ps->size = ps->capacity = 0;
	C->size = C->capacity = 0;
}

void PrintList(SL1* ps,SL2* p)
{
	printf("La:");
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->La[i]);
	}
	printf("\n");
	printf("Lb:");
	for (int i = 0; i < p->size; i++)
	{
		printf("%d ", p->Lb[i]);
	}
	printf("\n");
}

void InsertData1(SL1* ps, int x)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		int* tmp = (int*)realloc(ps->La, newcapacity * sizeof(int));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->La = tmp;
		ps->capacity = newcapacity;
	}
	ps->La[ps->size] = x;
	ps->size++;
}

void InsertData2(SL2* ps, int x)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		int* tmp = (int*)realloc(ps->Lb, newcapacity * sizeof(int));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->Lb = tmp;
		ps->capacity = newcapacity;
	}
	ps->Lb[ps->size] = x;
	ps->size++;
}

void List(SL3* C)
{
	C->capacity = 10;
	int* tmp = (int*)realloc(C->Lc, C->capacity * sizeof(int));
	if (tmp == NULL)
	{
		printf("realloc fail\n");
		exit(-1);
	}
	C->Lc = tmp;
}

int a = 0;

void mergeList(SL1* ps, SL2* p, SL3* C)
{
	for (int i = 0; i < ps->size; i++)
	{
		for (int j = 0; j < p->size; j++)
		{
			if (ps->La[i] == p->Lb[j])
			{
				C->Lc[a] = ps->La[i];
				a++;
				C->size++;
			}
		}
	}
}

void printC(SL3* C)
{
	printf("Lc:");
	for (int i = 0; i < C->size; i++)
	{
		printf("%d ", C->Lc[i]);
	}
}

int main()
{
	SL1 sl;
	SL2 p;
	SL3 C;
	InitList(&sl, &p, &C);
	InsertData1(&sl, 21);
	InsertData1(&sl, 5);
	InsertData1(&sl, 9);
	InsertData1(&sl, 15);
	InsertData1(&sl, 17);

	InsertData2(&p, 21);
	InsertData2(&p, 4);
	InsertData1(&p, 9);
	InsertData2(&p, 3);
	InsertData2(&p, 1);
	InsertData2(&p, 17);
	InsertData2(&p, 5);
	PrintList(&sl, &p);

	List(&C);
	mergeList(&sl, &p, &C);
	printC(&C);

	return 0;
}