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
	printf("������x,y��ֵ:");
	scanf("%lf %d", &x, &y);
	printf("\n");
	double ret = function(x,y);
	printf("x^y��ֵΪ:%lf\n",ret);
	return 0;
}