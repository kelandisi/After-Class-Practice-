#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//class Solution {
//public:
//	int Add(int num1, int num2)
//	{
//		char*c = (char*)num1;
//		return (int)&c[num2]; //�൱��c+sizeof��char*��num2
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
		int constSite = a^b;		//��������������λ��
		int VariableSite = a&b;		//�����������Ҫ��λ��λ��
		return (addAB(constSite, VariableSite << 1));//�ݹ����

	}
};
int main()
{
	UnusualAdd A;
	cout << A.addAB(3, 5);
	system("pause");
	return 0;
}