# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n",&a);//& - ȡ��ַ������
//	int *pa = &a;//pa��������ŵ�ַ�� - pa����һ��ָ�����
//	*pa = 20;//* - �����ò����� - ��ӷ��ʲ�����
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a =(int) 3.14;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	//�Ƚ������ַ���������ʹ��==
//	//a && 0Ϊ��
//	//a || 0Ϊ��
//	//0 || 0Ϊ�� 
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	//if (a > 5)
//	//{
//	//	b = 1;
//	//}
//	//else
//	//{
//	//	b = -1;
//	//}
//	
//	//��Ŀ������
//	b = a > 5 ? 1: -1;
//	printf("%d\n", b);
// 
// max = (a > b ? a : b);
//	return 0;
//}

int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	//���ű��ʽ - Ҫ�����������μ��㣬�����������ʽ�Ľ�������һ�����ʽ�Ľ��
	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
	printf("%d\n", d);
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}