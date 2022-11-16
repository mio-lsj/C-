# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[] = { 2,5,3,6,8 };
	int* p = NULL;
	int i = 1;
	int s = 0;
	for (p = a; p < a + 5; p++)
	{
		i *= *p;
		s += *p;
	}
	printf("%d  %d\n", i, s);
	return 0;
}
