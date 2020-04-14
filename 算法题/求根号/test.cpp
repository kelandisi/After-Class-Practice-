#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
double sqrt1(double x) {
	double left = 0.0;
	double right = x;
	double a = 0.000001;
	double mid = right + (left - right) / 2;
	while ((right - left) > a)
	{
		if (mid*mid > x)
			right = mid;
		else
			left = mid;
		mid= right + (left - right) / 2;
	}
	return mid;
}
int main()
{
	double n ;
	cin >> n;	
	cout << sqrt1(n);
	system("pause");
	return 0;
}