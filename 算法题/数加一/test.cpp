#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
/*分三种情况：
1.没有数字9，直接加一
2.不全是数字9，（1299），这样的是从后往前，遇到9变成0，进一位。
3.全是9，给末尾加个0，首位变成1.
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
	while (cin>>n)
	{
		digits.push_back(n);
		if (cin.get() == '\n')
			break;		
	}
	vector<int> ret  = s.plusOne(digits);
	
	for (int i = 0; i < ret.size(); i++)
	{
		cout << ret[i]<<" ";
	}

	system("pause");
	return 0;
}
