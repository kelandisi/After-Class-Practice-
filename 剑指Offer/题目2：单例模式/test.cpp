#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//饿汉模式：就是说不管你将来用不用，程序启动时就创建一个唯一的实例对象。
// 优点：简单
// 缺点：可能会导致进程启动慢，且如果有多个单例类对象实例启动顺序不确定。

/*方法一：
		只适用于单进程环境
*/
//class Singleton
//{
//public:
//	static Singleton* getInstance();//<1>必须是static,这样才可以通过类名访问。
//private:
//	static Singleton* _instance;//<2>必须是static,这样生存期才是全局的。
//	Singleton();//<3>必须是private，这样就不能通过构造函数来实例化。
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
//Singleton* Singleton::_instance = NULL;//static变量必须初始化
//
//Singleton::Singleton()    //构造函数既然要用到，而且类内部也声明了，就必须给出定义才能用。
//{
//	cout << "success" << endl;
//}
//
//int main()
//{
//	Singleton* sgt = Singleton::getInstance();
//}

/*方法二：多线程通用:
	在C++11中static局部静态变量的访问时线程安全的：
	当一个线程正在初始化一个变量的时候，其他线程必须得等到该初始化完成以后才能访问它。
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
	//不想让一个类被隐式或显式地构造，就把它的构造函数和big three(拷贝构造函数，重载赋值运算符，析构函数)
	//给定义成private并且只声明不实现。这样别人就没法来用了。
	//否则的话，编译器会自动为它生成构造函数和big three。
	Singleton() {}                            
	Singleton(const Singleton& s);            
	Singleton& operator=(const Singleton& s); 
};
int main()
{
	Singleton& get = Singleton::GetInstance();
}




//懒汉模式：第一次使用实例对象时，创建对象
// 优点：第一次使用实例对象时，创建对象。进程启动无负载。多个单例实例启动顺序自由控制。
// 缺点：复杂


#include <iostream>
#include <mutex>
#include <thread>
using namespace std;
class Singleton
{
public:
	static Singleton* GetInstance() {
		// 注意这里一定要使用Double-Check的方式加锁，才能保证效率和线程安全
		if (nullptr == m_pInstance) {
				m_mtx.lock();
			if (nullptr == m_pInstance) {
				m_pInstance = new Singleton();
			}
			m_mtx.unlock();
		}
		return m_pInstance;
	}
	// 实现一个内嵌垃圾回收类 
	class CGarbo {
	public:
		~CGarbo() {
			if (Singleton::m_pInstance)
				delete Singleton::m_pInstance;
		}
	};
	// 定义一个静态成员变量，程序结束时，系统会自动调用它的析构函数从而释放单例对象
	static CGarbo Garbo;
private:
	// 构造函数私有
	Singleton() {};
	// 防拷贝
	Singleton(Singleton const&);
	Singleton& operator=(Singleton const&);
	static Singleton* m_pInstance; // 单例对象指针
	static mutex m_mtx; //互斥锁
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