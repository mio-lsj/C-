# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;// aռ�ĸ��ֽ�
//	int *pa = &a;//�õ�����a���ĸ��ֽ��е�һ���ֽڵĵ�ַ
//	*pa = 20;//ͨ��pa�ҵ�a
//	return 0;
//}



//ָ�����͵�����
//1.ָ�����;�����:ָ������õ�Ȩ���ж��
//2.ָ�����;����ˣ�ָ����һ�������߶�Զ
//int mian()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	char *pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	//0 1 2 3 4 5 6 7 8 9 a b c d e f - 16����
//	//int a = 0x11223344;
//	//char* pc = &a;
//	//*pc = 0;
//	////int* pa = &a;
//	////*pa = 0;
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}