# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int array[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(array) / sizeof(array[0]);
	int i = 0;
	int j = 0;
	for (i = 0; i < sz/2; i++)
	{
		int tmp = array[i];
		array[i] = array[sz - 1 - i];
		array[sz - 1 - i] = tmp;
	}
	for (j = 0; j < sz; j++)
	{
		printf("%d\n", array[j]);
	}
	return 0;
}