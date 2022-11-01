# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1;
	while (a <= 10)
	{
		if (a == 5)
			continue;
		printf("%d\n", a);
		a++;
	}
	return 0;
}