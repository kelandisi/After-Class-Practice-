#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	int repeatedStringMatch(string A, string B) {
		if (A.empty()) {
			return -1;
		}
		string T = A;
		int i = 1;
		while (T.size() < B.size()) {
			T.append(A);
			++i;
		}
		if (T.find(B) != string::npos) {
			return i;
		}
		T.append(A);
		++i;
		if (T.find(B) != string::npos) {
			return i;
		}
		return -1;
	}
};
int main()
{
	Solution s;
	string str1;
	string str2;
	cin >> str1;
	cin >> str2;
	int ret = s.repeatedStringMatch(str1, str2);
	cout << ret;
	system("pause");
	return 0;
}