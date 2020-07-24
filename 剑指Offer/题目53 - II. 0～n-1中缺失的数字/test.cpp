#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int n = nums.size();
		int sum = 0;
		for (int i = 0; i < n; i++)
			sum += nums[i];
		return n*(n + 1) / 2 - sum;
	}
};
class Solution {
public:
	int missingNumber(vector<int>& nums) {
		for (int i = 0; i < nums.size(); i++)
			if (i != nums[i]) return i;
		return nums.size();
	}
};

