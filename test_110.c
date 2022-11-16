# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int ret = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			ret = i * j;
			printf("%d*%2d=%2d  ", j,i,ret);
		}
		printf("\n");
	}
	return 0;
}