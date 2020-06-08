#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Solution {
public:
	double myPow(double x, int n) {
		if (x == 1 || n == 0) return 1;
		double ans = 1;
		long num = n;
		if (n < 0) {
			num = -num;
			x = 1 / x;
		}
		while (num) {
			if (num & 1) ans *= x;
			x *= x;
			num >>= 1;
		}
		return ans;
	}
};

int main()
{
	Solution s;
	int x = 0;
	int n = 0;
	cin >> x >> n;
	cout<< s.myPow(x, n);
	system("pause");
	return 0;

}