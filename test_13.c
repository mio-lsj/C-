# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);
	printf("��ȷ������(y/n):>");
	//��������
	//getchar();//����'\n'
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}
	int ch = getchar();
	if (ch == 'y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;
}