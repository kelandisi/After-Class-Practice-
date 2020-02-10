#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
	int countBinarySubstrings(string s) {
		int prev = 0;
		int curr = 1;
		int res = 0;
		for (int i = 1; i < s.size(); ++i) {
			if (s[i] == s[i - 1]) {
				++curr;
			}
			else {
				res += min(prev, curr);
				prev = curr;
				curr = 1;
			}
		}
		res += min(prev, curr);
		return res;
	}
};
int main()
{
	Solution s;
	string str;
	cin >> str;
	s.countBinarySubstrings(str);
	system("pause");
	return 0;
}