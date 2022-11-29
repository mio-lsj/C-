# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double function(double x, int y)
{
	
	if (y == 0)
		return 1;
	else
		return x * function(x, y - 1);
}

int main()
{
	double x = 0;
	int y = 0;
	printf("请输入x,y的值:");
	scanf("%lf %d", &x, &y);
	printf("\n");
	double ret = function(x,y);
	printf("x^y的值为:%lf\n",ret);
	return 0;
}