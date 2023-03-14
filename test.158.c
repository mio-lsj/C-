# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "qwer";
	strncpy(arr1,arr2,2);
	printf("%s\n", arr1);
	return 0;
}