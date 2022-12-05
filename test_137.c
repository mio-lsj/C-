# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%p\n", arr);
	printf("%p\n", arr + 5);
	return 0;;
}