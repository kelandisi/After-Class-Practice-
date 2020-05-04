#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//���ÿ���ָ�룬���������ʱΪһ��ѭ�����ж����ѭ���Ƿ�Ϊ0,����


class Solution 
{
public:
	int fun(int x)
	{
		int sum = 0;
		while (x > 0)
		{
			int n = x % 10;
			sum += n*n;
			x = x / 10;
		}
		return sum;
	}
	bool isHappy(int n) 
	{
		int fast = n;
		int slow = n;
		do
		{			
			slow = fun(slow);
			fast = fun(fast);
			fast = fun(fast);		
		} while (fast != slow);
		return slow == 1;
	}
};
int main()
{
	Solution s;
	int n = 0;
	while (cin >> n)
	{
		cout<< s.isHappy(n)<<endl ;
	}

	system("pause");
	return 0;
}