#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct ListNode
{
	char data;
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
		printf("%c ", cur->data);
		cur = cur->next;
	}
	printf("\n");
	printf("\n");
}

SLNode* createNode(char x)
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

void ListLength(SLNode* Node)
{
	assert(Node);
	int count = 0;
	SLNode* cur = Node->next;
	while (cur)
	{
		cur = cur->next;
		count++;
	}
	printf("����ĳ���Ϊ%d\n", count);
	printf("\n");
}

void judgeList(SLNode* Node)
{
	if (Node->next == NULL)
	{
		printf("������Ϊ��\n");
	}
	else
	{
		printf("������Ϊ��\n");
	}
	printf("\n");
}

void GetElem(SLNode* Node,int x)
{
	assert(Node);
	int i = 0;
	SLNode* cur = Node;
	while (i < x)
	{
		cur = cur->next;
		i++;
	}
	printf("������Ԫ��Ϊ:%c\n", cur->data);
	printf("\n");
}

void Printa(SLNode* Node,char x)
{
	assert(Node);
	SLNode* cur = Node;
	int i = 0;
	while (cur->next)
	{
		if (cur->data == x)
		{
			printf("a���߼�λ��Ϊ:%d\n", i);
		}
		cur = cur->next;
		i++;
	}
	printf("\n");
}

void InsertElem(SLNode* Node, int pos, char x)
{
	assert(Node);
	int i = 0;
	SLNode* cur = Node;
	SLNode* prev = Node;
	while (cur)
	{
		prev = cur;
		cur = cur->next;
		i++;
		if (i == pos)
		{
			SLNode* newnode = createNode(x);
			prev->next = newnode;
			newnode->next = cur;
		}
	}
}

void DeleteElem(SLNode* Node,int pos)
{
	assert(Node);
	int i = 0;
	SLNode* cur = Node;
	SLNode* prev = Node;
	while (i <= pos)
	{
		prev = cur;
		cur = cur->next;
		i++;
		if (i == pos)
		{
			prev->next = cur->next;
			cur->next = NULL;
			free(cur);
		}
	}
}

void DestroyList(SLNode* Node)
{
	free(Node);
}

int main()
{
	SLNode* Node = InitNode();
	SListPushback(Node, 'a');
	SListPushback(Node, 'b');
	SListPushback(Node, 'c');
	SListPushback(Node, 'd');
	SListPushback(Node, 'e');
	printf("�����������Ϊ");
	PrintList(Node);

	ListLength(Node);

	judgeList(Node);

	GetElem(Node, 3);

	Printa(Node, 'a');

	printf("�ڵ��ĸ�λ�ò���f��,������Ϊ:");
	InsertElem(Node, 4, 'f');
	PrintList(Node);

	printf("ɾ��������Ԫ�غ�,������Ϊ:");
	DeleteElem(Node, 3);
	PrintList(Node);

	DestroyList(Node);
	return 0;
}
