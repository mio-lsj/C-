# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define x 15
#define y 30
struct SqList
{
	int data[10];
	int len;
};
void InitList(struct SqList* L)
{
	L->len = 10;
	L->data[0] = 10; L->data[1] = 14; L->data[2] = 19; L->data[3] = 16;  L->data[4] = 30; L->data[5] = 27; L->data[6] = 49; L->data[7] = 18; L->data[8] = 11;	L->data[9] = 39;
}
void deleteList(struct SqList* L)
{
	for (int i = 0; i < L->len; i++)
	{
		if (L->data[i] >= x && L->data[i] <= y)
		{
			for (int j = i; j < L->len; j++)
				L->data[j] = L->data[j+1];
			L->len--;
			i = i - 1;
		}
	}
}
int main()
{
	struct SqList L;
	L.len = 0;
	InitList(&L);
	deleteList(&L);
	for (int i = 0; i < L.len; i++)
	{
		printf("%d ", L.data[i]);
	}
	printf("\n%d ", L.len);
	return 0;
}