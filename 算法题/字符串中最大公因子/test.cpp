#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	string gcdOfStrings(string str1, string str2) {
		if ((str1 + str2) != (str2 + str1))    return "";
		int res = maxPublicDig(str1.size(), str2.size());
		return str1.substr(0, res);
	}

	int maxPublicDig(int a, int b)
	{
		while (a != 0 && b != 0)
		{
			a = a % b;
			if (a == 0)
				break;
			swap(a, b);
		}
		return b;
	}
};
int main()
{
	string str1;
	string str2;
	cin >> str1 >> str2;
	Solution s;
	string ret = s.gcdOfStrings(str1, str2);
	cout << ret;

	system("pause");
	return 0;
}