#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<sstream>
#include<unordered_set>
using namespace std;

class Solution {
public:
	string toGoatLatin(string S) {
		unordered_set<char> vowels = { 'a','A','e','E','i','I','o','O','u','U' };
		istringstream ss(S);
		string temp, ans;
		string str = "ma";
		while (ss >> temp) {
			str += "a";
			if (vowels.find(temp[0]) != vowels.end())     //单词首字母是元音
				ans += temp + str + " ";
			else ans += temp.substr(1) + temp[0] + str + " ";       //单词首字母不是元音
		}
		ans.pop_back();
		return ans;
	}
};
int main()
{
	Solution s;
	string str;
	cin >> str;
	s.toGoatLatin(str);
	system("pause");
	return 0;
}