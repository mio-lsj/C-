# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};

struct Node* createlist()
{
	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
	headNode->next = NULL;
	return headNode;
}	

struct Node* createNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
}

void print(struct Node* list)
{
	struct Node* pmove = list->next;
	while (pmove)
	{
		printf("%d ", pmove->data);
		pmove = pmove->next;
	}
	printf("\n");
}

void InsertNode(struct Node* list, int data)
{
	struct Node* newNode = createNode(data);
	newNode->next = list->next;
	list->next = newNode;
}

void InverNode(struct Node* list)
{
	struct Node* p = list->next;
	struct Node* q = p->next;
	list->next = NULL;
	while (p != NULL)
	{
		p->next = list->next;
		list->next = p;
		p = q;
		if (q != NULL)
			q = q->next;
	}
}

int main()
{
	struct Node* list = createlist();
	InsertNode(list, 1);
	InsertNode(list, 2);
	InsertNode(list, 3);
	InsertNode(list, 4);
	InsertNode(list, 5);
	print(list);
	InverNode(list);
	print(list);
	return 0;
}