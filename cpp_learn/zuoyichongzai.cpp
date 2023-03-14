/**
 * Created by lpzju on 2023/3/12 20:12
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

class Zuoyi {
public:
    int m_a;
    int m_b;
    Zuoyi(){
        m_b = 5;
        m_a = 1;
    }
};

ostream &operator<<(ostream &cout, Zuoyi &zy) {
    cout << "m_a:" <<zy.m_a << ",m_b:" << zy.m_b;
    return cout;
}

int main() {
    cout << "Let's start to solve a new problem" << endl;
    Zuoyi zy;
    cout << zy << endl;
    return 0;
}