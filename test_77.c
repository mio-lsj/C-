# define _CRT_SECURE_NO_WARNINGS 1
//电子223  序号31  杨勇
#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, m,j;
    printf("输入正整数n: ");
    scanf("%d", &n);
    printf("输入%d个正整数: \n", n);
    for(j=0;j<n;j++)
    {
        scanf("%d", &m);
        for (i = 2; i <= sqrt(m); i++)
        {
            if (m % i == 0)
                break;
        }
        if (i > sqrt(m) && m != 1)
            printf("%d是一个素数\n", m);
        else
            printf("%d不是一个素数\n", m);
    }
    return 0;
}