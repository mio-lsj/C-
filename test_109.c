# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fun(int* a, int n, int* b)
{
	int x = 0;
	int y = 0;
	printf("������ķ���Ϊ");
	for (x = 0; x < 10; x++)
	{
		if (a[x] < 60)
		{
			n++;
			b[y] = a[x];
			printf("%d  ", b[y]);
			y++;
		}
	}
	printf("\n");
	return n;
}

int main()
{
	int a[10] = { 60,100,56,19,75,48,65,81,45,80 };
	int n = 0;
	int b[10] = { 0 };
	int i = 0;
	printf("���ǵĳɼ�Ϊ:");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	int ret = fun(a, n, b);
	printf("��%d��", ret);
	return 0;
}