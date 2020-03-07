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
		//�ȼ����words������ÿ��Ԫ�ص���f������ֵ���浽fwords������
		for (auto it = words.begin(); it != words.end(); it++) {
			fwords.push_back(f(*it));
		}
		sort(fwords.begin(), fwords.end());
		int size = fwords.size();
		for (auto it = queries.begin(); it != queries.end(); it++) {
			int fquery = f(*it);
			//����ÿ��f(queries[i])���ö��ֲ����ҵ�Ӧ�ò����λ�ã�����size��ȥλ�ã��͵õ��������б������Ԫ�ظ���
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

