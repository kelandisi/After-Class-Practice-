#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Solution {
public:
	bool isPalindrome(int x) {
		ostringstream  foo;
		string str1;
		string str2;

		foo << x;
		str1 = foo.str();
		str2 = foo.str();
		reverse(str1.begin(), str1.end());
		if (str1 == str2)
			return true;
		else
			return false;

	}
};
int main()
{
	int x = 0;
	cin >> x;
	Solution s;
	if (s.isPalindrome(x))
		cout << "�ǻ�����" << endl;
	else
		cout << "���ǻ�����" << endl;

	system("pause");
	return 0;
}