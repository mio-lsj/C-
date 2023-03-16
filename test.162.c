# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
	{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
	}
		return 0;
	}