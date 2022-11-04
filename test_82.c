# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//创建
	//int arr[3][4];
	//char ch[3][10];

	//初始化 - 创建的同时赋值
	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	//不完全初始化,后面补0
	//int arr[3][4]={1,2,,3,4,5}

	//int arr[3][4] = { {1,2,},{3,4},{4,5} };
	int arr[][4] = { {1,2,},{3,4},{4,5} };
	int i = 0;
	int j = 0;
	int *p = &arr[0][0];
	for (i = 0; i < 12; i++)
	{
		printf("%d ", *p);
		p++;
	}

	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("&arr[%d][%d] = %p\n",i , j , arr[i][j]);
	//	}
	//	printf("\n");
	//}
	return 0;
}

//二维数组在内存中也是连续存放的