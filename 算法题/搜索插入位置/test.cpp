#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		if (nums.size() == 0) return 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] >= target) 
				return i;
		}
			
		return nums.size();

	}
};
int main()
{
	Solution s;
	vector <int> nums;
	int k = 0;
	int a = 0;
	while (cin>>a)
	{
		nums.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	cin >> k;
	int ret = s.searchInsert(nums,k);
	cout << ret;
	system("pause");
	return 0;
}