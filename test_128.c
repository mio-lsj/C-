# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void function(int arr[],int sz)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < sz; j++)
		{
			if (arr[i] < arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main()
{
	int i = 0;
	int arr[] = { 8,13,5,7,1,11,6,9 };
	int sz = sizeof(arr) / sizeof(0);
	for (i = 0; i < sz; i++)
	{
		printf("%3d ", arr[i]);
	}
	printf("\n");
	function(arr,sz);
	printf("这个数组从小到大排序为:");
	for (i = 0; i < 8; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}