#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	bool CheckPermutation(string s1, string s2) {
		if (s1.size() != s2.size()) {
			return false;
		}
		int res = 0;
		for (int i = 0; i < s1.size(); i++) {
			res = res ^ s1[i] ^ s2[i];
		}
		if (res != 0) {
			return false;
		}
		return true;
	}
};
int main()
{
	Solution s;
	string str1;
	string str2;
	cin >> str1 >> str2;
	if (s.CheckPermutation(str1, str2))
		cout << "ture";
	else
		cout << "false";
	system("pause");
	return 0;
}

