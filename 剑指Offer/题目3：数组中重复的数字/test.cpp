#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Solution {
public:
	int findRepeatNumber(vector<int>& nums) {
		int len = nums.size();
		map<int, int> m;
		for (int i = 0; i < len; i++)
		{
			m[nums[i]]++;
			if (m[nums[i]]>1)
				return nums[i];
		}
		return -1;
	}
};
int main()
{
	Solution s;
	vector <int> arr;
	int a = 0;
	while (cin >> a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	cout << s.findRepeatNumber(arr);
	system("pause");
	return 0;
}