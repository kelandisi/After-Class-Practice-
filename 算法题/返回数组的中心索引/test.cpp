#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int pivotIndex(vector<int>& nums)
	{
		if (nums.size() == 0)
			return -1;
		int left;
		int right = 0;
		for (int i = 1; i < nums.size(); i++)
			right += nums[i];
		for (int i = 0; i < nums.size()-1; i++)
		{
			if (left == right)
				return i;
			if (left != right)
			{
				right -= nums[i + 1];
				left += nums[i];
			}	
		}
		if (left == right) 
			return nums.size() - 1;
		else 
			return -1;
		
	}
};
int main()
{
	Solution s;
	vector <int> arr;
	int ret = 0;
	int a = 0;
	while (cin >> a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	ret = s.pivotIndex(arr);
	cout << ret;
	system("pause");
	return 0;

}