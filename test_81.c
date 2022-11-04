# define _CRT_SECURE_NO_WARNINGS 1
//µç×Ó223  31  ÑîÓÂ
#include<stdio.h>
int main()
{
	int a = 5;
	int b = 3;
	int c;
	c = a + b; a = a - 1; b = b - 1; c = c + 1;
	printf("%d\n", a + b + c);
	return 0;
}