#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
	vector<int> fun(int num)
	{
		vector<int> arr(num + 1);
		for (int i = 0; i < num + 1; i++)
		{
			arr[i] = 1;
			for (int j = i; j > 1; j--)
			{
				arr[j - 1] = arr[j - 1] + arr[j - 2];
			}
		}
		return arr;
	}
};
int main()
{
	Solution s;
	int n = 0;
	cin >> n;
	vector<int> ret = s.fun(n);
	for (int i = 0; i <= n; i++)
	{
		cout << ret[i]<< " ";
	}
	system("pause");
	return 0;
}