#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//class Solution {
//public:
//	int Add(int num1, int num2)
//	{
//		char*c = (char*)num1;
//		return (int)&c[num2]; //相当与c+sizeof（char*）num2
//	}
//};
//int main()
//{
//	Solution A;
//	cout << A.Add(1, 5);
//	system("pause");
//	return 0;
//}

class UnusualAdd {
public:
	int addAB(int a, int b) 
	{
		if (b == 0)
			return a;
		int constSite = a^b;		//计算出两数不变的位数
		int VariableSite = a&b;		//计算出两数需要进位的位数
		return (addAB(constSite, VariableSite << 1));//递归求解

	}
};
int main()
{
	UnusualAdd A;
	cout << A.addAB(3, 5);
	system("pause");
	return 0;
}