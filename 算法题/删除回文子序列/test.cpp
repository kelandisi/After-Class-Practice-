#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	int removePalindromeSub(string s) {
		if (s.empty())
			return 0;     //第一种情况：字符串为空，0次

		for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
			if (s[i] != s[j])
				return 2;       //第三种情况：s本身不是回文序列，那么需要两次
		}

		return 1;  //第二种情况，s本身是回文序列，只需要一次
	}
};
int main()
{
	Solution s;
	string str;
	cin >> str;
	int ret = s.removePalindromeSub(str);
	cout << ret;
	system("pause");
	return 0;
}