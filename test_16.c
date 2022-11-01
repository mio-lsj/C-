# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//-1
	{
		putchar(ch);
	}
	return 0;
}