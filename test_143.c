# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 0,1,4,9,16,25,36,49,64,81 };
	int i = 0;
	int n = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("正序输出为: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	for (i = 0; i < len/2; i++)
	{
		n = arr[i];
		arr[i] = arr[len - 1];
		arr[len - 1] = n;
		len--;
	}

	printf("\n逆序输出为: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}