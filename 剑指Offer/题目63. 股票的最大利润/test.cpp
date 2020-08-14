#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int ans = 0;
		for (int i = 0; i < prices.size(); i++)
		{
			for (int j = i + 1; j < prices.size(); j++)
				ans = max(ans, prices[j] - prices[i]);
		}
		return ans;
	}
};

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		if (prices.size() <= 1)
			return 0;
		int min_price = prices[0], max_price = 0;
		// 记录  买入的最小值       最大获利
		for (int i = 1; i < prices.size(); i++)
		{
			max_price = max(max_price, prices[i] - min_price);
			min_price = min(min_price, prices[i]);
		}
		return max_price;
	}
};
