# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//结构体初阶
//数组是一组相同类型元素的集合
//结构体是一些值的集合,但是值的类型可以不同
struct B
{
	char c;
	short s;
	double d;
};

struct Stu
{
	//结构的成员变量
	struct B sb;
	char name[20];
	int age;
	char id[20];
}s1,s2;//s1,s2也是结构体变量
//s1,s2是全局变量

void print1(struct Stu t)
{
	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name,t.age, t.id);
}

void print2(struct Stu* ps)
{
	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
}

int main()
{
	//s是局部变量
	struct Stu s = {{'w',20,3.14},"张三",20,"20200534"};//对象
	print1(s);//传值调用
	print2(&s);//传址调用,效率高

	////.  ->
	//printf("%c\n", s.sb.c);
	//printf("%s\n", s.id);

	//struct Stu* ps = &s;
	//printf("%c\n", (*ps).sb.c);
	//printf("%c\n", ps -> sb.c);
	return 0;
}

//函数调用的参数压栈
//栈是一种数据结构，先进的后出，后进的先出
