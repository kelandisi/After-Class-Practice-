#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
	vector<vector<int>> fun(int num)
	{
		vector<vector<int>> arr(num);
		if (num == 0)
			return arr;
		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				if (j == 0 || j == i)
				{
					arr[i].push_back(1);
				}
				else
				{
					arr[i].push_back(arr[i - 1][j - 1] + arr[i - 1][j]);
				}
			}
		}
		return arr;
	}
};
int main()
{
	Solution s;
	int n = 0;
	vector<vector<int>> ret(0);
	cin >> n;
	ret = s.fun(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << ret[i][j]<<" ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}