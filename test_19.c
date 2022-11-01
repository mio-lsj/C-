# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	for (a = 1; a <= 10; a++)
	{
		if (a == 5)
			break;
		printf("%d\n", a);
	}
	return 0;
}