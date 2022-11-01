# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
    printf("******************************\n");
    printf("********  1、play  ***********\n");
    printf("********  2、exit  ***********\n");
    printf("******************************\n");
}

void game()
{
    int guess = 0;
    int a = rand() % 100 + 1;
    while (1)
    {
        printf("猜猜数字:");
        scanf("%d", &guess);
        if (guess > a)
        {
            printf("大了\n");
        }
        else if (guess < a)
        {
            printf("小了\n");
        }
        else
        {
            printf("猜对了\n");
            break;
        }

    }
}

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请输入:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 2:
            printf("退出游戏\n");
            break;
        default:
            printf("输入错误，请重新输入\n");
            break;
        }
    } while (input);
    return 0;
}