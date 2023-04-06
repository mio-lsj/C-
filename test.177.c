#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	char arr[] = "ACBDEDBCA";
	if (sizeof(arr) % 2 == 0)
	{
		for (i = 0; i < sizeof(arr) / 2; i++)
		{
			if (arr[i] != arr[sizeof(arr) - 2 - i])
			{
				break;
			}
		}
		if (i != sizeof(arr) / 2)
		{
			printf("该字符序列不是回文");
		}
		else
		{
			printf("该字符序列是回文");
		}
	}

	else
	{
		for (i = 0; i < (sizeof(arr) + 1) / 2; i++)
		{
			if (arr[i] != arr[sizeof(arr) - 2 - i])
			{
				break;
			}
		}
		if (i != (sizeof(arr) + 1) / 2)
		{
			printf("该字符序列不是回文");
		}
		else
		{
			printf("该字符串是回文");
		}
	}
	return 0;
}