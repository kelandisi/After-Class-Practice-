#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	int removePalindromeSub(string s) {
		if (s.empty())
			return 0;     //��һ��������ַ���Ϊ�գ�0��

		for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
			if (s[i] != s[j])
				return 2;       //�����������s�����ǻ������У���ô��Ҫ����
		}

		return 1;  //�ڶ��������s�����ǻ������У�ֻ��Ҫһ��
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