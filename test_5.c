# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int age = 0;
	scanf("%d", &age);

	if (age < 18)
		printf("未成年");
	else if (age >= 18 && age < 26)
		printf("青年");
	else if (age >= 26 && age < 40)
		printf("中年");
	else if (age >= 40 && age < 60)
		printf("壮年");
	else if (age >= 60 && age <= 100)
		printf("老年");
	else
		printf("老");
	return 0;
}