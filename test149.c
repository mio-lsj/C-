# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	printf("ͷ:");
	scanf("%d", &x);
	printf("��:");
	scanf("%d", &y);
	int m = (y-2*x)/2;
	int n = x - m;
	if (m > 0 && n > 0)
		printf("������%dֻ,����%dֻ", m, n);
	else
		printf("�÷����޽�");
	return 0;
}