/**
 * Created by lpzju on 2023/3/12 14:05
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

class Building1 {
    friend class GoodGay;
public:
    string m_sittingRoom;
    Building1();
    Building1(string sittingRomm, string bedRoom);
private:
    string m_bedRoom;
};

Building1::Building1() {
    m_sittingRoom = "sittingRoom";
    m_bedRoom = "bedRoom";
}

Building1::Building1(string sittingRomm, string bedRoom) {
    m_sittingRoom = sittingRomm;
    m_bedRoom = bedRoom;
}

class GoodGay {
public:
    GoodGay();
    Building1 *building;
    void visit();
};

GoodGay::GoodGay() {
    building = new Building1();
}

void GoodGay::visit() {
    cout << "GoodGay is visiting " << building -> m_bedRoom << endl;
}

int main() {
    cout << "Let's start to solve a new problem" << endl;
    Building1 b1;
//    cout << b1.m_sittingRoom << b1.m_bedRoom << endl;
    Building1 b2("sitting","bedroom");
//    cout << b2.m_sittingRoom << b2.m_bedRoom << endl;
    GoodGay gg1;
    gg1.visit();
    return 0;
}