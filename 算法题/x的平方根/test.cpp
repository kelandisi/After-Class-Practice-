#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Solution
{
public:
	int mySqrt(int x)
	{
		int left = 0, right = x / 2 + 1;
		while (left < right)
		{
			int mid = left + (right - left) / 2;
			if (x*1.0 / mid >= mid&&x*1.0 / (mid + 1)<mid + 1)
				return mid;
			else
			{
				if (x*1.0 / mid>mid)
					left = mid + 1;			
				else
					right = mid - 1;
			}
				
		}
		return left;
	}
};

int main()
{
	Solution s;
	int x = 0;
	cin >> x;
	int ret = s.mySqrt(x);
	cout << ret;
	system("pause");
	return 0;
}