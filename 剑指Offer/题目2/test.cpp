#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*����һ��
		ֻ�����ڵ����̻���
*/
class Singleton
{
public:
	static Singleton* getInstance();//<1>������static,�����ſ���ͨ���������ʡ�
private:
	static Singleton* _instance;//<2>������static,���������ڲ���ȫ�ֵġ�
	Singleton();//<3>������private�������Ͳ���ͨ�����캯����ʵ������
};

Singleton* Singleton::getInstance()
{
	if (_instance == NULL)
	{
		_instance = new Singleton();
	}
	return _instance;
}
Singleton* Singleton::_instance = NULL;//static���������ʼ��

Singleton::Singleton()    //���캯����ȻҪ�õ����������ڲ�Ҳ�����ˣ��ͱ��������������á�
{
	cout << "success" << endl;
}

int main()
{
	Singleton* sgt = Singleton::getInstance();
}

/*��������
	
*/
