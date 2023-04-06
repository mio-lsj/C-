#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void TestList1()
{
	LTNode* pList = ListInit();
	ListPushBack(pList, 1);
	ListPushBack(pList, 2);
	ListPushBack(pList, 3);
	ListPushBack(pList, 4);
	PrintNode(pList);
}

int main()
{
	TestList1();
	return 0;
}