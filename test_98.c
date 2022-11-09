# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//1.指针未初始化，野指针
//	//int* p;
//	//*p = 20;
//
//	//2.越界访问
//	/*int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}*/
//
//	return 0;
//}



//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	test();
//	return 0;
//}


int main()
{
	//不知道指针初始化为什么时，直接初始化为NULL
	int* p = NULL;
	//明确知道初始化的值
	int a = 10;
	int* ptr = &a;

	//C语言本身是不会检查越界行为的

	return 0;
}