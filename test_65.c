# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
    printf("******************************\n");
    printf("********  1��play  ***********\n");
    printf("********  2��exit  ***********\n");
    printf("******************************\n");
}

void game()
{
    int guess = 0;
    int a = rand() % 100 + 1;
    while (1)
    {
        printf("�²�����:");
        scanf("%d", &guess);
        if (guess > a)
        {
            printf("����\n");
        }
        else if (guess < a)
        {
            printf("С��\n");
        }
        else
        {
            printf("�¶���\n");
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
        printf("������:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 2:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("�����������������\n");
            break;
        }
    } while (input);
    return 0;
}