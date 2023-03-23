/**
 * Created by lpzju on 2023/3/14 14:05
 */
//#include <stdio.h>
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

class Guanxi{
private:
    int m_a;
    int m_b;
public:
    Guanxi(int a, int b){
        m_a = a;
        m_b = b;
    }
    Guanxi() {
        m_a = 10;
        m_b = 20;
    }
    bool operator==(Guanxi &gx) {
        if (this->m_a == gx.m_a && this->m_b == gx.m_b) {
            return true;
        } else {
            return false;
        }
    }
};


void test11(Guanxi gx1, Guanxi gx2) {
    bool res = gx1 == gx2;
    cout << res << endl;
}

int main() {
    cout << "Let's start to solve a new problem!" << endl;
    // printf("Let's start to solve a new problem!\n");
    Guanxi a(10,21);
    Guanxi b;
    test11(a,b);
    return 0;
}