# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (a = 1; a <= n; a++)
	{
		ret = ret * a;
	}
	printf("%d\n", ret);
	return 0;
}