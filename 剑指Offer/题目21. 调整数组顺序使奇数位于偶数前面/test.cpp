#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;


//首尾双指针
class Solution {
public:
	vector<int> exchange(vector<int>& nums) {
		int left = 0, right = nums.size() - 1;
		while (left < right) {
			if ((nums[left] & 1) != 0) {
				left++;
				continue;
			}
			if ((nums[right] & 1) != 1) {
				right--;
				continue;
			}
			swap(nums[left++], nums[right--]);
		}
		return nums;
	}
};



//快慢指针
class Solution {
public:
	vector<int> exchange(vector<int>& nums) {
		int low = 0, fast = 0;
		while (fast < nums.size()) {
			if (nums[fast] & 1) {
				swap(nums[low], nums[fast]);
				low++;
			}
			fast++;
		}
		return nums;
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
		if (cin.get() == '\n')
			break;
	}
	s.exchange(arr);
	return 0;
}