# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fun(int *a, int m)
{
	int x = 0;
	int y = 0;
	int i = 0;
	int count = 0;
	printf("����Ϊ");
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
	printf("����m��ֵ:");
	scanf("%d", &m);
	int ret = fun(a, m);
	printf("��%d��\n", ret);
	return 0;
}