# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m = 0;
	scanf("%d", &m);
	if (m % 5 == 0)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}