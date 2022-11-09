# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 6,7,8,9,10 };
	strcpy(arr1, arr2);
	int i = 0;
	int sz = sizeof(arr1) / sizeof(0);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1);
	}
	return 0;
}