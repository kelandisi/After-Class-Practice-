#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	vector<int> maxSlidingWindow(vector<int>& nums, int k) {
		if (nums.size() == 0) return{};
		vector<int> ans;
		for (int i = 0; i <= nums.size() - k; i++) {
			int maxNum = nums[i];
			for (int j = i; j < i + k; j++) {
				maxNum = max(maxNum, nums[j]);
			}
			ans.push_back(maxNum);
		}
		return ans;
	}
};
