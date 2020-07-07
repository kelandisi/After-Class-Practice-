#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int nthUglyNumber(int n) {
		// ....
		dp[i] = min(min(dp[p2] * 2, dp[p3] * 3), dp[p5] * 5);
		if (dp[i] == dp[p2] * 2)
			p2++;
		if (dp[i] == dp[p3] * 3)
			p3++;
		if (dp[i] == dp[p5] * 5)
			p5++;
		// ......
	};

