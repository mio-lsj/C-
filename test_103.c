# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//�ṹ�����
//������һ����ͬ����Ԫ�صļ���
//�ṹ����һЩֵ�ļ���,����ֵ�����Ϳ��Բ�ͬ
struct B
{
	char c;
	short s;
	double d;
};

struct Stu
{
	//�ṹ�ĳ�Ա����
	struct B sb;
	char name[20];
	int age;
	char id[20];
}s1,s2;//s1,s2Ҳ�ǽṹ�����
//s1,s2��ȫ�ֱ���

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
	//s�Ǿֲ�����
	struct Stu s = {{'w',20,3.14},"����",20,"20200534"};//����
	print1(s);//��ֵ����
	print2(&s);//��ַ����,Ч�ʸ�

	////.  ->
	//printf("%c\n", s.sb.c);
	//printf("%s\n", s.id);

	//struct Stu* ps = &s;
	//printf("%c\n", (*ps).sb.c);
	//printf("%c\n", ps -> sb.c);
	return 0;
}

//�������õĲ���ѹջ
//ջ��һ�����ݽṹ���Ƚ��ĺ����������ȳ�
