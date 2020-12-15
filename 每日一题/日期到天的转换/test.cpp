#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;


bool is_lear_year(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0) || year % 400 == 0)
		return true;
	else
		return false;
}

int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	cin >> year >> month >> day;
	int monthday[] = { 0,31,59,90,120,151,181,212,243,273,304,334,365 };
	int res = monthday[month - 1] + day;
	if (month > 2 && is_lear_year(year))
		res = res + 1;
	cout << res;
	system("pause");
	return 0;
}

