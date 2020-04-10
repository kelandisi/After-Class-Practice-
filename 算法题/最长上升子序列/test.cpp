#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution
{
public:
	int fun(vector<int> a)
	{
		int n = a.size();
		int pos = 1;
		if (n == 0)
			return 0;
		vector <int> dp(n, 0);
		for (int i = 0; i < n; i++)
		{
			dp[i] = 1;
			for (int j = 0; j < i; j++)
			{
				if (a[i] > a[j])
				{
					dp[i] = max(dp[i], dp[j] + 1);
				}
			}
		}
		return *max_element(dp.begin(), dp.end());
	}

	int fun2(vector<int> a)
	{
		int pos = 0;
		int n = a.size();
		if (n == 0)
			return 0;
		int dp[10000] = { 0 };
		dp[0]=a[0];

		for (int i = 0; i < n; i++)
		{
			if (a[i] > dp[pos])
				dp[++pos] = a[i];
			else
				dp[lower_bound(dp, dp + pos + 1, a[i]) - dp] = a[i];
		}
		return pos + 1;
	}
};
int main()
{
	Solution s;
	vector <int> arr;
	int a = 0;
	while (cin>>a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	int ret = s.fun2(arr);
	cout << ret;
	system("pause");
	return 0;
}