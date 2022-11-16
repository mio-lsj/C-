# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void fun(int* a, int n, int* odd, int* even)
{
	while (n--)
	{
		if (a[n] % 2 == 0)
			*even += a[n];
		else
			*odd += a[n];
	}
}

int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 10;
	int odd = 0;
	int even = 0;
	fun(a, n, &odd, &even);
	printf("奇数和为:%d\n", odd);
	printf("偶数和为:%d\n", even);
	return 0;
}