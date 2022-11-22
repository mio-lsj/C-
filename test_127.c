# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr[] = "i am tomato";
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < len; i++)
	{
		if (arr[i] != ' ')
		{
			arr[i] = arr[i] + 1;
		}
	}
	printf("%s\n", arr);
	for (i = 0; i < len; i++)
	{
		if (arr[i] != ' ')
		{
			arr[i] = arr[i] - 1;
		}
	}
	printf("%s\n", arr);
	return 0;
}