#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string>
struct Stu
{
	int age;
	char name[20];
};

int cmp_age(const void* e1, const void* e2)
{
	return ((Stu*)e1)->age - ((Stu*)e2)->age;
}

int cmp_name(const void* e1, const void* e2)
{
	return strcmp(((Stu*)e1)->name , ((Stu*)e2)->name);
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}


void Swap(char* buf1,char* buf2,size_t width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp=*buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void Bubblesort(void* base, size_t sz, size_t width,
	int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for(j = 0; j < sz - 1 - i; j++)
		{
			if (cmp( (char*)base + j*width, (char*)base + (j + 1)*width) > 0)
			{
				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}

int main()

{
	Stu s[3] = { {10,"zhangsan"},{20,"lisi"},{15,"wangwu"} };	
	int arr[5] = { 5,8,2,6,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubblesort(arr, sz, sizeof(arr[0]), cmp_int);
	system("pause");
	return 0;
}