# define _CRT_SECURE_NO_WARNINGS 1
//����223  ���31  ����
#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, m,j;
    printf("����������n: ");
    scanf("%d", &n);
    printf("����%d��������: \n", n);
    for(j=0;j<n;j++)
    {
        scanf("%d", &m);
        for (i = 2; i <= sqrt(m); i++)
        {
            if (m % i == 0)
                break;
        }
        if (i > sqrt(m) && m != 1)
            printf("%d��һ������\n", m);
        else
            printf("%d����һ������\n", m);
    }
    return 0;
}