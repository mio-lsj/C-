# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[20] = { 0 };
    char arr2[] = "hello";
    printf("%s\n", strcpy(arr1, arr2));
    return 0;
}