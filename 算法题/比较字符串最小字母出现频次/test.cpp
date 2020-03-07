#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
	int f(string& s) {
		char min = s[0];
		int count = 1;
		int length = s.length();
		for (int i = 1; i < length; i++) {
			if (s[i] < min) {
				min = s[i];
				count = 1;
				continue;
			}
			if (s[i] == min) {
				count++;
			}
		}
		return count;
	}

	vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
		vector<int> result;
		vector<int> fwords;
		//先计算好words数组中每个元素调用f函数的值，存到fwords数组中
		for (auto it = words.begin(); it != words.end(); it++) {
			fwords.push_back(f(*it));
		}
		sort(fwords.begin(), fwords.end());
		int size = fwords.size();
		for (auto it = queries.begin(); it != queries.end(); it++) {
			int fquery = f(*it);
			//对于每个f(queries[i])，用二分查找找到应该插入的位置，再用size减去位置，就得到了数组中比它大的元素个数
			result.push_back(size - (upper_bound(fwords.begin(), fwords.end(), fquery) - fwords.begin()));
		}
		return result;
	}
};

int main()
{
	Solution s;
	string str1;	
	string str2;
	vector<int> result;
	vector<string> arr1;
	while (cin>>str1)
	{
		if (cin.get() == '\n')
			break;
	}
	vector<string> arr2;
	while (cin >> str2)
	{
		if (cin.get() == '\n')
			break;
	}
	result = s.numSmallerByFrequency(arr1, arr2);
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i];
	}
	system("pause");
	return 0;
}

