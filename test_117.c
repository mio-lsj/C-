# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int NumberOf1(unsigned int n)
{
	int count = 0;
	while (n)
	{

		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = NumberOf1(n);
	printf("%d\n", ret);
	return 0;
}