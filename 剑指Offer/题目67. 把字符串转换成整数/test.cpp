#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int strToInt(string str) {
		int res = 0;
		int i = 0;
		int flag = 1;
		// 1. ���ո�
		while (str[i] == ' ') { i++; }
		// 2. ������
		if (str[i] == '-') { flag = -1; }
		if (str[i] == '+' || str[i] == '-') { i++; }
		// 3. ��������
		while (i < str.size() && isdigit(str[i])) {
			int r = str[i] - '0';
			// ------ 4. ������������ǹؼ����� ------
			if (res > INT_MAX / 10 || (res == INT_MAX / 10 && r > 7)) {
				return flag > 0 ? INT_MAX : INT_MIN;
			}
			// ------------------------------------
			res = res * 10 + r;
			i++;
		}
		return flag > 0 ? res : -res;
	}
};
