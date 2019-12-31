#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
/*�����������
1.û������9��ֱ�Ӽ�һ
2.��ȫ������9����1299�����������ǴӺ���ǰ������9���0����һλ��
3.ȫ��9����ĩβ�Ӹ�0����λ���1.
*/
class Solution
{
public:
	vector<int> plusOne(vector<int>& digits)
	{
		for (int i = digits.size() - 1; i >= 0; i--)
		{
			if (digits[i] == 9)
			{
				digits[i] = 0;
			}
			else
			{
				digits[i]++;
				break;
			}

			if (digits[0] == 0)
			{
				digits.push_back(0);
				digits[0] = 1;
			}
		}
		return digits;
	}

};
int main()
{
	Solution s;
	vector<int> digits;
	
	int n = 0;
	while (1)
	{
		while (cin >> n)
		{
			digits.push_back(n);
			if (cin.get() == '\n')
				break;
		}
		vector<int> ret = s.plusOne(digits);

		for (int i = 0; i < ret.size(); i++)
		{
			cout << ret[i] << " ";
		}
	}
	
	system("pause");
	return 0;
}
