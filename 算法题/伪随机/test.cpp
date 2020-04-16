#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue <int> q;
	long long int a = 0, b = 0, m = 0, x = 0;
	while (cin >> a >> b >> m >> x)
	{
		if (m > a && m > b && m > x)
		{
			long long int count = 1;
			x = (a*x + b) % m;
			q.push(x);
			while (1)
			{
				x = (a*x + b) % m;
				q.push(x);
				if (q.front() != q.back())
					count++;
				else
					break;
			}
			cout << count << endl;
		}
		else
			break;
	}
	return 0;
}