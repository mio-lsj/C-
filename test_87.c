# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#define m 8
#define n 8

int main()
{	
	srand((unsigned int)time(NULL));
	int arr[m][n] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			int x = rand();
			arr[i][j] = x;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	int max = arr[0][0];
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	printf("max=%d\n", max);
	return 0;
}