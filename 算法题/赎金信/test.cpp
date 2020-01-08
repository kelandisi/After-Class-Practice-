#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) {
		int cnt[26] = { 0 };
		for (int i = 0; i < magazine.length(); i++)
			cnt[magazine[i] - 'a']++;
		for (int i = 0; i < ransomNote.length(); i++)
			if (--cnt[ransomNote[i] - 'a'] < 0) return false;
		return true;
	}
};
int main()
{
	Solution s;
	string str1;
	string str2;
	cin >> str1;
	cin >> str2;
	if (s.canConstruct(str1, str2))
	{
		cout << "true" << endl;
	}
	else
		cout << "false" << endl;
	system("pause");
	return 0;
}