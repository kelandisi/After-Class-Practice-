#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
class Solution {
public:
	vector<int> sortedSquares(vector<int>& A) {
		vector <int>B(A.size(),0);
		for (int i = 0; i<A.size(); i++)
		{
			B[i] = A[i] * A[i];
		}
		sort(B.begin(), B.end());
		return B;
	}
};

int main()
{
	vector <int>A;
	vector <int>ret;

	int a = 0;
	while (cin>>a)
	{
		A.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	Solution s;
	ret = s.sortedSquares(A);
	for (int i = 0; i < ret.size(); i++)
	{
		cout << ret[i] << " ";
	}
	system("pause");
	return 0;
}