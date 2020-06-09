#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
	vector<int> printNumbers(int n) {
		vector<int> res;
		if (n == 0) return res;
		//��ӡ��������
		for (int i = 1, max = pow(10, n); i<max; i++)
		{
			res.push_back(i);
		}
		return res;
	}
};


//�ݹ�ⷨ
class Solution
{
public:
	vector<int> res;
	vector<int> printNumbers(int n) {
		if (n <= 0) return res;
		string number(n, '0');
		for (int i = 0; i <= 9; i++)
			//�Ӹ�λ����λ����ȫ����
		{
			number[0] = i + '0';//���ַ�����ֵ
			permutationNumbers(number, n, 1);//������һλ
		}
		return res;
	}
	//������ȫ����
	void permutationNumbers(string& number, int length, int index) {
		if (index == length) {//�ݹ�߽�
			saveNumber(number);//�洢���
			return;
		}
		else
		{
			for (int i = 0; i <= 9; i++)
			{
				number[index] = '0' + i;//���õ�indexλ���ַ�
				permutationNumbers(number, length, index + 1);
			}
		}
	}
	//�洢���
	//ֻ�ܴ洢ǰ����0������
	void saveNumber(string number) {
		bool isBegin0 = true;
		string tempStr = "";
		string::iterator it = number.begin();
		while (it != number.end())
		{
			if (isBegin0 && *it != '0') isBegin0 = false;
			if (!isBegin0) {
				tempStr += *it;
			}
			it++;
		}
		//�Ӹ�λ����λȫ���У�Ҫע�����ַ�Ϊ0ʱ��tempStrΪ�գ�����ִ��stoi
		if (tempStr != "") {
			int tempNum = stoi(tempStr);
			res.push_back(tempNum);
		}
	}
};


int main()
{
	Solution s;
	vector<int> ret;
	int n = 0;
	cin >> n;
	ret = s.printNumbers(n);
	for (int i = 0; i < ret.size(); i++)
	{
		cout << ret[i]<<" ";
	}
	system("pause");
	return 0;
}