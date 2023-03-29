# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct SqList
{
	char* a;
	int size;//有效数据
	int capacity;//容量
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
		printf("%c ", ps->a[i]);
	}
	printf("\n");
}

void InsertData(SL* ps, char x)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		char* tmp = (char*)realloc(ps->a, newcapacity * sizeof(char));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	ps->a[ps->size] = x;
	ps->size++;
}

void LengthList(SL* ps)
{
	printf("顺序表长度为%d\n", ps->size);
}

void Listempty(SL* ps)
{
	if (ps->a == NULL)
	{
		printf("顺序表为空\n");
	}
	else
	{
		printf("顺序表不为空\n");
	}
}

void GetElem(SL* ps, int x)
{
	printf("顺序表中第%d个元素为%c\n", x + 1, ps->a[2]);
}

void LocateElem(SL* ps, char x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			printf("%c的逻辑位置为%d\n", x, i);
		}
	}
}

void ListInsert(SL* ps, int pos, char x)
{
	assert(pos >= 0 && pos <= ps->size);
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

	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}

void DeleteElem(SL* ps, int x)
{
	assert(x >= 0 || x <= ps->size);
	for (int i = x - 1; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}

void DestoryList(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

int main()
{
	SL sl;
	InitList(&sl);

	InsertData(&sl, 'a');
	InsertData(&sl, 'b');
	InsertData(&sl, 'c');
	InsertData(&sl, 'd');
	InsertData(&sl, 'e');
	PrintList(&sl);

	LengthList(&sl);

	Listempty(&sl);

	GetElem(&sl, 2);

	LocateElem(&sl, 'a');

	ListInsert(&sl, 3, 'f');
	PrintList(&sl);

	DeleteElem(&sl, 3);
	PrintList(&sl);

	DestoryList(&sl);

	return 0;
}