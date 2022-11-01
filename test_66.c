# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int test(int a)
{
    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
        return 1;
    else
        return 0;
}
int main()
{
    int a = 0;
    int count = 0;
    for (a = 1000; a <= 2000; a++)
    {
        if (test(a) == 1)
        {
            count++;
            printf("%d ", a);
        }

    }
    printf("\n%d\n", count);

    return 0;
}