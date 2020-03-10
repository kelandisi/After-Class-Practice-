#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	string freqAlphabets(string s) {
		string ans;
		for (int i = 0; i < s.size(); ++i) {
			if (i + 2 < s.size() && s[i + 2] == '#') {
				ans += char((s[i] - '0') * 10 + (s[i + 1] - '1') + 'a');
				i += 2;
			}
			else {
				ans += char(s[i] - '1' + 'a');
			}
		}
		return ans;
	}
};
int main()
{
	Solution s;
	string str;
	string ret;
	cin >> str;

	ret = s.freqAlphabets(str);
	cout << ret;
	system("pause");
	return 0;
}
