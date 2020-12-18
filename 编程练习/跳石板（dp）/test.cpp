#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void yueshu(int x, vector<int>& v)
{
	for (int i = 2; i*i <= x; i++)
	{
		if (x%i == 0)
		{
			v.push_back(i);
			if (x / i != i)
				v.push_back(x / i);
				
		}
	}
}


int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> res(m+1, INT_MAX);
	res[n] = 0;
	for (int i = n; i < m; ++i)
	{
		if (res[i] == INT_MAX)
			continue;
		vector<int> v;
		yueshu(i, v);

		for (const auto it : v)
		{
			if (i + it <= m)
				res[i + it] = min(res[i + it], res[i] + 1);  //1.位置i+it原本可到达，更新为较小的
															 //从位置i走，一次it步长可到达位置i+it,
															 //即从N到达位置i+it,所以一个可选方案是走ret[i]+1步，与原本的值保留较小的
											 //2.位置i+it本不可达，现在已知从位置i走一次步长为it可到达该位置，因此更新为ret[i]+1
		}
	}

	if (res[m] == INT_MAX)
		cout << -1;
	else
		cout << res[m];
	
	system("pause");
	return 0;
}