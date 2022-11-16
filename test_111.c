# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Initarr(int arr[300])
{
	int i = 0;
	int j = 1;
	for (i = 0; i < 300; i++)
	{
		arr[i] = j;
		j++;
	}
}

void sushu(int *arr)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i < 300; i++)
	{
		for (j = 2; j < arr[i]; j++)
		{
			if (arr[i] % j == 0)
				break;
		}
		if (arr[i] == j)
		{
			printf("%-3d ", arr[i]);
			count++;
			if (count % 8 == 0)
				printf("\n");
		}
	}
}

int main()
{
	int arr[300];
	Initarr(arr);
	sushu(arr);
	return 0;
}