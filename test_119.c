# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int NumberOf1(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = NumberOf1(n);
	printf("%d", ret);
	return 0;
}