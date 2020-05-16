#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
/*
��n!
0����Դ 2 * 5 ����һ��2��5���ɲ���һ��0,����0�ĸ�����Ϊmin(�׳���5�ĸ�����2�ĸ���)
����Ϊ��2�ı�������һ������5�ı��������� ����2�ĸ���һ��>=5�ĸ��� ����ֻ��Ҫͳ�� 5 �ĸ�����
���� 5�� = 1 * 2 * 3 * 4 * 5
2      2 2  5    һ��2��һ��5��Գ���0 ����5!ĩβֻ��һ����
���� n = 25 ʱ ���Բ���5���� 5 10 15 20 25
�� n/5 = 5�� Ȼ�� 25 = 5*5 ����������һ��5
n>=25ʱ,�ʶ���Ҫ������ ������п��Բ���25��ҲҪ����
��Ϊ n/5 + n/25  Ȼ�� 125 = 5*25 ������������һ��5
n>=125ʱ,�ʶ���Ҫ������ ������п��Բ���125��ҲҪ����
��Ϊ n/5 + n/25 + n/125  Ȼ�� 625 = 5*125 ������������һ��5
��������...
��������Ϊ n/5 + n/25 + n/125 + n/625 + ...
�� n/5 + n/5/5 + n/5/5/5 + n/5/5/5/5 + ...
*/
class Solution {
public:
	int trailingZeroes(int n) {
		int count = 0;
		while (n>0)
		{
			count += n / 5;
			n /= 5;
		}
		return count;

	}
};
int main()
{
	Solution s;
	int n = 0;
	cin >> n;
	int ret = s.trailingZeroes(n);
	cout << ret;
	system("pause");
	return 0;
}




//���ַ���ʱ�临�Ӷȹ���
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	int count = 0;
//	cin >> n;
//	for (int i = 1;i <= n; i++)
//	{
//		sum *= i;
//	}
//	while (sum % 10 == 0)
//	{	
//		count++;
//		sum = sum / 10;
//	}
//	cout << count;
//	system("pause");
//	return 0;
//}