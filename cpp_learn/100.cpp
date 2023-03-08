#include <iostream>
using namespace std;

class Student{
public:
    string Name;
    string uid;
    void setName(string name) {
        Name = name;
    }
    void setUid(string uid) {
        uid = uid;
    }
    void show() {
        cout << Name << endl << uid << endl;
    }
};

int main() {
    Student s1;
    cin >> s1.Name >> s1.uid;
    s1.show();
    string nn;
    cin >> nn;
    cout << "nn" << nn << endl;
    s1.setName(nn);
    // s1.show();
    cout << s1.Name << s1.uid << endl;
    return 0;
}

