# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char* my_strcat(char* arr, const char* arr1)
{
	char* ret = arr;
	while (*arr)
	{
		arr++;
	}
	while (*arr++ = *arr1++)
	{
		;
	}
	return ret;//����Ŀ��ռ����ʼ��ַ
}

int main()
{
	char arr[20] = "hello ";
	char arr1[] = "world";
	   //�ַ���׷�ӣ����ӣ�
	printf("%s\n", my_strcat(arr, arr1));
	return 0;
}