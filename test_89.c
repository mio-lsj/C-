# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 13;//1101
//  把a的二进制中的第五位改成1
//	a = a | (1 << 4);
// 
//  把a的二进制中的第五位改成0
//  a = a & ~(1<<4);
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 100;
//	a += 100;
//	a = a >> 3;
//	a >>= 3;
//
//	//=  赋值        ==  判断相等 
//	return 0;
//}

//int main()
//{
//	int flag = ;
//	printf("%d", !flag);
//	////flag为真
//	//if (flag)
//	//{
//	//	printf("hehe\n");
//	//}
//	////flag为假
//	//if (!flag)
//	//{
//	//	printf("haha\n");
//	//}
//	return 0;
//}


//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);
//
//	//int a = 10;
//	//char arr[10] = { 0 };
//	//printf("%d\n", sizeof(a));//计算a所占空间的大小，单位是字节
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof(arr));
//	//sizeof是一个操作符
//	return;
//}

//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001 - 原码
//	//11111111111111111111111111111110 - 反码
//	//11111111111111111111111111111111 - 补码
//	// ~ 按位取反
//	int b = ~a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int i = 10;
//	int b = a++;//后置++,先使用，在++
//	printf("%d\n", a);//11
//	printf("%d\n", b);//10
//	int c = ++i;//前置++，先++，在使用
//	printf("%d\n", i);//11
//	printf("%d\n", c);//11
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", a--);
//	printf("%d\n", a);
//	return 0;
//}

int main()
{
	int a = 1;
	int b = (++a) + (++a) + (++a);
	printf("%d\n", b);
	return 0;
}