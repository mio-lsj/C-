# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1;
	char* p = &a;
	if (*p == 0)
		printf("���");
	else if (*p == 1)
		printf("С��");
	return 0;
}