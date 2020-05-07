#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;

/*����һ�����������һ������ k���ж��������Ƿ����������ͬ������ i �� j��
ʹ�� nums [i] = nums [j]������ i �� j �Ĳ�� ����ֵ ����Ϊ k��
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