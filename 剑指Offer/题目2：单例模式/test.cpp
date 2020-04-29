#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//����ģʽ������˵�����㽫���ò��ã���������ʱ�ʹ���һ��Ψһ��ʵ������
// �ŵ㣺��
// ȱ�㣺���ܻᵼ�½�����������������ж�����������ʵ������˳��ȷ����

/*����һ��
		ֻ�����ڵ����̻���
*/
//class Singleton
//{
//public:
//	static Singleton* getInstance();//<1>������static,�����ſ���ͨ���������ʡ�
//private:
//	static Singleton* _instance;//<2>������static,���������ڲ���ȫ�ֵġ�
//	Singleton();//<3>������private�������Ͳ���ͨ�����캯����ʵ������
//};
//
//Singleton* Singleton::getInstance()
//{
//	if (_instance == NULL)
//	{
//		_instance = new Singleton();
//	}
//	return _instance;
//}
//Singleton* Singleton::_instance = NULL;//static���������ʼ��
//
//Singleton::Singleton()    //���캯����ȻҪ�õ����������ڲ�Ҳ�����ˣ��ͱ��������������á�
//{
//	cout << "success" << endl;
//}
//
//int main()
//{
//	Singleton* sgt = Singleton::getInstance();
//}

/*�����������߳�ͨ��:
	��C++11��static�ֲ���̬�����ķ���ʱ�̰߳�ȫ�ģ�
	��һ���߳����ڳ�ʼ��һ��������ʱ�������̱߳���õȵ��ó�ʼ������Ժ���ܷ�������
*/
class Singleton
{
public:
	static Singleton& GetInstance()
	{
		static Singleton instance;
		return instance;
	}

private:
	//������һ���౻��ʽ����ʽ�ع��죬�Ͱ����Ĺ��캯����big three(�������캯�������ظ�ֵ���������������)
	//�������private����ֻ������ʵ�֡��������˾�û�������ˡ�
	//����Ļ������������Զ�Ϊ�����ɹ��캯����big three��
	Singleton() {}                            
	Singleton(const Singleton& s);            
	Singleton& operator=(const Singleton& s); 
};
int main()
{
	Singleton& get = Singleton::GetInstance();
}




//����ģʽ����һ��ʹ��ʵ������ʱ����������
// �ŵ㣺��һ��ʹ��ʵ������ʱ���������󡣽��������޸��ء��������ʵ������˳�����ɿ��ơ�
// ȱ�㣺����


#include <iostream>
#include <mutex>
#include <thread>
using namespace std;
class Singleton
{
public:
	static Singleton* GetInstance() {
		// ע������һ��Ҫʹ��Double-Check�ķ�ʽ���������ܱ�֤Ч�ʺ��̰߳�ȫ
		if (nullptr == m_pInstance) {
				m_mtx.lock();
			if (nullptr == m_pInstance) {
				m_pInstance = new Singleton();
			}
			m_mtx.unlock();
		}
		return m_pInstance;
	}
	// ʵ��һ����Ƕ���������� 
	class CGarbo {
	public:
		~CGarbo() {
			if (Singleton::m_pInstance)
				delete Singleton::m_pInstance;
		}
	};
	// ����һ����̬��Ա�������������ʱ��ϵͳ���Զ������������������Ӷ��ͷŵ�������
	static CGarbo Garbo;
private:
	// ���캯��˽��
	Singleton() {};
	// ������
	Singleton(Singleton const&);
	Singleton& operator=(Singleton const&);
	static Singleton* m_pInstance; // ��������ָ��
	static mutex m_mtx; //������
};
Singleton* Singleton::m_pInstance = nullptr;
Singleton::CGarbo Garbo;
mutex Singleton::m_mtx;
void func(int n) {
	cout << Singleton::GetInstance() << endl;
}
int main()
{
	thread t1(func, 10);
	thread t2(func, 10);
	t1.join();
	t2.join();
	cout << Singleton::GetInstance() << endl;
	cout << Singleton::GetInstance() << endl;
}