# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	int x = 1;
	scanf("%d", &n);
	for (a = 1; a <= n; a++)
	{
		x *= a;
	}
	printf("%d", x);
	return 0;
}