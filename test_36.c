# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char input[20] = { 0 };
    system("shutdown -s -t 60");
again:
    printf("请注意,你的电脑在1分钟内关机,如果输入:我是猪,就取消关机\n");
    scanf("%s", input);
    if (strcmp(input, "我是猪") == 0)//两个字符串比较用strcmp()
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }

    return 0;
}
