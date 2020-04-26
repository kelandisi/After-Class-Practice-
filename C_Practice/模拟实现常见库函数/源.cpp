#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
using namespace std;

//模拟实现strcmp和strncmp
int MY_strcmp(const char *str1, const char *str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1 == *str2)
	{
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

int MY_strncmp( const char *str1,const char *str2,int count)
{
	assert(str1!=NULL);
	assert(str2!=NULL);
	while (--count && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

//模拟实现strcpy和strncpy

char* My_strcpy(char* dest, const char* src)
{
	char* tmp = dest;
	assert(dest!=NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	return tmp;
}


char* My_strncpy(char* dest, const char* src,int count)
{
	char* tmp = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (count && (*dest++ = *src++))
	{
		count--;
	}

	if (count)
	{
		while (--count)
		{
			*dest++ = '\0';
		}
	}
	return tmp;
}



//模拟实现strcat和strncat
char *My_strcat(char *dest, const char *src)
{
	char* tmp = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return tmp;
}


char *My_strncat(char *dest, const char *src, int count)
{
	char* tmp = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest != '\0')
	{
		dest++;
	}
	while (count && (*dest++ = *src++))
		count--;
	*dest = '\0';
	return tmp;
}



//模拟实现strstr
char* My_strstr(const char *str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	char *cp = (char* )str1;
	char *s1 = NULL;
	char *s2 = (char* )str2;
	if (*str2 == '\0')
		return NULL;
	while (*cp)
	{
		s1 = (char*)cp;
		s2 = (char*)str2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return cp;
		cp++;
	}
}



//模拟实现memcpy
void *My_memcpy(void *dest, const void *src, int count)
{
	void *tmp = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (count--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return tmp;
}


//模拟实现memmove
void *My_memmove(void *dest, const void *src, int count)
{
	void *tmp = dest;
	assert(dest != NULL);
	assert(src != NULL);
	if (dest < src)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src +count);			
		}
	}
	return tmp;
}
int main()
{
	//char str[15] = "abcdaaaa";
	//MY_strncmp(str, "abcdddd", 4);
	//My_strcpy(str, "hello");
	//My_strncpy(str, "hello",6);
	//My_strcat(str, "Hello");
	//My_strncat(str, "Hello", 6);
	/*char *p1 = "abcdef";
	char *p2 = "abcdabcdefndawn";
	cout<< My_strstr(p2,p1);*/
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[20] = { 0 };
	//memcpy(arr2, arr1, sizeof(arr1));

	My_memmove(arr1 + 2, arr1,16);
	for (int i = 0; i < sizeof(arr1) / sizeof(int); i++)
	{
		cout << arr1[i]<<endl;
	}
	system("pause");
	return 0;
 }