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



#include <algorithm>
#include <vector>
using namespace std;
int MoreThanHalfNum_Solution(vector<int> numbers)
{
	vector<int>::iterator it = numbers.begin(); //�����򣬸�����һ������λ����
	sort(it, numbers.end());        // ��ͳ�Ƹ����ֳ��ֵĴ������ж��Ƿ����㳬�����鳤�ȵ�һ��
	int mid = numbers.size() / 2;
	int count = 0;
	int size = numbers.size();
	for (int i = 0; i < size; i++)
	{
		if (numbers[mid] == numbers[i])
			count++;
		if (count > size / 2)
			return numbers[mid];
	}
	return 0;
}
