# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<assert.h>
//void my_strlen(char* arr1,const char* arr2)
//{
//	assert(arr2 != NULL);//����
//	assert(arr1 != NULL);//����
//	while (*arr1++ = *arr2++);
//}
//
//int main()
//{
//	char arr1[20] = { "xxxxxxxxx" };
//	char arr2[] = { "hello" };
//	my_strlen(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

int main()
{
	//int num = 10;
	//int* p = &num;
	//*p = 20;
	//printf("%d\n", num);

	//const ���α����������������Ϊ�����������ܱ��޸ģ����Ǳ����ϻ��Ǳ���
	const int num = 10;
	int n = 100;
	int* const p = &n;
	p = &n;
	//const ����ָ�����ʱ���������*����ߣ����ε���*p����ʾָ��ָ������ݣ�����ͨ��ָ��ı�
	// ��������ұߣ���ʾָ��������ܱ��ı䣬����ָ��ָ������ݿ������ĸı�
	//����ָ����������ǿ����޸ĵ�
	//const int* p = &num;
	//*p = 20;
	printf("%d\n", num);

	return 0;
}

