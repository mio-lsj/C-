# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float arr1[] = { 1.0,2.0,3.0,4.0 };
	float arr2[] = { 1.0,3.0 };
	mencmp(arr1, arr2, 4);
	return 0;
}