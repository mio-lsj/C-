# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int compare(int a, int b, int c)
{
	int i = 0;
	if (a > b && a > c)
		i = a;
	else if (b > a && b > c)
		i = b;
	else if (c > a && c > b)
		i = c;
	return i;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	int max = compare(a, b, c);
	printf("%d\n", max);
	return 0;
}