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
				res[i + it] = min(res[i + it], res[i] + 1);  //1.λ��i+itԭ���ɵ������Ϊ��С��
															 //��λ��i�ߣ�һ��it�����ɵ���λ��i+it,
															 //����N����λ��i+it,����һ����ѡ��������ret[i]+1������ԭ����ֵ������С��
											 //2.λ��i+it�����ɴ������֪��λ��i��һ�β���Ϊit�ɵ����λ�ã���˸���Ϊret[i]+1
		}
	}

	if (res[m] == INT_MAX)
		cout << -1;
	else
		cout << res[m];
	
	system("pause");
	return 0;
}