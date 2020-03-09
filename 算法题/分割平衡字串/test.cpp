#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	int balancedStringSplit(string s) {
		int count = 0;
		int temp = s[0];
		int num1 = 0, num2 = 0;
		for (int i = 0; i<s.length(); i++) {
			if (s[i] == temp)num1++;  //Ç°ÖÃ¼ÆÊý
			else if (temp != s[i]) { num2++; }
			if (num1 == num2) {
				count++;
				num1 = 0;
				num2 = 0;
			}
		}
		return count;
	}
};
int main()
{
	Solution s;
	string str;
	cin >> str;
	int ret = s.balancedStringSplit(str);
	cout << ret;
	system("pause");
	return 0;
}