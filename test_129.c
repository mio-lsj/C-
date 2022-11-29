# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct student
{
	int num;
	float score;
	struct student* next;
};
int main()
{
	struct student a, b, c, * head, * p;
	a.num = 10541; a.score = 87.5;
	b.num = 10156; b.score = 56;
	c.num = 15648; c.score = 96;
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p = head;
	do 
	{
		printf("%lf %5.1f\n", p->num, p->score);
		p = p->next;
	} while (p != NULL);
	system("pause");
	return 0;
}
