#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // string name1 = "hello";
    // string name2 = "hello";
    // char name3[] = "hello";
    // if (name1 == name3) {
    //     cout <<"1" << endl;
    // } else {
    //     cout << "2" << endl;
    // }
    ifstream ifs;
    ifs.open("hello1.txt");
    char ch;
    ifs >> ch;
    if(ifs.eof()) {
        cout << "1";
    } else {
        cout << "2";
    }
}