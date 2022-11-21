# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int A = 0;
	int B = 0;
	int i = 0;

	printf("输入正整数A和B的值:");
	scanf("%d %d", &A, &B);
	int min = A > B ? A : B;
	for (i = min; i < A*B; i++)
	{
		if (i % A == 0 && i % B == 0)
		{
			break;
		}
	}
	printf("A和B的最小公倍数为%d", i);
	return 0;
}