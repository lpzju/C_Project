/**
 * Created by lpzju on 2023/3/21 20:33
 */
//#include <stdio.h>
#include <iostream>
#include <ctime>
#include <list>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <cmath>
#include <queue>
#include <iterator>
#include <stack>

using namespace std;

class Animal {
public:

    Animal()
    {
        cout << "Animal xigou" << endl;
    }
    virtual void Speak() = 0;

    //析构函数加上virtual关键字，变成虚析构函数
    virtual ~Animal()
    {
    	cout << "Animal chunxu xigou" << endl;
    }


//    virtual ~Animal() = 0;
};

//Animal::~Animal()
//{
//    cout << "Animal 纯虚析构函数调用！" << endl;
//}

//和包含普通纯虚函数的类一样，包含了纯虚析构函数的类也是一个抽象类。不能够被实例化。

class Cat : public Animal {
public:
    Cat(string name)
    {
        cout << "Cat gouzao" << endl;
        m_Name = new string(name);
    }
    virtual void Speak()
    {
        cout << *m_Name <<  " cat speak" << endl;
    }
    ~Cat()
    {
        cout << "Cat xigou" << endl;
        if (this->m_Name != NULL) {
            delete m_Name;
            m_Name = NULL;
        }
    }

public:
    string *m_Name;
};

void test01()
{
    Animal *animal = new Cat("Tom");
    animal->Speak();

    //通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏
    //怎么解决？给基类增加一个虚析构函数
    //虚析构函数就是用来解决通过父类指针释放子类对象
    delete animal;
}

int main() {

    test01();

    system("pause");

    return 0;
}

