#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int removeElement(vector<int>& nums) {
		int j = 0;
		for (int i = 1; i<nums.size(); i++)
		{
			if (nums[i] != nums[j])
			{
				j++;
				nums[j] = nums[i];
			}
		}
		return j + 1;
	}
};

int main()
{
	Solution s;
	vector<int> arr;
	int a = 0;
	while (cin >> a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')//如果是回车符则跳出循环
			break;
	}
	int ret = s.removeElement(arr);
	cout << ret;
	system("pause");
	return 0;
}