#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
	int findLUSlength(string a, string b) {

		if (a.length() != b.length())
			return max(a.length(), b.length());

		else {

			if (a.compare(b) == 0)
				return -1;
			else
				return a.length();
		}

		return 0;

	}
};
int main()
{
	string str1;
	string str2;
	Solution s;
	cin >> str1;
	cin >> str2;
	int ret = s.findLUSlength(str1, str2);
	cout << ret;
	system("pause");
	return 0;

}

