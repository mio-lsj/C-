# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	//��ӡż��λ
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	//��ӡ����λ
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	return 0;
}