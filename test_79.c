# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n,j,i,a;
	int max = 0;
	printf("����:");
	scanf("%d", &n);
	printf("����%d������:", n);
	for (j = 0; j < n; j++)
	{
		scanf("%d", &i);
		if (i >= 100 && i <= 200)
		{
			if(i > max)
				max = i;
		}

	}
	printf("���ֵ��%d",max);
	return 0;
}