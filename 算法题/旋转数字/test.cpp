#define _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
	bool valid(int n) {
		bool valid = false;
		while (n > 0) {
			int t = n % 10;
			if (t == 2 || t == 5 || t == 6 || t == 9) {
				valid = true;
			}
			else if (t != 0 && t != 1 && t != 8) {
				return false;
			}
			n /= 10;
		}
		return valid;
	}
	int rotatedDigits(int N) {
		vector<int> nums;
		for (int t = N; t > 0; t /= 10) {
			nums.push_back(t % 10);
		}
		int S = nums.size();
		int res = pow(7, S - 1) - pow(3, S - 1);
		for (int i = pow(10, S - 1); i <= N; ++i) {
			res += valid(i);
		}
		return res;
	}
};
int main()
{
	int a = 0;
	cin >> a;
	Solution s;
	int ret = s.rotatedDigits(a);
	cout << ret;
	system("pause");
	return 0;

}