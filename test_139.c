# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Init(int arr[12][12])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 12; i++)
	{
		for (j = 0; j < i+1; j++)
		{
			arr[i][j] = 1;
		}
	}
}

int main()
{
	int arr[12][12] = { 0 };
	int i = 0;
	int j = 0;
	Init(arr);
	for (i = 2; i < 12; i++)
	{
		for (j = 1; j < i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i < 12; i++)
	{
		for (j = 0; j < 12-i; j++)
		{
			printf("   ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%6d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}