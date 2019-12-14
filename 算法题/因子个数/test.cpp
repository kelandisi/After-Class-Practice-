#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class yinzi
{
public:
	int func(int n)
	{
			int count = 0;
			for (int i = 2; i <= sqrt(n); i++)
			{
				if (n % i == 0)
				{
					while (n % i == 0)
					{
						n = n / i;						
					}
					count++;														
				}									
			}
			if(n!=1)
					count++;
			return count;
		
	}
};
int main()
{
	yinzi s1;
	int n = 0;
	while (cin >> n)
	{
		cout << s1.func(n)<<endl;
	}	
	system("pause");
	return 0;
}