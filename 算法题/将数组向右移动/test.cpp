#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		reverse(nums.begin(), nums.end());
		reverse(nums.begin(), nums.begin() + k%nums.size());
		reverse(nums.begin() + k%nums.size(), nums.end());
	}
};
int main()
{
	Solution s;
	vector<int> arr;
	int a = 0;
	int k = 0;
	while (cin >> a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	cin >> k;
	s.rotate(arr,k);
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}