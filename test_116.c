# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
long f(int n)
{
	if (n == 1)
		return 1;
	else
		return n * f(n - 1);
}

int main()
{
	int n = 0;
	printf("«Î ‰»Înµƒ÷µ:");
	scanf("%d", &n);
	long f(n);
	printf("%d", f(n));
	return 0;
}