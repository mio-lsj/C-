# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 115; i++)
		if (i % 3 == 0)
			continue;
		else
		{
			count++;
			printf("%d ", i);
			if (count % 5 == 0)
				printf("\n");
		}
	return 0;
}