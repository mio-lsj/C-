# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j, * pi, * pj;
	pi = &i;
	pj = &j;
	i = 5;
	j = 7;
	printf("%d\t%d\t%d\t%d", i, j, pi, pj);
	printf("\n%d\t%d\t%d\t%d\n", &i, *&i, &j, *&j);
	return 0;
}