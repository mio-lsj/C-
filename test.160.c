# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "zpw@bitedu.tech hehe";
	char* p = "@. ";
	char tmp[30] = { 0 };
	strcpy(tmp, arr);
	char* ret = NULL;

	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n",ret);
	}



	/*char* ret = strtok(tmp, p);
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);*/
	return 0;
}