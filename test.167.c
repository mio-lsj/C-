# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Book
{
	char name[20];
	int price;
	char id[12];
}b4,b5,b6;//b4,b5,b6是全局的

//匿名结构体类型，只能用一次
struct
{
	char c;
	int i;
}s;

//匿名结构体类型的指针
struct
{
	char c;
	int i;
}*ps;

//结构体的自引用
struct Node
{
	int data;
	struct Node* next;
};

int main()
{
	//b1,b2,b3是局部变量
	struct Book b1;
	struct Book b2;
	struct Book b3;
	


	return 0;
}