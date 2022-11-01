# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);
    int t = 0;
    while (t = m % n)
    {
        m = n;
        n = t;
    }
    printf("最大公约数: %d\n", n);
    return 0;
}