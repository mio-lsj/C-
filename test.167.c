# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Book
{
	char name[20];
	int price;
	char id[12];
}b4,b5,b6;//b4,b5,b6��ȫ�ֵ�

//�����ṹ�����ͣ�ֻ����һ��
struct
{
	char c;
	int i;
}s;

//�����ṹ�����͵�ָ��
struct
{
	char c;
	int i;
}*ps;

//�ṹ���������
struct Node
{
	int data;
	struct Node* next;
};

int main()
{
	//b1,b2,b3�Ǿֲ�����
	struct Book b1;
	struct Book b2;
	struct Book b3;
	


	return 0;
}