//#include<iostream>
//using namespace std;
//int getmaxnum(int *p, int n)
//{
//	int *count = new int[1001];
//	for (int i = 0; i < 1000; i++)
//	{
//		count[i] = 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		count[p[i]]++;
//	}
//
//	int maxcount = count[0];
//	int maxnum = 0;
//	for (int i = 0; i < 1000; i++)
//	{
//		if (count[i] > n / 2)
//			maxcount = count[i];
//	}
//	for (int i = 0; i < 1000; i++)
//	{
//		if (count[i] == maxcount)
//			return i;
//	}
//}
//int main()
//{
//	int n = 0;
//	cin >> n;
//	int *p = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> p[i];
//	}
//
//	int ret = getmaxnum(p, n);
//	cout << ret;
//	system("pause");
//	return 0;
//}


#include<iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;
int MoreThanHalfNum_Solution(vector<int> numbers)
{
	map <int,int> m;
	for (int i = 0; i < numbers.size(); i++)
	{
		m[numbers[i]] +=1;
		if (m[numbers[i]]>numbers.size() / 2)
			return numbers[i];
	}
	return 0;
}
int fun(vector<int> a)
{
	int count = 0;
	sort(a.begin(), a.end());
	for (int i = 0; i < a.size(); i++)
	{
		int mid = a.size() / 2;
		if (a[i] == a[mid])
			count++;
		if (count > a.size() / 2)
			return a[i];
	}
	return 0;
}
int main()
{
	vector<int> arr;
	int a = 0;
	while (cin>>a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	int ret = fun(arr);
	cout << ret;
	system("pause");
	return 0;
}
