#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int translateNum(int num) {
		string src = to_string(num);
		int p = 0, q = 0, r = 1;
		for (int i = 0; i < src.size(); ++i) {
			p = q;
			q = r;
			r = 0;
			r += q;
			if (i == 0) {
				continue;
			}
			auto pre = src.substr(i - 1, 2);
			if (pre <= "25" && pre >= "10") {
				r += p;
			}
		}
		return r;
	}
};

class Solution {
public:
	int translateNum(int num) {
		if (num == 0) return 1;
		return f(num);
	}

	int f(int num) {
		if (num < 10) {
			return 1;
		}
		if (num % 100 < 26 && num % 100 > 9) {
			return f(num / 10) + f(num / 100);
		}
		else {
			return f(num / 10);
		}
	}
};
