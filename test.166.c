# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	memset(arr, 1, 20);
	printf("%d ", arr[0]);
	return 0;
}