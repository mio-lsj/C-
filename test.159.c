# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	char* cp = str1;

	if (*str2 == '\0')
	{
		return str1;
	}

	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && ( *s1 == *s2))
		{
			s1++;
			s2++;
		}

		if (*s2 == '\0')
		{
			return cp;
		}
		cp++;
	}
	return NULL;
}

int main()
{
	char arr1[] = "abbbcdefghi";
	char arr2[] = "bbcd";
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("没找到");
	}
	else
	{
		printf("找到了:%s\n", ret);
	}
	return 0;
}