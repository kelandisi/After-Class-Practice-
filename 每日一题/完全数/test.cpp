#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;



void yueshu(int n,vector<int> &arr)
{
	arr.push_back(1);
	for (int i = 2; i*i <= n; i++)
	{
		if (n%i == 0)
		{
			arr.push_back(i);
			if (n / i != i)
			{
				arr.push_back(n / i);
			}
		}
	}
}
int main()
{
	int a = 0;
	vector<int> arr;
	

	while (cin >> a)
	{
		int count = 0;
		for (int i = 6; i <= a; ++i)
		{
			yueshu(i, arr);
			int sum = 0;
			for (int j = 0; j < arr.size(); ++j)
			{
				sum += arr[j];
			}
			if (sum == i)
			{
				count++;
				arr.clear();
			}
			arr.clear();
		}

		cout << count<<endl;
	}
	
	
	system("pause");
	return 0;
}