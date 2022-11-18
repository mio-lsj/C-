# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* arr1,const char* arr2)
{
	assert(arr2 != NULL);//╤оят
	assert(arr1 != NULL);//╤оят
	char* ret = arr1;
	while (*arr1++ = *arr2++);
	return ret;
}

int main()
{
	char arr1[20] = "xxxxxxxxx";
	char arr2[] = "hello";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}