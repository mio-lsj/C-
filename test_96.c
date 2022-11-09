# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{	
	int a = 3;
	int b = 4;
	int c = 5;
	int x, y;
	printf("%d ", a<b && b>c);
	printf("%d ", a<b || b<c);
	printf("%d ", a || b+c && b-c);
	printf("%d ", !(x = a) && (y = b));
	return 0;
}