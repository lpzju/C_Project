#include <iostream>
using namespace std;

int main(){
    int i = 5;
    int &b = i;
    int j;
    int &c = j;
    cout << i << " " << b << " " << j << " " << c << endl;
    j = 6;
    cout << i << " " << b << " " << j << " " << c << endl;
    c = 7;
    cout << i << " " << b << " " << j << " " << c << endl;
    return 0;
}
