#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Solution {
public:
	int fun(uint32_t n)			//循环32次
	{
		int count = 0;
		for (int i = 0; i < 32; i++)
		{
			if (n & (1<<i))
				count++;
		}
		return count;
	}




	int hammingWeight(uint32_t n)   //惊喜解法    每次运算都将最右边的1变为0，几次操作就有几个1
	{								//有几个1 就循坏几次
		int count = 0;
		while (n != 0)
		{
			n &= (n - 1);   
			count++;		
		}
		return count;
	}
};
int main()
{
	Solution s;
	uint32_t n = 0;
	cin >> n;
	cout<< s.hammingWeight(n);
	system("pause");
	return 0;
}