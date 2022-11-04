# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble_Sort(int arr[],int sz)//形参arr本质上是指针
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[ j ] = arr[j + 1];
				arr[j + 1] = tmp;
				j = j + 1;
			}
		}

	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//排序为升序
	//冒泡排序 -- 两两相邻的元素进行比较，可能的话进行交换 
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_Sort(arr , sz);//数组传参的时候，传递的其实是数组首元素的地址
	
	return 0;
}