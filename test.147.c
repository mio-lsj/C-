# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	double* d[5];
//	double *(*pd)[5] = &d;//pd就是一个数组值
//	int arr[10] = { 1,2,3,4,5 };
//	int (*parr)[10] = &arr;//parr就是一个数组指针,数组里每个元素都是int
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//	return 0;
//}

//数组名是数组首元素的地址，但是有2个例外
//1.sizeof（数组名） — 数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名 - 数组名表示整个数组，取出的是整个数组的地址

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i));
//	}
//	return 0;
//}

//p就是数组指针
void print(int (*p)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3, 5);//二维数组的数组名表示首元素的地址
	//二维数组的首元素是  第一行

	return 0;
}

//int (*parr3[10])[5]  存放数组指针的数组
//该数组能够存放10个数组指针，每个数组指针能够指向一个数组
//数组5个元素，每个元素是int类型
//相当于 parr[10]={a1,a2,a3...a10}
//其中一个a1 为 int(*a1)[5]