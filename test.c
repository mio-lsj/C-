#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define min 15
#define max 40

typedef struct ListNode
{
	int data;
	struct ListNode* next;
}SLNode;

SLNode* InitNode()
{
	SLNode* headnode = (SLNode*)malloc(sizeof(SLNode));
	headnode->next = NULL;
	return headnode;
}

void PrintList(SLNode* Node)
{
	assert(Node);
	SLNode* cur = Node->next;
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

SLNode* createNode(int x)
{
	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void SListPushback(SLNode* Node, char x)
{
	SLNode* newnode = createNode(x);
	if (Node->next == NULL)
	{
		Node->next = newnode;

	}
	else
	{
		SLNode* tail = Node;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

void DeleteNode(SLNode* Node)
{
	assert(Node);
	SLNode* cur = Node->next;
	SLNode* prev = Node->next;
	while (cur)
	{
		if (cur->data > min && cur->data < max)
		{
			prev->next = cur->next;
			free(cur);
			cur = prev->next;
		}
		else
		{
			prev = cur;
			cur = prev->next;
		}
	}
}

int main()
{
	SLNode* Node = InitNode();
	SListPushback(Node, 9);
	SListPushback(Node, 15);
	SListPushback(Node, 20);
	SListPushback(Node, 25);
	SListPushback(Node, 28);
	SListPushback(Node, 30);
	SListPushback(Node, 35);
	SListPushback(Node, 36);
	SListPushback(Node, 42);
	SListPushback(Node, 50);
	printf("该递增链表为:");
	PrintList(Node);

	DeleteNode(Node);
	printf("删除大于%d,小于%d后的链表为:", min, max);
	PrintList(Node);

	return 0;
}