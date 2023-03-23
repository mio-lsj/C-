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

struct Node* createNode(struct Node* list, int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = list;
	return newNode;
}

void InertNode(struct Node* list, int data)
{
	struct Node* newNode = createNode(list, data);
	newNode->next = list->next;
	list->next = newNode;
	newNode->next = list;
}

void printlist(struct Node* list)
{
	int i = 3;
	struct Node* pmove = list->next;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", pmove->data);
		pmove = pmove->next;
	}

	printf("\n");
}


int main()
{
	struct Node* a = createlist();
	struct Node* b = createlist();
	struct Node* c = createlist();
	InertNode(a, 3);
	InertNode(a, 2);
	InertNode(a, 1);
	printlist(a);
	InertNode(b, 7);
	InertNode(b, 6);
	InertNode(b, 5);
	printlist(b);


	return 0;
}