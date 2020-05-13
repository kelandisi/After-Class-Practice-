#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
/*给定一个已按照升序排列 的有序数组，找到两个数使得它们相加之和等于目标数。

函数应该返回这两个下标值 index1 和 index2，其中 index1 必须小于 index2。
*/
class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		int i = 0;
		int j = numbers.size() - 1;
		int sum = 0;
		while (i < j)
		{
			sum = numbers[i] + numbers[j];
			if (sum < target)
				i++;
			else if (sum>target)
				j--;
			else
				return{ i + 1,j + 1 };
		}
		return{ -1,-1 };
	}
};
int main()
{
	Solution s;
	int a = 0;
	int k = 0;
	vector<int> arr;
	vector<int> temp;
	while (cin >> a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	cin >> k;
	temp = s.twoSum(arr,k);
	for (int i = 0; i < temp.size(); i++)
	{
		cout << temp[i]+1<<" ";
	}
	system("pause");
	return 0;
}