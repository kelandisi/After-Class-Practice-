#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

/*给定一个整数数组和一个整数 k，判断数组中是否存在两个不同的索引 i 和 j，
使得 nums [i] = nums [j]，并且 i 和 j 的差的 绝对值 至多为 k。
*/
class Solution {
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		unordered_set<int> tempS;
		int count = 0;
		for (int i = 0; i<nums.size(); ++i) {
			tempS.insert(nums[i]);
			if (tempS.size()<count + 1) {
				return true;
			}
			if (count == k) {
				count = k - 1;
				tempS.erase(nums[i - k]);
			}
			count++;
		}
		return false;

	}
};

int main()
{
	Solution s;
	vector<int> arr;
	int k = 0;
	int a = 0;
	while (cin >> a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	cin >> k;
	if (s.containsNearbyDuplicate(arr, k))
		cout << true;
	else
		cout << false;
	system("pause");
	return 0;
}