# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
Add(int* p)
{
    (*p)++;
}

int main()
{
    int num = 0;
    Add(&num);
    printf("%d\n", num);
    return 0;
}