# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n,j,i,a;
	int max = 0;
	printf("输入:");
	scanf("%d", &n);
	printf("输入%d个整数:", n);
	for (j = 0; j < n; j++)
	{
		scanf("%d", &i);
		if (i >= 100 && i <= 200)
		{
			if(i > max)
				max = i;
		}

	}
	printf("最大值是%d",max);
	return 0;
}