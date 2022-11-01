# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void test_2()
{
    printf("jaio");
}

int test_1()
{
    test_2();
    return 0;
}

int main()
{
    test_1();
    return 0;
}