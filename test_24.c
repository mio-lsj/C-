# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1;
	do
	{
		if (a == 5)
			//break;
			continue;
		printf("%d ", a);
		a++;
	} while (a <= 10);

	return 0;
}