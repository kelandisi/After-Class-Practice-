#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	string generateTheString(int n) {
		string s;
		for (int i = 0; i<n - 1; i++) s += 'a';
		if (n % 2 == 0) s += 'b';
		else s += 'a';
		return s;
	}
};
int main()
{
	Solution s;
	int n = 0;
	cin >> n;
	string str = s.generateTheString(n);
	cout << str;
	system("pause");
	return 0;
}