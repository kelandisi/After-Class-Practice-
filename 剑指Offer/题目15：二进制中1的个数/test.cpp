#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Solution {
public:
	int fun(uint32_t n)			//ѭ��32��
	{
		int count = 0;
		for (int i = 0; i < 32; i++)
		{
			if (n & (1<<i))
				count++;
		}
		return count;
	}




	int hammingWeight(uint32_t n)   //��ϲ�ⷨ    ÿ�����㶼�����ұߵ�1��Ϊ0�����β������м���1
	{								//�м���1 ��ѭ������
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