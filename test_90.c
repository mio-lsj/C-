# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n",&a);//& - 取地址操作符
//	int *pa = &a;//pa是用来存放地址的 - pa就是一个指针变量
//	*pa = 20;//* - 解引用操作符 - 间接访问操作符
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a =(int) 3.14;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	//比较两个字符串，不能使用==
//	//a && 0为假
//	//a || 0为真
//	//0 || 0为假 
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	//if (a > 5)
//	//{
//	//	b = 1;
//	//}
//	//else
//	//{
//	//	b = -1;
//	//}
//	
//	//三目操作符
//	b = a > 5 ? 1: -1;
//	printf("%d\n", b);
// 
// max = (a > b ? a : b);
//	return 0;
//}

int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	//逗号表达式 - 要从左向右依次计算，但是整个表达式的结果是最后一个表达式的结果
	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
	printf("%d\n", d);
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}