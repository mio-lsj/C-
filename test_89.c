# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 13;//1101
//  ��a�Ķ������еĵ���λ�ĳ�1
//	a = a | (1 << 4);
// 
//  ��a�Ķ������еĵ���λ�ĳ�0
//  a = a & ~(1<<4);
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 100;
//	a += 100;
//	a = a >> 3;
//	a >>= 3;
//
//	//=  ��ֵ        ==  �ж���� 
//	return 0;
//}

//int main()
//{
//	int flag = ;
//	printf("%d", !flag);
//	////flagΪ��
//	//if (flag)
//	//{
//	//	printf("hehe\n");
//	//}
//	////flagΪ��
//	//if (!flag)
//	//{
//	//	printf("haha\n");
//	//}
//	return 0;
//}


//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);
//
//	//int a = 10;
//	//char arr[10] = { 0 };
//	//printf("%d\n", sizeof(a));//����a��ռ�ռ�Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof(arr));
//	//sizeof��һ��������
//	return;
//}

//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001 - ԭ��
//	//11111111111111111111111111111110 - ����
//	//11111111111111111111111111111111 - ����
//	// ~ ��λȡ��
//	int b = ~a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int i = 10;
//	int b = a++;//����++,��ʹ�ã���++
//	printf("%d\n", a);//11
//	printf("%d\n", b);//10
//	int c = ++i;//ǰ��++����++����ʹ��
//	printf("%d\n", i);//11
//	printf("%d\n", c);//11
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", a--);
//	printf("%d\n", a);
//	return 0;
//}

int main()
{
	int a = 1;
	int b = (++a) + (++a) + (++a);
	printf("%d\n", b);
	return 0;
}