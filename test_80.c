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
	printf("��һ�칲ժ��%d������!",n);
	return 0;
}