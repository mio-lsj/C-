# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int test(int* p1, int* p2)
{
    int c = 0;
    c = *p1;
    *p1 = *p2;
    *p2 = c;
    return 1;
}

int main()
{
    int a = 20;
    int b = 10;
    test(&a, &b);
    printf("%d %d", a, b);
    return 0;
}