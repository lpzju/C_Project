/**
 * Created by lpzju on 2023/3/12 20:30
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

class ZuoyiC{
    friend ostream &operator<<(ostream &cout,ZuoyiC zc);
private:
    int m_a;
    int m_b;
public:
    ZuoyiC(int a,int b){
        m_a = a;
        m_b = b;
    }
};

ostream &operator<<(ostream &cout,ZuoyiC zc){
    cout << "m_a: " << zc.m_a << ", m_b: " << zc.m_b << endl;
    return cout;
}

int main() {
    cout << "Let's start to solve a new problem" << endl;
    ZuoyiC zc(4,6);
    cout << zc << endl;
    return 0;
}