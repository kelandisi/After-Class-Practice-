#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Solution 
{
public:
	int climbStairs(int n) {
		if (n == 1) return 1;
		int a = 1;
		int b = 2;
		for (int i = 3; i <= n; i++)
		{
			int c = a + b;
			a = b;
			b = c;
		}
		return b;
	}
};
int main()
{
	Solution s;
	int n = 0;
	cin >> n;
	int ret = s.climbStairs(n);
	cout << ret;
	system("pause");
	return 0;
}