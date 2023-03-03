# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int add(int x, int y)
{
	return x + y;
}
int main()
{
	int x = 0;
	int y = 0;
	add(x, y);
	int (*pf)(int ,int) = &add;
	int ret = (*pf)(3, 5);
	int ret = pf(3, 5);
	int ret = add(3, 5);
	printf("%p\n", &add);
	printf("%p\n", add);
	printf("%p\n", pf);
	printf("%d\n", ret);
}