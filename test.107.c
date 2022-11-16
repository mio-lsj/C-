# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fun(int *a, int m)
{
	int x = 0;
	int y = 0;
	int i = 0;
	int count = 0;
	printf("素数为");
	for (x = 2; x <= m; x++)
	{
		for (y = 2; y <= x; y++)
		{
			if (x % y == 0)
			{
				break;
			}
		}

		if (y == x)
		{

			a[i] = x;
			printf("%d ", a[i]);
			i++;
			count++;
		}
	}
	printf("\n");
	return count;
}

int main()
{
	int m = 0;
	int a[100] = {0};
	int j = 0;
	printf("输入m的值:");
	scanf("%d", &m);
	int ret = fun(a, m);
	printf("共%d个\n", ret);
	return 0;
}