# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;  //数据域
	struct Node* next;  //指针域
};

struct Node* createList()
{
	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
	//headNode 成为了结构体变量
	//变量使用前必须被初始化
	//headNode->data = 1;
	headNode->next = NULL;
	return headNode;
}

//创建结点
struct Node* createNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

//打印
void printList(struct Node* headNode)
{
	struct Node* pMove = headNode->next;
	while (pMove)
	{
		printf("%d ", pMove->data);
		pMove = pMove->next;
	}
	printf("\n");
}

//插入结点，插入哪个链表，插入结点的数据是多少
void insertNodeByHead(struct Node* headNode, int data)
{
	//创建插入的结点
	struct Node* newNode = createNode(data);
	newNode->next = headNode->next;
	headNode->next = newNode;
}

void deleteNodeByAppoin(struct Node* headNode,int posData)
{
	struct Node* posNode = headNode->next;
	struct Node* posNodeFront = headNode;
	if (posNode == NULL)
		printf("无法删除,链表为空");
	else
	{
		while (posNode->data != posData)
		{
			posNodeFront = posNode;
			posNode = posNode->next;
			if (posNode == NULL)
			{
				printf("未找到数据，无法删除");
				return;
			}
		}
		posNodeFront->next = posNode->next;
		free(posNode);
	}

}

int main()
{
	/*struct Node Node1 = { 1,NULL };
	struct Node Node2 = { 2,NULL };
	struct Node Node3 = { 3,NULL };
	Node1.next = &Node2;
	Node2.next = &Node3;
	system("pause");   静态链表*/
	struct Node* list = createList();
	insertNodeByHead(list, 1);
	insertNodeByHead(list, 2);
	insertNodeByHead(list, 3);
	insertNodeByHead(list, 4);
	insertNodeByHead(list, 5);
	printList(list);
	deleteNodeByAppoin(list,3);
	printList(list);
	system("pause");
	return 0;
}

//链表是结构体变量与结构体变量通过指针连接在一起的
//动态创建链表：动态内存申请+模块化设计
//1.创建链表（创建一个表头）   headNode
//2.创建结点
//3.插入结点
//4.删除结点