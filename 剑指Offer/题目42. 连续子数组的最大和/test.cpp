#define _CRT_SECURE_NO_WARNINGS 1
int Solution42::maxSubArray(std::vector<int> &nums) {
	assert(!nums.empty());

	int resSum = INT_MIN;
	int curSum = 0;

	// ��������
	for (int i = 0; i < nums.size(); i++) {
		// ��sumС��0ʱ���ʹ���һ�������¿�ʼ
		// ͬʱ����ÿ�ε��ӵ����ֵ
		if (curSum <= 0) {
			curSum = nums[i];
		}
		else {
			// �ʹ���0ʱ
			curSum += nums[i];
		}

		// ���ϸ����Ӵ������ֵ
		if (curSum > resSum) {
			resSum = curSum;
		}
	}

	return resSum;
}

int maxSubArray2(std::vector<int> &nums) {
	assert(!nums.empty());

	return helper(nums, 0, nums.size() - 1);
}

int helper(std::vector<int> &nums, int left, int right) {
	// �ֽ⵽һ��ֵʱ���ظ�ֵ
	if (left == right) {
		return nums[left];
	}

	// ���е�ֵ
	int mid = left + (right - left) / 2;

	// �е���ߵ����ֵ
	int leftSum = helper(nums, left, mid);
	// �е��ұߵ����ֵ
	int rightSum = helper(nums, mid + 1, right);
	// ����е�����ֵ
	int croSum = crossSum(nums, left, right, mid);

	// ����������������е����ֵ
	return std::max(std::max(leftSum, rightSum), croSum);
}

int crossSum(std::vector<int> &nums, int left, int right, int mid) {
	// �ֽ⵽һ��ֵʱ���ظ�ֵ
	if (left == right) {
		return nums[left];
	}

	// ̰�ķ�����ߵ����ֵ
	int leftSubsum = INT_MIN;
	int curSum = 0;
	for (int i = mid; i > left - 1; i--) {
		curSum += nums[i];
		leftSubsum = std::max(leftSubsum, curSum);
	}

	// ̰�ķ����ұߵ����ֵ
	int rightSubsum = INT_MIN;
	curSum = 0;
	for (int i = mid + 1; i < right + 1; i++) {
		curSum += nums[i];
		rightSubsum = std::max(rightSubsum, curSum);
	}

	return leftSubsum + rightSubsum;
}

