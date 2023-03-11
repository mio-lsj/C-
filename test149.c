# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	printf("头:");
	scanf("%d", &x);
	printf("脚:");
	scanf("%d", &y);
	int m = (y-2*x)/2;
	int n = x - m;
	if (m > 0 && n > 0)
		printf("兔子有%d只,鸡有%d只", m, n);
	else
		printf("该方程无解");
	return 0;
}