/**
 * Created by lpzju on 2023/3/12 19:30
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

class ChongZai {
public:
    int m_a;
    int m_b;
    ChongZai() {
        m_a = 0;
        m_b = 0;
    }
    ChongZai operator+(ChongZai &cz) {
        ChongZai temp;
        temp.m_a = this -> m_a + cz.m_a;
        temp.m_b = this -> m_b + cz.m_b;
        return temp;
    }
};

// 全局函数实现重载
ChongZai operator+ (const ChongZai &cz1, const ChongZai &cz2) {
    ChongZai temp;
    temp.m_a = cz1.m_a + cz2.m_a;
    temp.m_b = cz1.m_b + cz2.m_b;
    return temp;
}

void test() {
    ChongZai cz1;
    cz1.m_a = 1;
    cz1.m_b = 4;
    ChongZai cz2;
    cz2.m_a = 10;
    cz2.m_b = 40;
//    cout << cz1.m_b << endl;
    ChongZai cz3 = cz1 + cz2;
    cout << cz3.m_a << endl << cz3.m_b << endl;
    cz1+cz2;
}

int main() {
    cout << "Let's start to solve a new problem" << endl;
    test();
    return 0;
}