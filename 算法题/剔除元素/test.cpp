#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int i = 0;
		for (int j = 0; j < nums.size(); j++)
		{
			if (nums[j] != val)
			{
				nums[i] = nums[j];//让数组中元素变为现有元素
				i++;
			}
				
		}
		return i;
	}
};

int main()
{
	Solution s;
	vector<int> arr;
	int val = 0;
	int a = 0;
	while (cin>>a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')//如果是回车符则跳出循环
			break;
	}
	cin >> val;
	int ret = s.removeElement(arr, val);
	cout << ret;
	system("pause");
	return 0;
}