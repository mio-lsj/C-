# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[] = { 1,2,3 };
	int* p = NULL;
	int	i = 0;
	p = a;
	for (i = 0; i < 3; i++)
	{
		printf("%d %d %d %d\n", a[i], p[i], *(p + i), *(a + i));
	}
	return 0;
}