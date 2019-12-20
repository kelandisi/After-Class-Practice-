#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> sort(vector<int>& res);
int main() {
	int cishu;
	int n, k;
	cin >> cishu;
	while (cishu) {
		cin >> n >> k;
		vector<int> res(2 * n);
		for (unsigned int i = 0; i < 2 * n; ++i) {
			cin >> res[i];
		}
		while (k) {
			res = sort(res);
			k--;
		}
		for (int i = 0; i < res.size(); i++) {
			if (i != res.size() - 1)
				cout << res[i] << " ";
			else
				cout << res[i];
		}
		cout << endl;
		cishu--;
	}
	system("pause");
	return 0;
}
vector<int> sort(vector<int>& res) {
	int size = res.size();
	int i = size / 2;
	int j = 1;
	vector<int> r;
	while (i) {
		r.push_back(res[size - j]);
		r.push_back(res[(size / 2) - j]);
		j++;
		i--;
	}
	for (int i = 0; i < (r.size() / 2); i++) {
		swap(r[i], r[r.size() - i - 1]);
	}
	return r;
}