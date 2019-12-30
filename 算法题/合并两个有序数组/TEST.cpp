#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution
{
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
	{
		for (int i = m, j = 0; i < m + n; i++, j++)
		{
			nums1[i] = nums2[j];
		}
		sort(nums1.begin(), nums1.end());
	}
};

int main()
{
	Solution s;
	int n = 0;
	int m = 0;
	vector<int> nums1;
	vector<int> nums2;
	int a = 0;
	while (cin>>a)
	{
		nums1.push_back(a);
		if (nums1.size() == m + n);
			break;
	}
	cin >> m;
	int b = 0;
	while (cin >> b)
	{
		nums2.push_back(b);
		if (cin.get() == '\n')
			break;
	}
	cin >> n;
	s.merge(nums1, m, nums2, n);
	for (int i = 0; i < nums1.size(); i++)
	{
		cout << nums1[i];
	}
	system("pause");
	return 0;
}