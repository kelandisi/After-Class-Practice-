#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//class UnusualAdd
//{
//public:
//	 int addAB(int A, int B)		//用指针偏移量来进行计算
//	{
//		char*C = (char*)A;
//		return (int)&C[B];
//	}
//};
//int main()
//{
//	UnusualAdd A;
//	cout << A.addAB(3, 5);
//	system("pause");
//	return 0;
//}

class UnusualAdd {
public:
	int addAB(int A, int B) {
		while (A)
		{
			int temp = B;
			B = A^B;
			A = A&temp;
			A <<= 1;
		}
		return B;
	}
};
int main()
{
	UnusualAdd A;
	cout << A.addAB(3, 5);
	system("pause");
	return 0;
}