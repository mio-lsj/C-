# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int m = 0;
    if (a > b)
        m = b;
    else
        m = a;
    while (1)
    {
        if (a % m == 0 && b % m == 0)
        {
            printf("最大公约数:%d\n", m);
            break;
        }
        m--;
    }
    return 0;
}