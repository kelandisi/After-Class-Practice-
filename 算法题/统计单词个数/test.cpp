#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	int countSegments(string s) {
		bool mark = true;
		int count = 0;
		for (int i = 0; i<s.length(); i++)
		{
			if (s[i] != ' '&&mark) { count++; mark = false; }
			else if (s[i] == ' ') mark = true;
		}
		return count;
	}
};

int main()
{
	Solution s;
	string str;
	getline(cin, str);
	int ret = s.countSegments(str);
	cout << ret;
	system("pause");
	return 0;
}