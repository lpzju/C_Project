#include <iostream>
using namespace std;

class MyInteger{
    friend void func1(MyInteger &mt);
    friend ostream &operator<<(ostream &basicOstream,MyInteger mt);
private:
    int m_num;
public:
    MyInteger(){
        cout << "MyInteger wucan" << endl;
        m_num = 1;
    }
    MyInteger(int num) {
        m_num = num;
        cout << "MyInteger daican" << endl;
    }
    MyInteger &operator+(MyInteger mt){
        this->m_num += mt.m_num;
        return *this;
    }
    MyInteger &operator++() {
        this->m_num++;
        return *this;
    }
    MyInteger operator++(int) {
        MyInteger temp = *this;
        this->m_num++;
        return temp;
    }
};

void func1(MyInteger &mt) {
    cout << "quanjuhanshu fangwen siyoubianliang :" << mt.m_num << endl;
}
ostream &operator<<(ostream &basicOstream, MyInteger mt){
    basicOstream << mt.m_num << endl;
    return basicOstream;
}


int main() {
    cout << "Let's Start to solve a new problem!" << endl;
    MyInteger mt1;
    MyInteger mt2(2);
    func1(mt1);
    func1(mt2);
    mt1+mt2;
    func1(mt1);
    func1(mt2);
    cout << mt2 << endl;
    ++mt2;
    cout << mt2 << endl;
    cout << ++(++mt2);
    cout << mt2 << endl;
    cout << "houzhi" << endl;
    cout << (mt2++)++;
    cout << mt2 << endl;
    return 0;
}