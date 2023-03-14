# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strcmp(const char* p, const char* q)
{
	while (*p == *q)
	{
		if (*p == '\0')
		{
			return 0;
		}
		p++;
		q++;
	}
	return *p - *q;
}

int main()
{
	char* p = "abcdef";
	char* q = "abdfc";
	int ret = my_strcmp(p, q);
	if (ret > 0)
	{
		printf("p>q\n");
	}
	else if (ret < 0)
	{
		printf("p<q\n");
	}
	else
	{
		printf("p=q\n");
	}
	return 0;
}



//int main()
//{
//	char* p = "obc";
//	char* q = "abc";
//	printf("%d", strcmp(p, q));
//	//p>q  >0
//	//p=q  =0
//	//p<q  <0
//	return 0;
//}