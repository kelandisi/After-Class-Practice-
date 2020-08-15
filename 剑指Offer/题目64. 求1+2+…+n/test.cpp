#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int sumNums(int n) {
		return n == 0 ? 0 : n + sumNums(n - 1);
	}
};
class Solution {
public:
	int sumNums(int n) {
		n && (n += sumNums(n - 1));
		return n;
	}
};
int quickMulti(int A, int B) {
	int ans = 0;
	for (; B; B >>= 1) {
		if (B & 1) {
			ans += A;
		}
		A <<= 1;
	}
	return ans;
}

