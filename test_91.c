# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//下标引用操作符
//	printf("%d\n", arr[4]);
//
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test()
//{
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);//函数调用操作符
//	test();
//	return 0;
//}



//结构成员访问操作符
// ->   .
//定义创建了一个自定义的类型
//struct Book
//{
//	//结构体的成员
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int main()
//{
//	int num = 10;
//	struct Book b = { "C语言","C2022",55};
//	struct Book *pb = &b;
//	printf("书名: %s\n", pb->name);
//	printf("书号: %s\n", pb->id);
//	printf("定价: %d\n", pb->price);
//
//	//printf("书名: %s\n", (*pb).name);
//	//printf("书号: %s\n", (*pb).id);
//	//printf("定价: %d\n", (*pb).price);
//
//	//printf("书名:%s\n", b.name);
//	//printf("书号:%s\n", b.id);
//	//printf("定价:%d\n", b.price);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a + b * 7;
//
//	return 0;
//}


//整型提升
//int main()
//{
//	char a = 3;
//	//00000011 - a
//	char b = 127;
//	//01111111 - b
//	char c = a + b;
//	//000000000000000000000011 - a
//	//000000000000000001111111 - b
//	//000000000000000010000010
//	
//	//10000010 - c
//	//111111111111111110000010 - 补码
//	//111111111111111110000001 - 反码
//	//100000000000000001111110 - 原码
//	printf("%d\n", c);
//	return 0;
//}

