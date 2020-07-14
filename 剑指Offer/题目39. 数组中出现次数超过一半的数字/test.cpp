#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int majorityElement(vector<int>& nums) {
		//����1��������м��Ԫ��һ���ǳ��ֳ���һ�������
		sort(nums.begin(), nums.end());
		return nums[nums.size() / 2];

		//����2����ϣ��
		unordered_map<int, int>mp;
		for (auto it : nums) {
			mp[it]++;
			if (mp[it]>nums.size() / 2) return it;
		}
		return 0;

		//����3������һ������ֱ������������ֵ��ܺʹ�����
		int n = 1;
		int result = nums[0];
		for (int i = 1; i<nums.size(); i++) {
			if (n == 0) {
				result = nums[i];
				n = 1;
			}
			else if (result == nums[i])n++;
			else n--;
		}
		return result;
	}
};

