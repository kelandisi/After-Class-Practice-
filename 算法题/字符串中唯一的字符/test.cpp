#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	int firstUniqChar(string s) {
		int count[256] = { 0 };
		for (int i = 0; i < s.size(); i++)
		{
			count[s[i]]++;
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (count[s[i]] == 1)
				return i;
		}
	}
};
int main()
{
	Solution s;
	string str;
	cin >> str;
	int ret = s.firstUniqChar(str);
	cout << ret;
	system("pause");
	return 0;
}