/**
 * Created by lpzju on 2023/3/12 13:53
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

class Building {
    friend void func1(Building &b);
public:
    string m_sittingRoom;
    Building(){
        m_bedroom = "bedroom";
        m_sittingRoom = "sitting room";
    }
private:
    string m_bedroom;
};

// 全局函数进行友元
void func1(Building &b) {
    cout << "全局函数访问友元 :" << b.m_sittingRoom << endl;
    cout << "全局函数访问友元 :" << b.m_bedroom << endl;
}

int main() {
    Building bb;
    func1(bb);
    cout << "Let's start to solve a new problem" << endl;
    return 0;
}