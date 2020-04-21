#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

// 如下为类型CMyString的声明 为该类添加赋值运算符重载函数
using namespace std;

class CMyString
{
public:
	CMyString(char* pData = nullptr);
	CMyString(const CMyString& str);
	~CMyString(void);
private:
	char* m_pData;
};

CMyString& CMyString::operator=(const CMyString& str)
{
	if (this != &str)
	{
		CMyString StrTmp(str);
		char* tmp = str.m_pData;
		StrTmp.m_pData = m_pData;
		m_pData = tmp;
	}
	return *this;
}
int main()
{
	
	return 0;
}