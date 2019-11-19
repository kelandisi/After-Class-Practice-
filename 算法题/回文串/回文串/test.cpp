#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
bool is_reback(string &str)
{
	int begin = 0;
	int end = str.size() - 1;
	while (begin < end)
	{
		if (str[begin] != str[end])
		{
			return false;
		}
		begin++;
		end--;
	}
	return true;
}
int main()
{

	string s1;
	string s2;
	getline(cin,s1);
	getline(cin,s2);
	int count = 0;
	for (int i = 0; i < s1.size(); ++i)
	{
		string str = s1;
		str	.insert(i, s2);
		if (is_reback(str))
		{
			count++;
		}
	}
	cout << count;
	system("pause");
	return 0;
}