/**
 * Created by lpzju on 2023/3/15 15:30
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
    int m_a;
};

class Sheep : virtual public Animal {};
class Camel : virtual public Animal {};
class SheepCamel : public Sheep, Camel {

};

void test1() {
    SheepCamel sc;
    sc.m_a = 20; // member found by ambiguous name lookup
    cout << sc.m_a << endl;
}

int main() {
    cout << "Let's start to solve a new problem!" << endl;
    // printf("Let's start to solve a new problem!\n");
    test1();
    return 0;
}