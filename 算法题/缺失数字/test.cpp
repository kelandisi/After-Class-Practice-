#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
/*给定一个包含 0, 1, 2, ..., n 中 n 个数的序列，
找出 0 .. n 中没有出现在序列中的那个数。*/
class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int sum = 0;
		for (int i = 0; i<nums.size(); i++)
		{
			sum = sum - nums[i] + i;
		}
		return sum + nums.size();
	}
};

int main()
{
	Solution s;
	vector<int> arr;
	int n = 0;
	while (cin >> n)
	{
		arr.push_back(n);
		if (cin.get() == '\n')
			break;
	}
	cout<< s.missingNumber(arr);
	system("pause");
	return 0;
}