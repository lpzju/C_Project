#include <iostream>
using namespace std;
#include <cstring>

int main() {
    char *s = "hello";
    cout << s << endl;
    cout << strcmp(s,"hello") << endl;
        cout <<strcmp(s,"world") << endl;
    return 0;
}
