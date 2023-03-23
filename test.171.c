# define _CRT_SECURE_NO_WARNINGS 1
#include"SqList.h"

void TestSqList1()
{
	SL sl;
	SqListInit(&sl);

	//Í·²å
	SqListPushBack(&sl, 1);
	SqListPushBack(&sl, 2);
	SqListPushBack(&sl, 3);
	SqListPushBack(&sl, 4);
	SqListPushBack(&sl, 5);
	SqListPrint(&sl);

	SqListPopBack(&sl);
	SqListPopBack(&sl);
	SqListPrint(&sl);

	//Î²²å
	SqListPushfront(&sl, 6);
	SqListPushfront(&sl, 7);
	SqListPushfront(&sl, 8);
	SqListPushfront(&sl, 9);
	SqListPushfront(&sl, 10);
	SqListPrint(&sl);

	SqListPopFront(&sl);
	SqListPopFront(&sl);
	SqListPrint(&sl);

	SeListInsert(&sl, 2, 30);
	SeListInsert(&sl, 0, -1);
	SqListPrint(&sl);

	SqListErase(&sl, 1);
	SqListPrint(&sl);

	SqListDestory(&sl);
}

int main()
{
	TestSqList1();
	return 0;
}

