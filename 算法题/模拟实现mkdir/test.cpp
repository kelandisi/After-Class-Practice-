#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;
int main()
{
	int n = 0;
	while (cin >> n)
	{
		vector <string> arr(n);
		vector <bool> falg(n, true);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());
		for (int i = 0; i < arr.size() - 1; i++)
		{
			if (arr[i] == arr[i + 1])
				falg[i] = false;
			else if (arr[i].size() < arr[i + 1].size() && arr[i] == arr[i + 1].substr(0, arr[i].size())
				&& arr[i + 1][arr[i].size()] == '/')//lambda±í´ïÊ½
				falg[i] = false;
		}
		for (int i = 0; i < arr.size(); i++)
		{
			if (falg[i])
			{
				cout << "mkdir -p " << arr[i] << endl;
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}