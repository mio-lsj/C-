# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int age = 0;
	scanf("%d", &age);

	if (age < 18)
		printf("δ����");
	else if (age >= 18 && age < 26)
		printf("����");
	else if (age >= 26 && age < 40)
		printf("����");
	else if (age >= 40 && age < 60)
		printf("׳��");
	else if (age >= 60 && age <= 100)
		printf("����");
	else
		printf("��");
	return 0;
}