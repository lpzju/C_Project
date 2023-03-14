/**
 * Created by lpzju on 2023/3/12 20:48
 */

#include <iostream>
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

// 希望新建的ZiZeng zz，可以实现自增
class ZiZeng {
    friend ostream &operator<<(ostream &cout, ZiZeng zz);
private:
    int m_a;
public:
    ZiZeng(){
        m_a = 0;
    }
    ZiZeng(int a){
        m_a = a;
    }
    ZiZeng &operator++(){
        m_a++;
        return *this;
    }
};

ostream &operator<<(ostream &cout, ZiZeng zz) {
    cout << zz.m_a << endl;
    return cout;
}


void test() {
    ZiZeng zz(5);
    cout << zz << endl;
    cout << ++zz << endl;
}

int main() {
    cout << "Let's start to solve a new problem" << endl;
    test();
    return 0;
}