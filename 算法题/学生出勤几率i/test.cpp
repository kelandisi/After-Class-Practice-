#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	bool checkRecord(string s) {
		s.insert(s.begin(), 'P');
		s.push_back('P');
		int n = s.size();
		int A_num = 0;
		int P_tag = 0;
		for (int i = 1; i < n - 1; ++i)
		{
			if (s[i] == 'A')
				A_num++;
			if (s[i] == 'L' && s[i - 1] == 'L' && s[i + 1] == 'L')
				P_tag = 1;
		}
		return (A_num <= 1 && P_tag == 0) ? true : false;

	}
};
int main()
{
	Solution s;
	string str;
	cin >> str;
	if (s.checkRecord(str))
		cout << "true";
	else
		cout << "false";
	system("pause");
	return 0;
}