# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int arr[10] = { 0 };
    arr[4] = 5;//[] 下标引用操作符
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}