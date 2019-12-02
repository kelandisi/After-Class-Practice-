#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
//int main()
//{
//	int n = 0;
//	int gifts[100];
//	while (cin >> n)
//	{
//
//		for (int i = 0; i < n; i++)
//		{
//			cin >> gifts[i];
//		}
//		int count[256] = { 0 };
//		for (int i = 0; i < n; i++)
//		{
//			count[gifts[i]]++;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			if (count[i] > (n / 2))
//				cout << i;
//
//		}
//	}
//	system("pause");
//	return 0;
//}
int getValue(vector<int> gifts, int n)
{
	int value = gifts[0];
	int count = 1;
	for (int i = 1; i < n; ++i)
	{
		if (gifts[i] != value)
			--count;
		else
			++count;
		if (count == 0)
			value = gifts[i];
	}

	count = 0;
	for (int i = 0; i < n; ++i)
	{
		if (gifts[i] == value)
			count++;
	}
	if (count < n / 2)
		return 0;
	else
		return value;
}

int main()
{
	vector<int> gifts;
	gifts.push_back(1);
	gifts.push_back(2);
	gifts.push_back(3);
	gifts.push_back(2);
	gifts.push_back(2);
	cout << getValue(gifts, 5) << endl;
	return 0;
}