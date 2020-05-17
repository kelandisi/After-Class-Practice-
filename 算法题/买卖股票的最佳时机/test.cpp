#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	//暴力法，复杂度过大
	/*int maxProfit(vector<int>& prices) {
		int ans = 0;
		for (int i = 0; i<prices.size(); i++)
		{
			for (int j = i + 1; j<prices.size(); j++)
			{
				ans = max(ans, prices[j] - prices[i]);
			}
		}
		return ans;

	}*/
	int maxProfit(vector<int>& prices) {
		int ans = 0;
		int min_ret = INT_MAX;
		for (int i = 0; i<prices.size(); i++)
		{
			min_ret = min(prices[i], min_ret);
			ans = max(ans, prices[i] - min_ret);
		}
		return ans;
};
int main()
{
	Solution s;
	vector<int> arr;
	int a = 0;
	while (cin>> a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	cout<< s.maxProfit(arr);
	system("pause");
	return 0;
}