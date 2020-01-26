#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<set>
#include<vector>
using namespace std;
class Solution
{
public:
	int thirdMax(vector<int>& nums)
	{
		set<int> s(nums.begin(), nums.end());
		auto it = s.rbegin();
		if (s.size() < 3)
			return *it;
		else
			return *(++(++it));
	}
};
int main()
{
	Solution s;
	vector <int> arr;
	int a = 0;
	int ret = 0;
	while (cin >> a)
	{
		arr.push_back(a);
		if (cin.get() == ('\n'))
			break;
	}
	ret = s.thirdMax(arr);
	cout << ret;
	system("pause")
	return 0;
}