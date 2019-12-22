#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	int strStr(string haystack, string needle) 	
	{
		if (needle.empty())
			return 0;
		if (haystack.size() < needle.size())
			return -1;
		for (int i = 0; i <= haystack.size() - needle.size(); i++)
		{
			if (haystack.substr(i, needle.size()) == needle)
				return i;
		}
		return -1;
	}
};

int main()
{
	Solution s;
	string s1;
	string s2;
	while (cin>>s1>>s2)
	{
		int ret = s.strStr(s1,s2);
		cout << ret<<endl;
	}
	
	system("pause");
	return 0;
}