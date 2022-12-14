# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int binary_search(int arr[], int key, int sz)
{
    int left = 0;
    int right = sz - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] > key)
        {
            right = mid - 1;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int key = 7;
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = binary_search(arr, key, sz);
    if (-1 == ret)
    {
        printf("找不到\n");
    }
    else
    {
        printf("找到了,下标是:%d\n", ret);
    }
    return 0;
}