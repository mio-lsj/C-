# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}



//指针-指针得到的是两个指针之间的元素个数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	printf("%d\n", &arr[9] - &arr[1]);
//	return 0;
//}






//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	int len = my_strlen("abc");
	printf("%d ", len);
	return 0;
}