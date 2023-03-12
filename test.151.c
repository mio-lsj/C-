# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr[12] = { 0 };
	//char* p = "hello";
	//strcpy(arr,"hello");
	//char arr2[] = { 'a','b','c' };
	char* p = "hello world";
	strcpy(arr,p);
	printf("%s\n", arr);
	return 0;
}