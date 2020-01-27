#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	bool repeatedSubstringPattern(string s) {
		string str = s + s;
		str = str.substr(1, str.size() - 2);
		if (str.find(s) == -1)
			return false;
		return true;
	}
};

int main()
{
	Solution s;
	string str;
	cin >> str;
	if (s.repeatedSubstringPattern(str))
		cout << "ture";
	else
		cout << "false";
	system("pause");
	return 0;
}