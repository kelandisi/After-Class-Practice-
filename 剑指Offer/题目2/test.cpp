#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*方法一：
		只适用于单进程环境
*/
class Singleton
{
public:
	static Singleton* getInstance();//<1>必须是static,这样才可以通过类名访问。
private:
	static Singleton* _instance;//<2>必须是static,这样生存期才是全局的。
	Singleton();//<3>必须是private，这样就不能通过构造函数来实例化。
};

Singleton* Singleton::getInstance()
{
	if (_instance == NULL)
	{
		_instance = new Singleton();
	}
	return _instance;
}
Singleton* Singleton::_instance = NULL;//static变量必须初始化

Singleton::Singleton()    //构造函数既然要用到，而且类内部也声明了，就必须给出定义才能用。
{
	cout << "success" << endl;
}

int main()
{
	Singleton* sgt = Singleton::getInstance();
}

/*方法二：
	
*/
