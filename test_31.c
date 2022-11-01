# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a = 0;
    for (a = 3; a < +100; a += 3)
    {
        printf("%d ", a);
    }
    return 0;
}