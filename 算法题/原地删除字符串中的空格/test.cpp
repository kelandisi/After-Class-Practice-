#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;

char * delChar(char* str, char del)
{
	if (str == 0 || *str == 0 || del == 0)
		return str;
	char *left = str;
	char *right = str;
	while (*right != del && *right != 0)
		right++;
	left = right;
	while (*right == del)
		right++;
	while (*right != 0)
	{
		if (*right != del)
		{
			*left = *right;
			left++;
		}
		right++;
	}
	*left = 0;
	return str;
}
int main()
{
	char del = ' ';
	char str[] = "abc  d  k    l";
	cout << delChar(str, del);
	system("pause");
	return 0;
}