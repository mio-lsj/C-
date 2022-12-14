# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
} 

int main()
{
	char arr[100] = { 0 };
	//输入进来
	gets(arr);
	//三步翻转法
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	printf("%s\n", arr);
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end !='\0')
		{
			end++;
		}
		//逆序单词
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}
	printf("%s\n", arr);
	return 0;
}