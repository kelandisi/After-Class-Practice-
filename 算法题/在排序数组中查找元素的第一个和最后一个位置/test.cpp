#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
	vector<int> searchRange(vector<int>& nums, int target)
	{
		vector<int> ret;
		int start = -1;
		int end = -1;

		for (int i = 0; i < nums.size(); i++)
		{
			if (start == -1 && nums[i] == target)start = i;
			if (nums[i] == target)end = i;
		}
		ret.push_back(start);
		ret.push_back(end);
		return ret;
	}
};
int main()
{
	Solution s;
	vector <int> arr;
	int a = 0;
	int tar = 0;
	vector<int> ret;
	while (cin>>a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	cin >> tar;
	ret = s.searchRange(arr, tar);
	for (int i = 0; i < ret.size(); i++)
	{
		cout << ret[i];
	}
	system("pause");
	return 0;
}