# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int A = 0;
	int B = 0;
	int i = 0;

	printf("����������A��B��ֵ:");
	scanf("%d %d", &A, &B);
	int min = A > B ? A : B;
	for (i = min; i < A*B; i++)
	{
		if (i % A == 0 && i % B == 0)
		{
			break;
		}
	}
	printf("A��B����С������Ϊ%d", i);
	return 0;
}