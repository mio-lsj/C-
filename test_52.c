# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int Add(int, int);
    int c = Add(a, b);
    printf("%d\n", c);
    return 0;
}

int Add(int x, int y)
{
    return x + y;
}
