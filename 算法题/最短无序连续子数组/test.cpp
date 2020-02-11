#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
	int findUnsortedSubarray(vector<int>& nums) {
		int begin = nums[0], end = nums.back(), l = 0, r = 0;
		int len = nums.size();
		for (int i = 1; i < len; ++i)
		{
			begin = max(begin, nums[i]);
			end = min(nums[len - 1 - i],end );
			if (begin != nums[i]) //说明后面的位置不对
				r = i;
			if (end != nums[len - 1 - i])
				l = len - 1 - i;
		}
		return r - l + 1;
	}
};
int main()
{
	Solution s;
	vector <int> arr;
	int ret;

	int a = 0;
	while (cin>>a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	ret = s.findUnsortedSubarray(arr);	
	cout << ret;
	system("pause");
	return 0;
}