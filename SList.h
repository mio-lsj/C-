#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LTDateType;

typedef struct ListNode
{
	LTDateType data;
	struct ListNode* prev;
	struct ListNode* next;
}LTNode;

LTNode* ListInit();
void PrintNode(LTNode* phead);
void ListPushBack(LTNode* phead, LTDateType x);