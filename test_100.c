# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#define N_VALUES 5
ָ��Ĺ�ϵ����
int main()
{
	int values[5] = { 1,2,3,4,5 };
	int* vp = NULL;
	for (vp = &values[N_VALUES]; vp > &values[0];)
	{
		*--vp = 0;
	}
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", values[i]);
	}
	return 0;
}


