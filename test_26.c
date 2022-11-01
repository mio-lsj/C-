# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int sum = 0;
	int ret = 1;
	for (n = 1; n <= 10; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}
