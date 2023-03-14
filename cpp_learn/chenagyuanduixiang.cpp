#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <list>
#include <queue>
#include <map>
#include <iterator>
#include <stack>
using namespace std;

class SSS {
public:
    string s_name;
    SSS(){
        cout << "SSS wucan" << endl;
    }
    SSS(string name) {
        cout << "SSS daican" << endl;
        s_name = name;
    }
};

class PPP {
public:
    int uid;
    SSS s1;
    PPP(){
        cout << "PPP wucan" << endl;
    }
//    PPP(int u,string name){
//        cout << "PPP daican" << endl;
//        uid = u;
//        s1.s_name = name;
//    }
    PPP(int u,string name):uid(u),s1(name){
        cout << "PPP daican" << endl;
    }
};

int main() {
    cout << "Let's Start to solve a new problem!" << endl;
    SSS s3;
    s3.s_name = "xiaomi";
    PPP p1;
    p1.uid = 10;
    p1.s1 = s3;
    cout << p1.uid << p1.s1.s_name << endl;
    PPP p2(18,"huawei");
    cout << p2.uid << p2.s1.s_name << endl;
    return 0;
}