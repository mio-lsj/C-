# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void����ʾ��������������κ�ֵ��Ҳ����Ҫ����
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

    printf("����ǰ:a=%d b=%d\n", a, b);
    swap(&a, &b);
    printf("������:a=%d b=%d\n", a, b);
    return 0;
}