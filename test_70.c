# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* str)
{
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }

    return count;
}

void reverse_string(char* str)
{
    char tmp = *str;//1
    int len = my_strlen(str);
    *str = *(str + len - 1);//2
    *(str + len - 1) = '\0';//3
    if (my_strlen(str + 1) >= 2)
    {
        reverse_string(str + 1);//4
    }
    *(str + len - 1) = tmp;//5
}

int main()
{
    char arr[] = "abcdef";
    reverse_string(arr);
    printf("%s\n", arr);
    return 0;
}