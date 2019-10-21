#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Date
{
public:
	Date(int year=2019, int month=10, int day=21)
		:_year(year),
		_month(month),
		_day(day)
	{
		if (!(year > 0 &&
			(month > 0 && month < 13) &&
			(day > 0 && day <= GetDaysOfMonth(year, month))))
		{
			year = 1999;
			month = 1;
			day = 1;
		}
	}
	Date(const Date& d)
		: _year(d._year)
		, _month(d._month)
		, _day(d._day)
	{}
	bool leapyear(int year)
	{
		if ((year % 4 == 0 && year / 100 != 0) || (year / 400 == 0))
			return true;
		return false;
	}
	int GetDaysOfMonth(int year, int month)
	{
		int days[]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (2 == month && leapyear(year))
		{
			days[month] = 29;
		}
		return days[month];
	}
	Date operator+(int days)
	{
		if (days < 0)
		{
			return *this - (0 - days);
		}
		Date temp(*this);
		temp._day += days;
		int daysOfMonth = 0;
		while (temp._day >(daysOfMonth = GetDaysOfMonth(temp._year, temp._month)))
		{
			temp._day -= daysOfMonth;
			temp._month += 1;
			if (temp._month > 12)
			{
				temp._year += 1;
				temp._month = 1;
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
		temp._day -= days;

		// 检测temp是否为合法日期
		while (temp._day <= 0)
		{
			temp._month -= 1;
			if (0 == temp._month)
			{
				temp._year -= 1;
				temp._month = 12;
			}

			temp._day += GetDaysOfMonth(temp._year, temp._month);
		}

		return temp;
	}
	int operator-(const Date& d)const
	{
		Date minDate(*this);
		Date maxDate(d);

		// 获取两个对象中的最小值
		if (minDate > maxDate)
		{
			minDate = d;
			maxDate = *this;
		}

		int count = 0;
		while (minDate != maxDate)
		{
			count++;
			++minDate;
		}

		return count;
	}
	bool operator>(const Date& d)
	{
		return ((_year > d._year)
			|| (_year == d._year && _month > d._month)
			|| (_year == d._year && _month == d._month && _day > d._day));
	}
	bool operator<(const Date& d)
	{
		return ((_year < d._year)
			|| (_year == d._year && _month < d._month)
			|| (_year == d._year && _month == d._month && _day < d._day));
	}
	Date &operator++()		//前置++
	{
		_day += 1;
		return *this;
	}
	Date operator--(int)		//后置--
	{
		Date tmp(*this);
		_day -= 1;
		return tmp;
	}
	Date &operator--()		//前置--
	{
		_day -= 1;
		return *this;
	}
	Date operator++(int)		//后置++
	{
		Date tmp(*this);
		_day += 1;
		return tmp;
	}
	Date &operator=(const Date &d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
	bool operator==(const Date &d)
	{
		if (_year == d._year &&
			_month == d._month &&
			_day == d._day)
			return true;
		return false;
	}
	bool operator!=(const Date &d)
	{
		return !(*this == d);
	}
	void print()
	{
		cout << _year << "-" << _month << "-" << _day<< endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1(1999,2,1);
	Date d2(1999,1,10);
	//d2 = d2 + 1;
	//d2 = d2 - 1;
	int ret=d1 - d2;		//日期的加减还有问题

	cout << ret;
	system("pause");
	return 0;
}


