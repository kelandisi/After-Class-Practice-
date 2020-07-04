#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int findNthDigit(int n) {
		// ����������ɼ�λ������ɣ���1λ��digits = 1��2λ��digits = 2...
		long base = 9, digits = 1;
		while (n - base * digits > 0) {
			n -= base * digits;
			base *= 10;
			digits++;
		}

		// ������ʵ����������Ƕ���
		int idx = n % digits;  // ע����������ļ��㣬n���ڱ�ʾdigitsλ���ĵ�n������
		if (idx == 0)idx = digits;
		long number = 1;
		for (int i = 1; i < digits; i++)
			number *= 10;
		number += (idx == digits) ? n / digits - 1 : n / digits;

		// ����ʵ���������ҵ�������Ҫ���Ǹ�����
		for (int i = idx; i<digits; i++) number /= 10;
		return number % 10;
	}
};





class Solution {
public:
	int findNthDigit(int n) {
		n -= 1;
		for (long digits = 1; digits < 11; ++digits) {
			int first_num = pow(10, digits - 1);
			if (n < 9 * first_num * digits) {
				return int(to_string(first_num + n / digits)[n%digits]) - '0';
			}
			n -= 9 * first_num * digits;
		}
		return 0;
	}
};
