//
// Created by 45970 on 2023/3/11.
//

#include <iostream>

using namespace std;

class SS {
public:
    int s_age;

//    int *s_len;
    SS() {
        s_age = 5;
        cout << "gouzao" << endl;
    }
};

int main() {
    SS s1;
    cout << s1.s_age << endl;
}