#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<pthread.h>

using namespace std;
//单例模式：一个类只能实例化一个对象

//懒汉模式  第一次用到类实例的时候才会去实例化。
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

//上面这种简单的方式就是懒汉模式的单例模式，
//但是这种方法是线程不安全的，
//考虑两个线程同时首次调用 instance 方法
//且同时检测到 p 是 nullptr 值，
//则两个线程会同时构造一个实例给 p ，这是严重错误的。

//解决：加锁

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

//另一种实现方式使用内部静态变量：该方法很容易实现，在 instance 函数里定义一个静态的实例，也可以保证拥有唯一实例，
//在返回时只需要返回其指针就可以了。
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

//饿汉模式   饿了肯定要饥不择食，所以在单例类定义的时候就进行实例化。
//饿汉模式本来就是线程安全的
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


/*工厂模式：在工厂模式中，我们在创建对象时不会对客户端暴露创建逻辑，
并且是通过使用一个共同的接口来指向新创建的对象。
工厂模式作为一种创建模式，一般在创建复杂对象时，
考虑使用；在创建简单对象时，建议直接new完成一个实例对象的创建*/

int main()
{
	
	return 0;
}