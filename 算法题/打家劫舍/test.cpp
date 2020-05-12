#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*你是一个专业的小偷，计划偷窃沿街的房屋。每间房内都藏有一定的现金，
影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统，
如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警。

给定一个代表每个房屋存放金额的非负整数数组，计算你在不触动警报装置的情况下，
能够偷窃到的最高金额。
*/
class Solution {
public:
	int rob(vector<int>& nums) {
		int even = 0;
		int odd = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (i % 2 == 0)
			{
				even += nums[i];
				even = max(even, odd);
			}
			else
			{
				odd += nums[i];
				odd = max(even, odd);
			}	
		}
		return max(odd, even);
	}
};
int main()
{
	Solution s;
	vector<int> arr;
	int a = 0;
	while (cin >> a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	s.rob(arr);
	system("pause");
	return 0;
}