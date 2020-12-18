#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<pthread.h>

using namespace std;
//����ģʽ��һ����ֻ��ʵ����һ������

//����ģʽ  ��һ���õ���ʵ����ʱ��Ż�ȥʵ������
/*class singleton
{
protected:
	singleton(){}
private:
	static singleton* p;
public:
	static singleton* instance()
	{
		if (p == nullptr)
			p = new singleton();
		return p;
	}
};
singleton* singleton :: p = nullptr;*/

//�������ּ򵥵ķ�ʽ��������ģʽ�ĵ���ģʽ��
//�������ַ������̲߳���ȫ�ģ�
//���������߳�ͬʱ�״ε��� instance ����
//��ͬʱ��⵽ p �� nullptr ֵ��
//�������̻߳�ͬʱ����һ��ʵ���� p ���������ش���ġ�

//���������

/*
class singleton
{
protected:
	singleton()
	{
		pthread_mutex_init(&mutex, nullptr);
	}
private:
	static singleton* p;
public:
	static pthread_mutex_t mutex;
	static singleton* instance()
	{
		if (p == nullptr)
		{
			pthread_mutex_lock(&mutex);
			if (p == nullptr)
			{
				p = new singleton();
			}
			pthread_mutex_unlock(&mutex);
		}
		return p;
	}
};
singleton* singleton::p = nullptr;
*/

//��һ��ʵ�ַ�ʽʹ���ڲ���̬�������÷���������ʵ�֣��� instance �����ﶨ��һ����̬��ʵ����Ҳ���Ա�֤ӵ��Ψһʵ����
//�ڷ���ʱֻ��Ҫ������ָ��Ϳ����ˡ�
/*
class singleton
{
private:
	static singleton *p;
protected:
	singleton()
	{
		pthread_mutex_init(&mutex, nullptr);
	}
public:
	static pthread_mutex_t mutex;
	static singleton* instance()
	{
		pthread_mutex_lock(&mutex);
		static singleton tmp;
		pthread_mutex_unlock(&mutex);
		return &tmp;
	}
};
singleton* singleton::p = nullptr;
*/

//����ģʽ   ���˿϶�Ҫ������ʳ�������ڵ����ඨ���ʱ��ͽ���ʵ������
//����ģʽ���������̰߳�ȫ��
/*class singleton
{
protected:
	singleton(){}
private:
	static singleton *p;
public:
	static singleton* instance()
	{
		return p;
	}
};
singleton* singleton::p = new singleton();*/


/*����ģʽ���ڹ���ģʽ�У������ڴ�������ʱ����Կͻ��˱�¶�����߼���
������ͨ��ʹ��һ����ͬ�Ľӿ���ָ���´����Ķ���
����ģʽ��Ϊһ�ִ���ģʽ��һ���ڴ������Ӷ���ʱ��
����ʹ�ã��ڴ����򵥶���ʱ������ֱ��new���һ��ʵ������Ĵ���*/

int main()
{
	
	return 0;
}