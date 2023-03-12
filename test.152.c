# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;  //������
	struct Node* next;  //ָ����
};

struct Node* createList()
{
	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
	//headNode ��Ϊ�˽ṹ�����
	//����ʹ��ǰ���뱻��ʼ��
	//headNode->data = 1;
	headNode->next = NULL;
	return headNode;
}

//�������
struct Node* createNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

//��ӡ
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

//�����㣬�����ĸ�����������������Ƕ���
void insertNodeByHead(struct Node* headNode, int data)
{
	//��������Ľ��
	struct Node* newNode = createNode(data);
	newNode->next = headNode->next;
	headNode->next = newNode;
}

void deleteNodeByAppoin(struct Node* headNode,int posData)
{
	struct Node* posNode = headNode->next;
	struct Node* posNodeFront = headNode;
	if (posNode == NULL)
		printf("�޷�ɾ��,����Ϊ��");
	else
	{
		while (posNode->data != posData)
		{
			posNodeFront = posNode;
			posNode = posNode->next;
			if (posNode == NULL)
			{
				printf("δ�ҵ����ݣ��޷�ɾ��");
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
	system("pause");   ��̬����*/
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

//�����ǽṹ�������ṹ�����ͨ��ָ��������һ���
//��̬����������̬�ڴ�����+ģ�黯���
//1.������������һ����ͷ��   headNode
//2.�������
//3.������
//4.ɾ�����