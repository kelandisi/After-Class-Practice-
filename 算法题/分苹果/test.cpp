#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>;
using namespace std;
int fun(int n, vector<int> &arr)
{
	int sum = 0;
	int res = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		sum += arr[i];
	}
	if (sum%n != 0)
		return -1;
	int average = sum / n;
	for (int i = 0; i < arr.size(); i++)
	{
		if ((arr[i] - average) % 2 != 0)
			return -1;
	}

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] > average)
		{
			res += (arr[i] - average) / 2;
		}
	}
	return res;

}
int main()
{
	int n = 0;
	cin >> n;
	vector <int> arr;
	int a = 0;
	while (cin >> a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	
	cout << fun(n, arr);
	system("pause");
	return 0;
}