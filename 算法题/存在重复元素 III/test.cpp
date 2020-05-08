#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution {
public:
	bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t)
	{
		set<double> _set;
		for (int i = 0; i < nums.size(); ++i)
		{
			auto s = _set.lower_bound((double)nums[i] - (double)t);
			if (s != _set.end() && *s <= (double)nums[i] + (double)t)
			{
				return true;
			}

			_set.insert(nums[i]);
			if (_set.size() > k)
			{
				_set.erase(nums[i - k]);
			}
		}
		return false;
	}

};

int main()
{
	Solution s;
	int k = 0;
	int t = 0;
	vector<int> arr;
	int a = 0; 
	while (cin >> a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	cin >> k;
	cin >> t;
	s.containsNearbyAlmostDuplicate(arr, k, t);
	system("pause");
	return 0;
}