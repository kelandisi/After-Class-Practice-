#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
/*����һ������ 0, 1, 2, ..., n �� n ���������У�
�ҳ� 0 .. n ��û�г����������е��Ǹ�����*/
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