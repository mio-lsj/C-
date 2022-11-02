# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 1;
	int i;
	for (i = 1; i < 10; i++)
	{
		n = (n + 1) * 2;
	}
	printf("第一天共摘了%d个桃子!",n);
	return 0;
}