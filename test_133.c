# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//整型提升
	//有符号补1，无符号补0
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%d,b=%d,c=%d", a, b, c);
	return 0;
}

//char 到底是signed char 还是 unsigned char
//C语言标准没有规定，取决于编译器
//int 是 signed int 
//sho 