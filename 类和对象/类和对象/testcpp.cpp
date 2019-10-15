#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;
class Date
{
public:
	Date(int year=1999,int month=1, int day=1)
		:_year(year)
		,_month(month)
		,_day(day)
	{
		if (!((year > 0) && (month > 0 && month < 13) && (day>0 && day < GetDayofMonth(year, month))))
		{
			_year = 1900;
			_month = 1;
			_day = 1;
		}
	}

	Date(const Date& d)
		:_year(d._year)
		,_month(d._month)
		,_day(d._day)
	{}

	Date &operator=(Date& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
	
	bool operator==(const Date& d)const
	{
		return _year == d._year &&
			   _month == d._month &&
			   _day == d._day;
	}

	bool operator!=(const Date& d)const
	{
		return !(*this == d);
	}
	
	Date operator+(int day)
	{
		if (day < 0)
		{
			return *this - (0 - day);
		}
		Date tmp(*this);
		tmp._day += day;
		// 日期中_day非法

	}
	bool IsLeapYear(int year)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			return true;
		}
		return false;
	}
	int GetDayofMonth(int year, int month)
	{
		int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (2 == month && IsLeapYear(year))
		{
			days[month]+=1;
		}
		return days[month];
	}



private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d(2000,1,1);
	system("pause");
	return 0;
}

