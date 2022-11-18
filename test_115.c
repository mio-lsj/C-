# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//size_t = unsigned int
size_t my_strlen(const char* arr)
{
	assert(arr != NULL);
	int count = 0;
	while (*arr++)
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "hello world!";
	printf("数组arr长度为%lld\n", my_strlen(arr));
	return 0;
}