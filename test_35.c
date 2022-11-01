# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a = 0;
    for (a = 100; a <= 200; a++)
    {
        int j = 0;
        for (j = 2; j < a; j++)
        {
            if (a % j == 0)
            {
                break;
            }
        }
        if (a == j)
        {
            printf("%d ", a);
        }
    }
    return 0;
}