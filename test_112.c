# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void my_strlen(char* arr1, char* arr2)
{
	while (*arr1++ = *arr2++);
}

int main()
{
	char arr1[20] = { "xxxxxxxxx"};
	char arr2[] = { "hello" };
	my_strlen(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}