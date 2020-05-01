#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
	int fun(int n)
	{
		int count = 0;
		vector<bool> arr(n, true);
		for (int i = 2; i < n; i++)
		{
			if (arr[i])
				count++;
			for (int j = i + i; j < n; j += i)
			{
				arr[j] = false;
			}
		}
		return count;
	}
};
int main()
{
	Solution s;
	int n = 0;
	while (cin >> n)
	{
		cout << s.fun(n) << endl;
	}
	system("pause");
	return 0;
}