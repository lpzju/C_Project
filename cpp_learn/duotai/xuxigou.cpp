/**
 * Created by lpzju on 2023/3/19 14:27
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

class Anima1 {
public:
    Anima1() {
        cout << "Animal gouzao" << endl;
    }
    virtual void speak() = 0;
    virtual ~Anima1() {
        cout << "Animal xigou" << endl;
    }
};

class Cat1 : public Anima1 {
public:
    Cat1(string name) {
        cout << "Cat gouzao" << endl;
        m_name = new string(name);
    }
    void speak() override{
        cout << "cat " << *m_name << " is speaking" << endl;
    }
    ~Cat1() {
        if (m_name != nullptr) {
            cout << "Cat xigou" << endl;
            delete m_name;
            m_name = nullptr;
        }
    }
    string *m_name;
};

void test() {
    Anima1 *anima1 = new Cat1("tom");
    anima1->speak();
    delete anima1;
}


int main() {
    cout << "Let's start to solve a new problem!" << endl;
    // printf("Let's start to solve a new problem!\n");
    test();
    return 0;
}