#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdlib.h>
using namespace std;
class Date
{
public:

	Date(int year=1999,int month=1,int day=11)
		:_year(year)
		,_month(month)
		,_day(day)
	{}

	void set(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void display()
	{
		cout << _year << "-" << _month << -_day << endl;
	}
	void print()
	{
		cout << sizeof(Date) << endl;
	}
	Date(const Date &d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	Date operator+(int month)
	{
		Date tmp = *this;
		tmp._month += month;
		return tmp;
	}
	Date operator-(int days)
	{
		Date tmp = (*this);
		tmp._day -= days;
		return tmp;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;
	d1.display();
	d1 = d1 + 1;
	d1 = d1 - 1;
	d1.display();
	system("pause");
	return 0;
}

