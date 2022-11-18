# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<assert.h>
//void my_strlen(char* arr1,const char* arr2)
//{
//	assert(arr2 != NULL);//断言
//	assert(arr1 != NULL);//断言
//	while (*arr1++ = *arr2++);
//}
//
//int main()
//{
//	char arr1[20] = { "xxxxxxxxx" };
//	char arr2[] = { "hello" };
//	my_strlen(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

int main()
{
	//int num = 10;
	//int* p = &num;
	//*p = 20;
	//printf("%d\n", num);

	//const 修饰变量，这个变量被称为常变量，不能被修改，但是本质上还是变量
	const int num = 10;
	int n = 100;
	int* const p = &n;
	p = &n;
	//const 修饰指针变量时，如果放在*的左边，修饰的是*p，表示指针指向的内容，不能通过指针改变
	// 如果放在右边，表示指针变量不能被改变，但是指针指向的内容可以随便改改变
	//但是指针变量本身，是可以修改的
	//const int* p = &num;
	//*p = 20;
	printf("%d\n", num);

	return 0;
}

