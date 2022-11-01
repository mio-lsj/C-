# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int arr1[8];//[要求是常量]
    char ch1[5];
    int a = 10;//初始化
    int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
    int arr3[5] = { 1,2,3, };//不完全初始化
    char ch2[] = { 'a','b','c' };// a b c
    char ch3[] = "abc";//a b c \0

    return 0;
}