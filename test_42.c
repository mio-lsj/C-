# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void，表示这个函数不返回任何值，也不需要返回
void swap(int* pa, int* pb)
{
    int z = 0;
    z = *pa;
    *pa = *pb;
    *pb = z;
}

int main()
{
    int a = 10;
    int b = 20;

    printf("交换前:a=%d b=%d\n", a, b);
    swap(&a, &b);
    printf("交换后:a=%d b=%d\n", a, b);
    return 0;
}