# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void* my_memmove(void* dest, const void* str, size_t num)
{
	void* ret = dest;
	if (dest < str)
	{
		while (num--)
		{
			*(char*)dest = *(char*)str;
			dest = (char*)dest + 1;
			str = (char*)str + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)str + num);
		}
	}
	return ret;
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr, arr+2, 20);
	return 0;
}