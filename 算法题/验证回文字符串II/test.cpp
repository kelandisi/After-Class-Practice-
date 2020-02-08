#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	bool validPalindrome(string s) {
		if (isPalindrome(s))
			return true;
		//˫ָ�����ͷ���м��Ҳ���ͬ���ַ�
		int i = 0;
		int j = s.length() - 1;
		while (i < j)
		{
			if (s[i] != s[j]) {
				if (isPalindrome(s.substr(i, j - i)) || isPalindrome(s.substr(i + 1, j - i)))
					return true;
				return false;
			}
			i++;
			j--;
		}
		return false;
	}

	//�ж��Ƿ���Ĵ�
	bool isPalindrome(string s) {
		for (int i = 0; i < s.length() / 2; i++) {
			if (s[i] != s[s.length() - 1 - i])
				return false;
		}
		return true;
	}

};
int main()
{
	Solution s;
	string str;
	cin >> str;
	if (s.validPalindrome(str))
		cout << "true";
	else
		cout << "false";
	system("pause");
	return 0;
}
