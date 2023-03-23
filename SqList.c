# define _CRT_SECURE_NO_WARNINGS 1
#include"SqList.h"

void SqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

void SqListDestoryCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}

}

//β��
void SqListPushBack(SL* ps, SLDataType x)
{
	//���û�пռ��ռ䲻�㣬��ô ���Ǿ�����
	SqListDestoryCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;

}

//βɾ
void SqListPopBack(SL* ps)
{
	//if (ps->size > 0)
	//{
	//	//ps->a[ps->size - 1] = 0;
	//	ps->size--;
	//}
	
	//����
	assert(ps->size > 0);
	ps->size--;
}

//ͷ��
void SqListPushfront(SL* ps, SLDataType x)
{
	SqListDestoryCapacity(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
}

//ͷɾ
void SqListPopFront(SL* ps)
{
	assert(ps->size > 0);
	int begin = 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	ps->size--;
}

int SqListFind(SL* ps, SLDataType x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SeListInsert(SL* ps, int pos, SLDataType x)
{
	/*if (pos > ps->size || pos < 0)
	{
		printf("pos�Ƿ�\n");
		return;
	}*/
	assert(pos <= ps->size || pos >= 0);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}

void SqListErase(SL* ps, int pos)
{
	assert(pos >= 0 & pos < ps->size);
	int begin = pos + 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}
	ps->size--;
}