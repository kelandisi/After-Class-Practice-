#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//暴力法 复杂度过高（o（n^2）)
int maxSubArray(vector<int> nums)
{
	int max = INT_MIN;
	for (int i = 0; i < nums.size(); ++i)
	{
		int sum = 0;
		for (int j = i; j < nums.size(); ++j)
		{
			sum += nums[j];
			if (sum > max)
				max = sum;
		}
	}
	return max;
}


//动态规划
int maxSubArraydp(vector<int> nums)
{
	int result = INT_MIN;
	vector<int> dp(nums.size());
	dp[0] = nums[0];
	result = dp[0];
	for (int i = 1; i < nums.size(); ++i)
	{
		dp[i] = max(dp[i - 1] + nums[i], nums[i]);
		result = max(result, dp[i]);
	}
	return result;
}
int main()		
{
	vector<int> nums;
	int n = 0;
	while (cin>>n)
	{
		nums.push_back(n);
		if (cin.get() == '\n')
		{
			break;
		}
	}

	int ret = maxSubArraydp(nums);
	cout << ret;
	system("pause");
	return 0;
}