#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;
class Date
{
public:
	Date(int year=1999, int mounth=1, int day=1)
		:_year(year)
		, _mounth(mounth)
		, _day(day)
	{}
	

	Date  operator+(int day)
	{
		Date tmp(*this);
		tmp._day += day;
		return tmp;
	}
	Date operator- (int day)
	{
		Date tmp(*this);
		tmp._day -= day;
		return tmp;
	}
	bool operator==(const Date& d)
	{
		return _year == d._year&&
			_mounth == d._mounth&&
			_day == d._day;
	}
	bool operator!=(const Date& d)
	{
		return !(*this == d);
	}
	Date & operator=(const Date& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_mounth = d._mounth;
			_day = d._day;	
		}	
		return *this;
	}
	Date & operator++()//«∞÷√++
	{
		_day += 1;
		return *this;
	}
	Date operator++(int)//∫Û÷√++
	{
		Date tmp(*this);
		_day += 1;
		return tmp;
	}
	void Print()
	{
		cout << _year << "-" << _mounth << "-" << _day << endl;
	}

private:
	int _year;
	int _mounth;
	int _day;
};

int main()
{
	Date d1;
	//Date d2(d1);
	d1 = d1 + 10;
	d1 = d1 - 5;
	d1 = 100;
	d1.Print();
	system("pause");
	return 0;
}