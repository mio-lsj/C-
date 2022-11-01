# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    char arr[] = "hello";
    memset(arr, 'x', 3);
    printf("%s", arr);
    return 0;
}
