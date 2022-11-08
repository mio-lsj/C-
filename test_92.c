# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 10;
	int ret = (++i) + (++i) + (++i);
	printf("%d", ret);
	return 0;
}