#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Solution {
public:
	bool isUgly(int num) {
		if (num <= 0) return false;
		while (num != 1)
		{
			if (num % 2 == 0) num /= 2;
			else if (num % 3 == 0) num /= 3;
			else if (num % 5 == 0) num /= 5;
			else return false;
		}
		return true;
	}
};

int main()
{
	Solution s;
	int n = 0;
	cin >> n;
	if (s.isUgly(n))
		cout << "是丑数";
	else
		cout << "不是丑数";
	system("pause");
	return 0;
}