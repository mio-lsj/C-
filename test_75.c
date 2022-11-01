# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int arr[10] = { 0 };
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("&arr[%d] = %p\n", i, &arr[i]);
    }
    return 0;
}