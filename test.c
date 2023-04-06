#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct SListNode
{
	struct SListNdoe* prev;
	int data;
	struct SListNdoe* next;
}SLNode;

SLNode* InitList()
{
	SLNode* headNode = (SLNode*)malloc(sizeof(SLNode));
	headNode->next = headNode;
	headNode->prev = headNode;
}

SLNode* createNdoe()
{
	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
	scanf("%d", &newnode->data);
	newnode->next = newnode;
	newnode->prev = newnode;
}

void PrintList(SLNode* Node)
{
	SLNode* cur = Node->next;
	printf("原单链表的数据为:");
	while (cur != Node)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void ListPushfront(SLNode* Node)
{
	SLNode* newnode = createNdoe();
	SLNode* front = Node->next;
	if (Node->next == Node)
	{
		Node->next = newnode;
		newnode->prev = Node;
		newnode->next = Node;
		Node->prev = newnode;
	}
	else
	{
		newnode->next = Node->next;
		front->prev = newnode;
		Node->next = newnode;
		newnode->prev = Node;
	}
}

void nizhiList(SLNode* Node)
{
	SLNode* cur = Node;
	SLNode* tmp = cur;
	SLNode* newnode = NULL;
	while (cur)
	{
		tmp = cur;
		cur = cur->next;
		tmp->next = newnode;
		tmp->prev = cur;
		newnode = tmp;
	}

}

void PrintNode(SLNode* Node)
{
	SLNode* cur = Node->next;
	printf("逆置后的链表为:");
	while (cur != Node)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

int main()
{
	SLNode* Node = InitList();
	printf("请输入数据:");
	for (int i = 0; i < 10; i++)
	{
		ListPushfront(Node);
	}
	
	PrintList(Node);

	nizhiList(Node);
	PrintNode(Node);
	return 0;
}