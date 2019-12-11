#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int reversesum(int x)
{
	int sum = 0;
	while (x!=0)
	{
		int pop = x%10;
		x = x / 10;
		if (sum > INT_MAX / 10 || (sum == INT_MAX / 10 && pop > 7))
			return 0;
		if (sum < INT_MIN / 10 || (sum == INT_MIN / 10 && pop < -8))
			return 0;
		sum = sum * 10 + pop;
	}
	return sum;
}
int main()
{
	int x;
	while (cin>>x)
	{
		cout<<reversesum(x)<<endl;
	}
	
	system("pause");
	return 0;
}