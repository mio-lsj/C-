# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	//char arr[] = "abc";
	char arr[] = { 'a','b','c','\0'};
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}