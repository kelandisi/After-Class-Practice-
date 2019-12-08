#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
void oddInOddEvenInEven(vector<int>& arr, int len)
{
	int i = 0;
	int j = 1;
	while (i < len&&j < len)
	{
		while (i < len&&arr[i] % 2 == 0)
			i += 2;
		while (j < len&&arr[j] % 2 == 1)
			j += 2;
		if (i < len&&j < len)
		{
			//	swap(arr[i],arr[j]);
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;

		}
	}
}
};
int main()
{
	Solution s;
	vector<int> arr;
	int a = 0;
	while(cin >> a)
	{		
		arr.push_back(a);
		if (cin.get() == '\n')//如果是回车符则跳出循环
			break;
	}
	int len = arr.size();
	s.oddInOddEvenInEven(arr,len);
	for (vector<int>::iterator itr = arr.begin(); itr != arr.end(); ++itr)
		  {
	       cout << *itr <<" ";
		  }
	system("pause");
	return 0;
}