# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a = 10;
    int* pa = &a;
    *pa = 20;
    printf("%d\n", a);
    return 0;
}
