#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Date
{
	friend ostream& operator<<(ostream& _cout, const Date& d);
public:
	Date(int year = 1999, int month = 1, int day = 1)
		:_year(year)
		, _month(month)
		, _day(day)
	{
		if (!((year > 0) && (month < 13 && month>0) && (day <= getmonthday(year, month) && day > 0)))
		{//如果不是合法日期，就设置成默认值
			year = 1999;
			month = 1;
			day = 1;
		}
	}
	Date(const Date& d)
		:_year(d._year)
		, _month(d._month)
		, _day(d._day)
	{}
	int getmonthday(int year, int month)
	{
		int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if ((month == 2) && (year = leapyear(year)))
		{
			days[2] = 29;
		}
		return days[month];
	}
	bool leapyear(int year)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			return true;
		}
		return false;
	}
	bool operator==(const Date& d)
	{
		return ((_year == d._year) && (_month == d._month) && (_day == d._day));
	}
	bool operator!=(const Date& d)
	{
		return (!(*this == d));
	}
	Date& operator=(const Date& d)
	{
		if (*this != d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
	Date operator+(int days)
	{
		if (days < 0)
			return *this - (0 - days);
		Date temp(*this);
		temp._day += days;//判断日期合法性
		int ret = 0;
		while (temp._day >(ret = getmonthday(temp._year, temp._month)))
		{
			temp._day -= ret;
			temp._month++;
			if (temp._month >= 13)
			{
				temp._month = 1;
				temp._year++;
			}
		}
		return temp;
	}
	Date operator-(int days)
	{
		if (days < 0)
		{
			return *this + (0 - days);
		}
		Date temp(*this);
		temp._day -= days;//判断日期合法性
		int ret = 0;
		while (temp._day <= 0)
		{
			temp._month--;
			if (temp._month == 0)
			{
				temp._year--;
				temp._month = 12;
			}
			temp._day += getmonthday(temp._year, temp._month);
		}
		return temp;
	}
	bool operator>(const Date& d)
	{
		return ((_year > d._year) 
			|| ((_year == d._year) && (_month > d._month))
			|| ((_year == d._year) && (_month == d._month) && (_day > d._day)));
	}
	bool operator<(const Date& d)
	{
		return ((_year < d._year)
			|| ((_year == d._year) && (_month < d._month))
			|| ((_year == d._year) && (_month == d._month) && (_day < d._day)));
	}
	Date operator++(int)	//后置++
	{
		Date temp(*this);
		temp._day += 1;
		return temp;
	}
	Date &operator++()
	{
		_day++;
		return *this;
	}
	Date operator--(int)	//后置++
	{
		Date temp(*this);
		temp._day -= 1;
		return temp;
	}
	Date &operator--()
	{
		_day--;
		return *this;
	}

private:
	int _year;
	int _month;
	int _day;
};

ostream& operator<<(ostream& _cout, const Date& d)
{
	_cout << d._year << "-" << d._month << "-" << d._day;
	return _cout;
}
int main()
{
	Date d1(2019,10,28);
	Date d2(2019,11,11);

	//d = d++;
	//d = d--;
	//d = d - 50;
	//d = d + 50;
	d1 = d2;
	cout << d1;
	system("pause");
	return 0;
}