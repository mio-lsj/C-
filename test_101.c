# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n",arr);//��������������Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p<==>%p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	printf("%d\n", arr[2]);
	printf("%d\n", p[2] );//p[2] --> *(p+2)
	//[]��һ����������2��arr������������
	//2��arr���Խ���
	printf("%d\n", 2[arr]);
	printf("%d\n", arr[2]);
	//arr[2] <==> *(arr+2) <==> * (p + 2) <==> *(2 + p) <==> *(2 + arr) == 2[arr]
	//2[arr] <==> *(2+arr)
	return 0;
}