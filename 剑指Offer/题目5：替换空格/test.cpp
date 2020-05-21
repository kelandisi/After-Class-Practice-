#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	string replaceSpace(string s) {
		string ret;
		for (int i = 0; i<s.size(); i++)
		{
			if (s[i] == ' ')
				ret += "%20";
			else
				ret += s[i];
		}
		return ret;
	}
};
int main()
{
	Solution s;
	string str;
	cin >> str;
	cout<<s.replaceSpace(str);

	system("pause");
	return 0;
}