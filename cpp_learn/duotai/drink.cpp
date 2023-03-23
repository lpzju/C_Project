/**
 * Created by lpzju on 2023/3/18 16:19
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

class AbstractDrink {
public:
    virtual void boil() = 0;
    virtual void brew() = 0;
    virtual void addSome() = 0;
    virtual void mix() = 0;
    void makeDrink() {
        boil();
        brew();
        addSome();
        mix();
    }
};

class Coffee : public AbstractDrink {
public:
    void boil() override {
        cout << "kaishui" << endl;
    }
    void brew() override {
        cout << "chongpao" << endl;
    }
    void addSome() override {
        cout << "fengmi" << endl;
    }
    void mix() override {
        cout << "mix" << endl;
    }
};

void doWork(AbstractDrink *ad) {
    ad->makeDrink();
    if (ad != nullptr) {
        delete ad;
    }
}

void test() {
        doWork(new Coffee);
};

int main() {
    cout << "Let's start to solve a new problem!" << endl;
    // printf("Let's start to solve a new problem!\n");
    test();
    return 0;
}