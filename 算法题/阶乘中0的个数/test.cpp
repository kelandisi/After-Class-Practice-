#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Solution {
public:
	int trailingZeroes(int n) {
		int count = 0;
		while (n>0)
		{
			count += n / 5;
			n /= 5;
		}
		return count;

	}
};
int main()
{
	Solution s;
	int n = 0;
	cin >> n;
	int ret = s.trailingZeroes(n);
	system("pause");
	return 0;
}