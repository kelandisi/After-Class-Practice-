#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int add(int a, int b) {
		int x = ~(1 << 31);
		while (b != 0) {
			int c = (a & b & x) << 1; // a + b �����Ľ�λ
			a ^= b; // �����λ�ġ��͡�
			b = c;
		}
		return a;
	}
};

